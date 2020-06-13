#include <stdio.h>
#include <stdlib.h>
#include <list>
#include <vector>
#include <string>
#include <iostream>

#define INI 0
#define END 1
#define MAXLINE 1024


using namespace std;

class automaton;
class state;
class transition;

class automaton{
public:
	vector<state*> states;
	vector<transition*> transitions;
	state * initState;
	automaton(){};
	//State interface
	state * getStateByIndex(int);
	state * getStateByName(string,bool);
	void insertState(state *);
	void printStates();
	//Transition interface
	void insertTransition(transition *);
	//Global interface
	state * moveTo(state *,char,int *,bool);
	state * scanTo(state * , char * ,int,int,bool);
	int getBranches(state * s_in,char symbol);
};


class state{
public:
	string	name;
	int type, t_count; //t_count = transitions count
	state(string name,int type):name(name),type(type){
		t_count=0;
	};
};

class transition{
public:
	char symbol;
	state * s_in, *s_out;
	transition(char symbol, state * s_in, state * s_out):
		symbol(symbol),
		s_in(s_in),
		s_out(s_out){
		s_in->t_count++;
		};
	state * getOutState();
};


/*-----------------------*/
void automaton::insertState(state * element){
		states.push_back(element);
}

state * automaton::getStateByIndex(int index){
	if(index<states.size()) return states.at(index);
	else return NULL;
}
state * automaton::getStateByName(string name, bool vs){
	int i;
	state * proto;
	for(i=0;i<states.size();i++){
		proto = states.at(i);
		if(proto->name.compare(name)==0) return proto;
	}
	if(vs) cout << "> Estado no encontrado" <<endl;
	return NULL;
}

int automaton::getBranches(state * s_in,char symbol){
	int i,branches=0;

	for(i=0;i<transitions.size();i++){
		if(s_in==transitions[i]->s_in&&symbol==transitions[i]->symbol){
			branches++;
		}
	}
	return branches;
}

state * automaton::moveTo(state * s_in,char symbol, int * flag,bool vs){
	int i;
	vector<state*> aval_states;

	for(i=0;i<transitions.size();i++){
		if(s_in==transitions[i]->s_in&&symbol==transitions[i]->symbol){
			aval_states.push_back(transitions[i]->s_out);
		}
	}

	if(aval_states.size()==0){
		if(vs) cout << "> d(" << s_in->name << "," << symbol << ")=Sin transicion" <<endl;
		return s_in;
	}else{
		if(aval_states.size()==1){
			*flag=1;
			return aval_states[0];
		}
		else {
			int size = aval_states.size(), selected;
			if(vs) cout << "\n> Se tienen " << size << " transiciones con '" << symbol << "' desde " << s_in->name << endl;
			for(i=0;i<aval_states.size();i++){
				if(vs) cout <<"   "<< i+1 << ". d(" << s_in->name << "," << symbol << ")=" << aval_states[i]->name << endl;
			}
			if(vs) cout << "   Elige [1-" << size << "]: ";
			cin >> selected;
			*flag=1;
			return aval_states[selected-1];
		}
	}

}

state * automaton::scanTo(state * origin, char * feed,int c_index,int level,bool vs){
	int branches = getBranches(origin,feed[c_index]);
	int i,k;

	for(i=0;i<(level-1);i++) cout <<"│  ";
	if(c_index==0) cout << origin->name <<endl;
	else cout << "├(" << origin->name<<","<< feed[c_index-1]<<")"<<endl;
	
	if(c_index==strlen(feed)){
		for(i=0;i<(level-1);i++) cout <<"│  ";

		cout << "└" << origin->name;
		if(origin->type==2) cout << "-+]"<<endl;
		else cout << "-x]"<<endl;

		return origin;
	}
	else {
		if(branches>1) level++;
		vector<state*> aval_states;
		for(i=0;i<transitions.size();i++){
			if(origin==transitions[i]->s_in&&feed[c_index]==transitions[i]->symbol){
				scanTo(transitions[i]->s_out,feed,c_index+1,level,vs);
			}
		}
	}
}

void automaton::printStates(){
	int i;
	for(i=0;i<states.size()-1;i++){
		cout << states.at(i)->name << ",";
	}
	cout << states.at(i)->name;
}


void automaton::insertTransition(transition * element){
		transitions.push_back(element);
}

state * transition::getOutState(){
	return s_out;
}



