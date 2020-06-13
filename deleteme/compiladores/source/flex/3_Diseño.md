## Analizador léxico en Flex

La implementación del analizador léxico en el presente trabajo, es capaz de reconocer cadenas de caracteres tales que encajen en las definiciones mostradas a continuación junto con los criterios considerados para definir las expresiones regulares válidas.

### Tipos de cadenas

**a) Nombres de variables**
Se considera el formato utilizado en lenguajes como C y C++ en los cuales el identificador de una variable debe cumplir con lo siguiente:

1. La cadena puede comenzar con el signo "_" o cualquier letra del alfabeto ingles
2. La cadena puede tener cualquier combinación de letras, guión bajo y números después del primer caracter
3. La cadena puede contener letras mayúsculas y minúsculas

**b) Números enteros con y sin signo**
Un número entero es la combinación de los dígitos de 0 a 9. Si esta combinación es precedida por el signo "-" se trata de un entero negativo. Para los enteros positivos la ausencia de un signo como prefijo y la presencia de un signo "+" indican que se trata de un número entero positivo.

**c) Números en forma decimal con y sin signo**
Los número decimales obedecen al criterio de signos mencionado en el tipo anterior. Estos números, después de una primera cifra, un cero o una cadena vacía, están precedidos por un punto, el cuál a su vez debe estar precedido por otra cifra.

**d) Potencia (con o sin signo) de números reales (con y sin signo)**
Para este tipo de cadena se consideran los dos tipos anteriores. El primero para el valor que corresponde al exponente y el segundo para el valor que corresponde a la base. Se utiliza el signo de acento circunflejo "^" entre estos tipos para indicar que la base se eleva a la potencia  denotada por el exponente.

**e) Operaciones matemáticas de suma, resta, multiplicación, división y módulo**
Este tipo de expresión se compone de dos cifras de las cuales la primera es prefijo del símbolo de la operación y la segunda es sufijo de este. Los signos de operación son: `+`,`-`,`\*`,`/` y `%`. Para el caso especial del modulo también se reconoce dicha operación en formato de función es decir, de la forma: `mod(número,número)`.

### Diseño de las expresiones regulares

El conjunto de expresiones regulares consideradas para realizar las validaciones anteriores se muestra a continuación en la Tabla.3. Se decidió definir una expresión regular para cada tipo de subcadenas que componen las diferentes tipos mencionados anteriormente.

| nombre   | expresión regular |
| -------- | ----------------- |
|**variable**|<small>`([_]?[A-Za-z][A-Za-z0-9]*[_]?)*`</small>|
|**numero**|<small>`[0-9]`</small>|
|**cifra**|<small>`{numero}*`</small>|
|**entero_p**|<small>`[+]?{cifra}`</small>|
|**entero_n**|<small>`[-]{cifra}`</small>|
|**dec**|<small>`{cifra}?"."[0-9]+`</small>|
|**dec_p**|<small>`[+]?{dec}`</small>|
|**dec_n**|<small>`[-]{dec}`</small>|
|**real**|<small>`{entero_p}|{entero_n}|{dec_p}|{dec_n}`</small>|
|**potencia**|<small>`({real})"^"({entero_p}|{entero_n})`</small>|
|**mod**|<small>`[Mm][Oo][Dd]"("{real}","{real}")"`</small>|
|**operacion**|<small>`(({real}|{mod})[\+|\-|\*|\%]({real}|{mod}))*|{mod}`</small>|

> **Tabla.3.** Nombres y expresiones regulares definidas en el analizador léxico

Como podemos observar en la tabla anterior, las primeras definiciones corresponden a subcadenas básicas de las posteriores. Esto con el fin de mantener legibilidad dentro del código Flex.

### Definición de reglas

El conjunto de reglas hace referencia explícitamente a las definiciones correspondientes antes presentadas. Numeradas por línea, estas reglas se muestran en la caja de código siguiente. 

```C
{variable}	 {printf("[variable:%s]\n",yytext);}
{entero_p}	 {printf("[entero positivo:%s]\n",yytext);}
{entero_n}	 {printf("[entero negativo:%s]\n",yytext);}
{dec_p}		 {printf("[decimal positivo:%s]\n",yytext);}
{dec_n}		 {printf("[decimal negativo:%s]\n",yytext);}
{potencia}	 {printf("[potencia: %s]\n", yytext);}
{operacion}	 {printf("[operacion: %s]\n",yytext);}
,|_			{printf("[%s]\n",yytext);}
"\n"		{printf("[salto de linea]\n\n");}
```

> **Code.1.** Definición de reglas y acciones por expresión regular [1-7]. Manejo de comas, guiones bajos y saltos de línea [8-9].

Como podemos observar en el código anterior, la regla de la línea 1 corresponde al tipo de cadena **a)**. Las reglas de las líneas 2 y 3 al tipo **b)**, la 4 y 5 al tipo **c)** y finalmente la 6 y 7 al tipo **d)** y **e)** respectivamente. Las reglas de la línea 8  emparejan las comas y los guiones bajos y las denotan entre corchetes al igual que la reglas 9 indica un salto de linea, este ultimo presente en todas las lecturas mediante la entrada estándar. La acción  asociada a cada regla es la impresión en la salida estándar de una cadena correspondiente al identificador de cada tipo.

### Código de usuario

Finalmente dentro del archivo de Flex, se incluye un fragmento de código en C a manera de título para la ejecución del programa.