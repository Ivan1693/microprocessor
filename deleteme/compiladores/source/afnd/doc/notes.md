Lectura

Se leen los estados, el alfabeto, estado final y estado inicial. Se almacena en una estructura (cabecera). Se crea un espacio de caracteres de |Q²|x|E| donde se almacenará la relación de estados de entrada contra los símbolos del alfbeto contra los estados de salida de la forma: delta(qi,s,qo). De no existir relación de qí se marca como nulo "\". Se crea un nuevo archivo intermedio donde se escribe la cabecera del automata y posteriormente se vacia la información del espacio delta en el mismo con el siguiente formato:
Q
E
S
F

\>qi
cj,cj+1,..., q1
.
.
.

Carga de AFND

Se crea una instancia de la clase automaton, se le asigna los valores de Q,E,S y F. Se inicia la subrutina <<Crear estados>>. Se inicia la subrutina <<Crear transiciones>>.

Crear estados

Para cada elemento en Q, se crea una instancia de la clase state a la que se le asigna como nobre el valor de Q[i].

	for i in Q.size
		new state
		state.name <- Q.value


Crear transiciones

Se recorre el espacop delta y por cada elemento dentro de D[i][j][k]  (donde i = estado de entrada, j = símbolo y k=estado de salida) se crea una instancia de la clase transition a la cual se le asigna el símbolo actual, el estado de entrada y de salida actual. Por cada elemento de k se incrementa el número de transiciones asociadas al estado i.

```mermaid
classDiagram
	class automaton{
		vector<state *> states
		vecto<transition *> transitions
		state * initState
		state * getStateByIndex(int)
		state * getStateByName(string,bool)
		void insertState(state *)
		void printStates()
		void insertTransition(transition *)
		state * moveTo(state *,char,int *,bool)
	}
    class state{
        string name
        int type
        int t_count
    }
    class transition{
        char symbol
        state * s_in
        state *s_out
        state * getOutState()
    }
	automaton "1" *-- "1..*" state
	automaton "1" o-- "1..*" transition
	transition "*" o-- "2" state
```



## Uso

La implementación del AFND en C y C++, se hace en un entorno Linux. La ejecución de los programas se hace en terminal, por lo cual es posible definir un conjunto de opciones como argumentos para llevar a cabo diferentes tareas. Como se mencionó en la sección anterior la carga y conversión del archivo de definición del autómata la hace el programa **ldafnd** (ld=load, nombre de objeto sugerido) y la construcción y validación de este el programa **mkafnd** (mk=make).


moveTo Backup:

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

**abab**

```mermaid
graph LR
	0_0((0))
	0_1((0))
	1_1((1))
	0_12((0))
	2_1((2))
	
	0_0--a-->0_1
		0_1--b-->0_12
		0_12--a-->0_2((0))
		0_12--a-->1_2((1))
			0_2--b-->0_22((0))
			1_2--b-->2_2((2))
	0_0--a-->1_1
	1_1--b-->2_1
	2_1--a-->3_1((3))
	3_1--b-->3_2((3))
	
	linkStyle 0 stroke:black;
	linkStyle 1 stroke:black;
	linkStyle 2 stroke:black;
	linkStyle 3 stroke:black;
	linkStyle 4 stroke:black;
	linkStyle 5 stroke:black;
	linkStyle 6 stroke:black;
	linkStyle 7 stroke:black;
	linkStyle 8 stroke:black;
	linkStyle 9 stroke:black;
	
```

**aaaab**

```mermaid
graph LR
	0((0))
	1((0))
	2((1))
	3((0))
	4((1))
	5((3))
	6((0))
	7((1))
	8((3))
	9((3))
	10((0))
	11((1))
	12((3))
	13((3))
	14((3))
	15((0))
	16((2))
	17((3))
	18((3))
	19((3))
	0--a-->1
	0--a-->2
	1--a-->3
	1--a-->4
	2--a-->5
	3--a-->6
	3--a-->7
	4--a-->8
	5--a-->9
	6--a-->10
	6--a-->11
	7--a-->12
	8--a-->13
	9--a-->14
	10--b-->15
	11--b-->16
	12--b-->17
	13--b-->18
	14--b-->19
	
	linkStyle 0 stroke:black;
	linkStyle 1 stroke:black;
	linkStyle 2 stroke:black;
	linkStyle 3 stroke:black;
	linkStyle 4 stroke:black;
	linkStyle 5 stroke:black;
	linkStyle 6 stroke:black;
	linkStyle 7 stroke:black;
	linkStyle 8 stroke:black;
	linkStyle 9 stroke:black;
	linkStyle 10 stroke:black;
	linkStyle 11 stroke:black;
	linkStyle 12 stroke:black;
	linkStyle 13 stroke:black;
	linkStyle 14 stroke:black;
	linkStyle 15 stroke:black;
	linkStyle 16 stroke:black;
	linkStyle 17 stroke:black;
	linkStyle 18 stroke:black;
```

**bbbbba**

```mermaid
graph LR
	0((0))
	1((0))
	2((0))
	3((0))
	4((0))
	5((0))
	6((0))
	7((1))
	0--b-->1
	1--b-->2
	2--b-->3
	3--b-->4
	4--b-->5
	5--a-->6
	5--a-->7
	
	
	linkStyle 0 stroke:black;
	linkStyle 1 stroke:black;
	linkStyle 2 stroke:black;
	linkStyle 3 stroke:black;
	linkStyle 4 stroke:black;
	linkStyle 5 stroke:black;
	linkStyle 6 stroke:black;
```

