/*BISON
/* Analizador léxico y sintáctico: Bison+Flex - Hernández Reséndiz Brandon Iván - Compiladores 3CV6*/

%union {
	int entero;
	float decimal;
}
%token <entero>		ENTP
%token <entero>		ENTN
%token <decimal>	DECP
%token <decimal>	DECN

%type <decimal>	exp

%left '+'
%left '-'
%left '*'
%left '/'

%%
input:    /* cadena vacía */
        | input line             
;

line:     '\n'
        | exp '\n'  { printf ("\tresultado: %d\n", $1); }
;
exp:     ENTP	{ $$ = $1; }
	| DECP	{ $$ = $1; }
	| exp '+' exp        { $$ = $1 + $3;    }
	| exp '-' exp        { $$ = $1 - $3;    }
	| exp '*' exp        { $$ = $1 * $3;    }
	| exp '/' exp        { $$ = $1 / $3;    }
;


%%
int main() {
  yyparse();
}
             
yyerror (char *s)
{
  printf ("--%s--\n", s);
}
            
int yywrap()  
{  
  return 1;  
}  
