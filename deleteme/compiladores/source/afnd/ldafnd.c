#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "strlist.h"

typedef struct afnd_header{
	s_list Q,E,S,F;
	int q,e,s,f;

} afnd_header;

typedef struct afnd_data{
	int d;
	s_list **** space;
}afnd_data;


int read_set(s_list * set, char * line){
	int element_count=0;
	char * chunk;
	chunk = strtok(line, ",");
	while(chunk!=NULL){
		fix_endLine(chunk);
		s_insert(set,chunk);
		element_count++;
		chunk = strtok(NULL,",");
	}
	return element_count;
}

afnd_header read_header(FILE * input, FILE * output){

	afnd_header header;
	char buffer[Q_MAX];
	
	//Leer conjunto de estados
	header.Q.head=NULL;
	fgets(buffer,Q_MAX,input);
	fix_endLine(buffer);
	strcat(buffer,",err\n");
	fwrite(buffer,1,strlen(buffer)/sizeof(char),output);
	header.q = read_set(&header.Q,buffer);
	
	//Leer alfabeto
	header.E.head=NULL;
	fgets(buffer,Q_MAX,input);
	//fwrite(buffer,1,strlen(buffer)/sizeof(char),output);
	header.e = read_set(&header.E,buffer);

	//Leer estados iniciales
	header.S.head=NULL;
	fgets(buffer,Q_MAX,input);
	fwrite(buffer,1,strlen(buffer)/sizeof(char),output);
	header.s = read_set(&header.S,buffer);

	//Leer estados finales
	header.F.head=NULL;
	fgets(buffer,Q_MAX,input);
	fwrite(buffer,1,strlen(buffer)/sizeof(char),output);
	header.f = read_set(&header.F,buffer);

	return header;
}



afnd_data read_data(FILE * input, int q, int e, afnd_header * header){
	afnd_data data;
	int i,j,k,count=0,error=0;
	char buffer[Q_MAX], * chunk;

	data.space = s_makespace(q,e,q);
	while(error==0){
		fgets(buffer,Q_MAX,input);
		count++;

		chunk = strtok(buffer,",");
		i = s_get(&header->Q,chunk);
		
		chunk = strtok(NULL,",");
		j = s_get(&header->E,chunk);
		
		chunk = strtok(NULL,",");
		
		fix_endLine(chunk);
		k = s_get(&header->Q,chunk);
		
		if(i<0){
			printf("> Error en transición %d: estado de entrada no pertenece a Q\n",count);
			error=1;
		}else {
			if(j<0){
				printf("> Error en transición %d: simbolo no pertenece a E\n",count);
				error=1;
			}else {
				if(k<0){
					printf("> Error en transición %d: estado de salida no pertenece a Q\n",count);
					error=1;
				}else {
					data.space[i][j][k] = s_getbyKey(&header->Q,chunk);
				}
			}
		}
		if(feof(input)) error=1;
	}

	data.d = count;
	return data;
}


void write_data(afnd_data * delta, afnd_header * header,FILE * output){
	int i,j,k,q,e,t_count,catBracket_count,catBracket_err,t_err,l;
	char buffer[Q_MAX],err_buffer[Q_MAX];

	s_list * q_spy,* e_spy,err_colect;
	q = header->q;
	e = header->e;
	
	for(i=0;i<q;i++){

		q_spy=s_getByIndex(&header->Q, i);

		buffer[0] = '\0';
		strcat(buffer,"~");
		strcat(buffer,q_spy->value);
		strcat(buffer,"\n");		
		fwrite(buffer,1,strlen(buffer)/sizeof(char),output);
		
		
		t_err=0;
		err_colect.head=NULL;
		err_buffer[0] = '\0';
		
		k=0;
		t_count=0;
		while(k<q){

			catBracket_count=0;
			catBracket_err=0;		
			buffer[0]='\0';

			for(j=0;j<e;j++){
				if(delta->space[i][j][k]!=NULL){//SIEXISTE LA TRANSICIÓN
					t_count++;
					catBracket_count++;
					if(catBracket_count==1) {
						strcat(buffer,"[");
						catBracket_count=-Q_MAX;
					}
					e_spy = s_getByIndex(&header->E, j);
					strcat(buffer,e_spy->value);
					
					if(err_colect.head==NULL){
						s_insert(&err_colect,e_spy->value);
						t_err++;
						//printf("Inserta %s en err_colect\n",e_spy->value);
					}else{
						if(s_inSet(&err_colect,e_spy->value)==0){
							s_insert(&err_colect,e_spy->value);
							t_err++;
							//printf("Inserta %s en err_colect\n",e_spy->value);							
						}
					}
				}
			}
			if(strlen(buffer)>0){
				q_spy = s_getByIndex(&header->Q, k);
				strcat(buffer,"]");
				strcat(buffer,q_spy->value);
				strcat(buffer,"\n");
				fwrite(buffer,1,strlen(buffer)/sizeof(char),output);
			}
			k++;
		}

		if(!(e-t_err==0)){
			strcpy(err_buffer,"[");
			for(l=0;l<e;l++){
				e_spy=s_getByIndex(&header->E,l);
				if(s_inSet(&err_colect,e_spy->value)==0){
					strcat(err_buffer,e_spy->value);
				}
			}
			strcat(err_buffer,"]err\n");
			fwrite(err_buffer,1,strlen(err_buffer)/sizeof(char),output);
		}
		buffer[0]='\0';
		strcat(buffer,"-\n");
		fwrite(buffer,1,strlen(buffer)/sizeof(char),output);			
		}
	fwrite("--END",1,5,output);
}
int main(int argc, char *argv[]){

	afnd_header header;
	afnd_data	delta;
	int i,j,k;
	FILE * input, * output;
	char string[Q_MAX],out_name[255];
	
	//Verificaicón de archivo
	if(argc>1){
		input = fopen(argv[1],"r");
		if(input==NULL){
			printf("> Error! No se encuentra el archivo %c%s%c\n",34,argv[1],34);
			return 0;
		}
	}else {
		printf(" > Error! Se debe especificar un archivo de entrada\n");
		return 0;
	}
	strcpy(out_name,strtok(argv[1],"."));
	strcat(out_name,".afnd");

	output = fopen(out_name,"w");
	//Lee cabecera de automata
	header = read_header(input, output);
	//Lee transiciones de automata
	delta = read_data(input,header.q,header.e,&header);

	//Imprime info
	if(argc>2){
		if(strcmp(argv[2],"-p")==0){
			printf("> %d estados leidos: Q={",header.q-1);
				s_print(&header.Q,44,header.q-1);printf("}\n");
			printf("> %d simbolos leidos: E={",header.e);
				s_print(&header.E,44,header.e);printf("}\n");
			printf("> %d estado inicial: S={",header.s);
				s_print(&header.S,44,header.s);printf("}\n");
			printf("> %d estado(s) inicial(es): F={",header.f);
				s_print(&header.F,44,header.f);printf("}\n");
			printf("> %d transiciones leidas\n",delta.d);
		}
	}

	//Escribe automata equivalente
	write_data(&delta,&header,output);

	fclose(input);
	fclose(output);

	return 1;
}
