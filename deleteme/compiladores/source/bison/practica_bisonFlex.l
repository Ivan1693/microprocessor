/* Analizador léxico y sintáctico: Bison+Flex - Hernández Reséndiz Brandon Iván - Compiladores 3CV6*/
%{
#include "practica_bisonFlex.tab.h"
%}

numero	[0-9]
cifra	{numero}*
entero_p	{cifra}
entero_n	[-]{cifra}
dec	{cifra}?"."[0-9]+
dec_p	{dec}
dec_n	[-]{dec}
%%
"+"|"-"|"*"|"/"		{
					printf("[signo operacional]\n");
					return(yytext[0]);
					}

{entero_p}			{
					printf("[entero positivo:%s]\n",yytext);
					yyval.entero = atoi(yytext);
					return(ENTP);
					}

{entero_n}			{
					printf("[entero negativo:%s]\n",yytext);
					}

{dec_p}				{
					printf("[decimal positivo:%s]\n",yytext);
					yyval.decimal = atoi(yytext);
					return(DECP);					
					}

{dec_n}				{
					printf("[decimal negativo:%s]\n",yytext);
					}
"\n"				{
					printf("[salto de linea]\n\n");
					}
,|_|.				{
					printf("[%s]\n",yytext);
					}
%%