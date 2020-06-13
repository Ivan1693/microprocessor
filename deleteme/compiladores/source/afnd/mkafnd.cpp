#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <list>
#include <vector>
#include <string>
#include <iostream>
#include "xafnd.h"
#include "strlist.h"

using namespace std;

vector<string> alias;

void fix_endLinex(char * chunk){
	int i,n;
	char * fix;
	if(chunk[strlen(chunk)-1]==10){
		n = strlen(chunk)-1;
		fix =(char*)malloc(n*sizeof(char));
		for(i=0;i<n;i++){
			fix[i]=chunk[i];
		}
		fix[n]='\0';
		strcpy(chunk,fix);
	}
}

int genStates(automaton * afnd, char buffer[Q_MAX],bool vs){
	state * proto;
	char * chunk;
	int count=0;
	chunk = strtok(buffer, ",");
	while(chunk!=NULL){
		fix_endLinex(chunk);
		proto = new state(chunk,0);

		afnd->insertState(proto);
		if(vs){
			if(count==0) cout << "Q{";
			cout << proto->name<< " ";
			count++;
		}
		chunk = strtok(NULL,",");
	}
	if(vs) cout <<"}"<<endl;

	return count;
}

void setTypes(automaton * afnd, char buffer[Q_MAX],int init,bool vs){
	state * proto;
	char * chunk;
	chunk = strtok(buffer, ",");
	while(chunk!=NULL){
		fix_endLinex(chunk);

		proto = afnd->getStateByName(chunk,vs);
		if(proto!=NULL){
			proto->type+=init+1;
			
			if(vs) cout << proto->name<< ": " << alias[proto->type]<<endl;

			//Agrega referencia a estado inicial
			if(proto->type==1) afnd->initState= proto;
		}
		chunk = strtok(NULL,",");
	}
	
}

void genTransitions(automaton * afnd, FILE * input,bool vs){
	state * s_in, * s_out;
	transition * proto;
	int end=0,i;
	char buffer[MAXLINE],cstream,cptr;
	vector<char> symbol;
	if(vs) cout << "Funcion de transición..." << endl;
	
	while(end==0){

		if(fgetc(input)==126){//126=~

			fgets(buffer,MAXLINE,input);
			fix_endLinex(buffer);
			s_in = afnd->getStateByName(buffer,vs);

			if(vs) cout <<"Estado de entrada: "<< s_in->name <<endl;

			cptr = fgetc(input);

			if(cptr==45){
				if(vs) cout << " Sin transiciones" << endl;
			}
			else{
				while(cptr!=45){
					do{
						cstream= fgetc(input);
						if(cstream!=93) symbol.push_back(cstream);				
					}while(cstream!=93);

					if(symbol.size()>0){
						fgets(buffer,Q_MAX,input);
						fix_endLinex(buffer);
						s_out = afnd->getStateByName(buffer,vs);	
						for(i=0;i<symbol.size();i++){
							cstream = symbol[i];
							proto = new transition(cstream,s_in,s_out);
							afnd->insertTransition(proto);
						if(vs)
							cout 	<< "  d(" 	<< proto->s_in->name 
									<< ","		<< proto->symbol 
									<< ")=" 	<< proto->s_out->name
									<<
							endl;
						}
						symbol.clear();					
					}
					cptr = fgetc(input);
				}
			}
		}
		if(feof(input)) end=1;
	}
}

void createAutomaton(automaton * afnd, FILE * input,bool vs){
	char buffer[Q_MAX];

	if(vs) cout << "Construir automata..." << endl;

	//Genera estados
	fgets(buffer,Q_MAX,input);
	genStates(afnd,buffer,vs);
	
	//Define estados inciales
	fgets(buffer,Q_MAX,input);
	setTypes(afnd,buffer,INI,vs);
	
	//Define estados finales
	fgets(buffer,Q_MAX,input);
	setTypes(afnd,buffer,END,vs);

	//Genera transiciones
	genTransitions(afnd,input,vs);
}

int validateString(automaton * afnd,char istring[MAXLINE],bool vs){
	state * geist = afnd->initState;
	int end=0,flag=0,i=0,accept=0;
	char symbol;

	if(vs) cout<< "Validar cadena: "<< istring << endl << "\n> Comienza en:" << geist->name << endl;
	
	while(end==0&&i<strlen(istring)){
		symbol = istring[i];
		//if(vs) cout << "   e: " << geist->name << "\ts: "<< symbol <<endl;
		if(vs) cout << "  -> entrada: "<< symbol <<endl;
		geist = afnd->moveTo(geist,symbol,&flag,vs);
		if(flag==1){
			if(vs) cout << "\n> Se mueve a: " << geist->name << endl;
			if(geist->type==2||geist->type==3){
				if((i+1)==strlen(istring)){
					if(vs) cout << "Estado final alcanzado en " << geist->name << " con cadena: " << istring <<endl;					
					end=1;
					accept=1;
				}
			}
			flag=0;
		}
		else {
			if(vs) cout << "\n> Se queda en: " << geist->name << endl;
			end=1;
		}
		i++;
	}
	return accept;
}



int main(int argc, char *argv[]){
	automaton *afnd = new automaton();
	char istring[MAXLINE];
	bool vs=false;
	FILE * input;
	alias.push_back("Ordinario");
	alias.push_back("Inicial");
	alias.push_back("Terminal");
	alias.push_back("Inicial/Terminal");

	if(argc>1&&strlen(argv[1])==2){
		input = fopen(argv[2],"r");
		if(input==NULL){
			printf("> Error! No se puede abrir el archivo %c%s%c\n",34,argv[1],34);
			return -1;
		}else {
			//Crea automata desde archivo
			if(argv[argc-1][1]=='p') vs=true;
			createAutomaton(afnd, input, vs);
			fclose(input);
			switch(argv[1][1]){
				case 'v':
					if(argv[3])
						validateString(afnd,argv[3],vs);
					else cout << "Error! Se debe especificar cadena de entrada" <<endl;
				break;
				case 'n':
					//Navega automata
					afnd->scanTo(afnd->initState,argv[3],0,0,vs);
				break;
				default:
					printf("Opción %s incorrecta\n",argv[1]);
				break;
			}
		}
	}else {
		printf("Error! Se debe especificar un modo: -[v|n|c]\n");
		return -1;			
	}

	return 0;
}