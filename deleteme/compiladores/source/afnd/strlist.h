#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define Q_MAX 256

typedef struct string_node{
	char value[20];
	struct string_node * next,*head;
} s_list;


//Inserta nodo con valor element en la lista list
void s_insert(s_list * list,char * element){
	s_list * new_node =(s_list*)malloc(sizeof(s_list)), *spy;
	strcpy(new_node->value,element);
	new_node->next = NULL;
	if(list->head==NULL){
		list->head = new_node;
		list->next = NULL;
	}else {
		spy = list->head;
		while(spy->next!=NULL){
			spy= spy->next;
		}
		spy->next = new_node;
	}
}

//Imprime los valores de una lista separados por un caracter dado
void s_print(s_list * list, char separator,int lim){
		int i=1;
		s_list * spy;
		spy = list->head;
		while(spy->next!=NULL&&i<lim){
			printf("%s%c",spy->value,separator);
			spy= spy->next;
			i++;
		}
		printf("%s",spy->value);
}

//Cocatena los valores de los nodos de una lista en una cadne separados por un caracter dado
void s_printToString(s_list * list, char * string){
		s_list * spy;
		spy = list->head;
		while(spy->next!=NULL){
			strcat(string,spy->value);
			strcat(string,",");
			spy= spy->next;
		}
		strcat(string,spy->value);
}

//Avanza al siguiente nodo desde el nodo dado
s_list * s_next(s_list * node){
		if(node->next!= NULL) return node->next;
		else 
		return node;
}

//Obtiene referencia a nodo en función de un key=valor del nodo
s_list * s_getbyKey(s_list * list, char * key){
		s_list * spy = list->head;
		while(spy!=NULL){

			if(strcmp(spy->value,key)==0){
				return spy;
			}else {
				spy = spy->next;
			}
		}
		printf("> Nodo no encontrado. Regresa lista.\n");
		return list->head;
}

//Verifica que un nodo con valor=key exista dentro de la lista
int s_inSet(s_list * list, char * key){
		s_list * spy = list->head;
		while(spy!=NULL){

			if(strcmp(spy->value,key)==0){
				return 1;
			}else {
				spy = spy->next;
			}
		}
		return 0;
}

//Busca nodo con el valor=key y regresa su índice
int s_get(s_list * list, char * key){
		int index = 0;
		s_list * spy = list->head;
		while(spy!=NULL){
			
			if(strcmp(spy->value,key)==0){
				//printf("Nodo %s encontrado. Regresa %d\n",key,index);
				return index;
			}else {
				spy = spy->next;
				index++;
			}
		}
		printf("> Nodo %s no encontrado. Regresa -1.\n",key);
		return -1;
}

//Busca una nodo con un índice dado y regresa una referencia a este
s_list * s_getByIndex(s_list * list, int index){
		int i=0;
		s_list * spy = list->head;
		while(spy!=NULL){
			
			if(i==index){
				return spy;
			}else {
				spy = spy->next;
				i++;
			}
		}
		printf("> Nodo no encontrado. Regresa lista.\n");
		return list;
}

//Crea un espacio de 3 dimensiones
s_list **** s_makespace(int d1,int d2,int d3){
	int i,j;
	s_list **** space;
	space = (s_list ****)malloc(d1*sizeof(s_list ***));
	
	for (i = 0; i< d1; i++) {
		space[i] = (s_list ***) malloc(d2*sizeof(double **));
			for (j = 0; j < d2; j++) {
				space[i][j] = (s_list **)malloc(d3*sizeof(double*));
			}
	}

	return space;
}

void fix_endLine(char * chunk){
	int i;
	char * fix;
	if(chunk[strlen(chunk)-1]==10){
		int n = strlen(chunk)-1;
		fix =(char *) malloc(n);
		for(i=0;i<n;i++){
			fix[i]=chunk[i];
		}
		strcpy(chunk,fix);
	}
}
/*void fix_endLine(char * chunk){
	int i;
	char * fix;
	if(chunk[strlen(chunk)-1]==10){
		int n = strlen(chunk)-1;
		fix = malloc(n);
		for(i=0;i<n;i++){
			fix[i]=chunk[i];
		}
		strcpy(chunk,fix);
	}
}*/