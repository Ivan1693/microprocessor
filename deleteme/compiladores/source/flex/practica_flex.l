/* Escáner léxico con Flex - Hernández Reséndiz Brandon Iván - Compiladores 3CV6*/

variable	([_]?[A-Za-z][A-Za-z0-9]*[_]?)*
numero	[0-9]
cifra	{numero}*
entero_p	[+]?{cifra}
entero_n	[-]{cifra}
dec	{cifra}?"."[0-9]+
dec_p	[+]?{dec}
dec_n	[-]{dec}
real	{entero_p}|{entero_n}|{dec_p}|{dec_n}
potencia	({real})"^"({entero_p}|{entero_n})	
mod 		[Mm][Oo][Dd]"("{real}","{real}")"
operacion	(({real}|{mod})[\+|\-|\*|\%]({real}|{mod}))*|{mod}
%%
{variable}	{printf("[variable:%s]\n",yytext);}
{entero_p}	{printf("[entero positivo:%s]\n",yytext);}
{entero_n}	{printf("[entero negativo:%s]\n",yytext);}
{dec_p}	{printf("[decimal positivo:%s]\n",yytext);}
{dec_n}	{printf("[decimal negativo:%s]\n",yytext);}
{potencia}	{printf("[potencia: %s]\n", yytext);}
{operacion}	{printf("[operacion: %s]\n",yytext);}
,|_	{printf("[%s]\n",yytext);}
"\n"	{printf("[salto de linea]\n\n");}
%%
int main(int argc, char *argv[])
{
	printf("Compiladores - Practica 2\nEscáner léxico con Flex\n");
	printf("--------------------------------------------------\n");
	yylex();
	return 0;
}