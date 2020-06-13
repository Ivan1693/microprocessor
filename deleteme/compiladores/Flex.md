# Flex

Generador de escáneres a partir de un conjunto de expresiones regulares.
De encontrar concordancias entre un fichero de entrada ejecuta una acción asociada a la expresión.

	[fichero.l]-->[ER]-->[lex.yy.c]-->[ejecutable]-->[coincidencia]
							  ^								v
					   [librería: -lfl]					 [acción]

## Estructura del archivo Flex
Se compone de tres secciones: definciones, reglas, código de usuario. Los delimitadores de estas secciones son los símbolos '%%'.
```
definciones
%%
reglas
%%
código de usuario
```
### Definiciones
Se asocia un nombre (alias) con la definición de una patrón. El nombre puede comenzar con alguna letra o el símbolo "_". Puede contener los símbolos "_" y "-" después del caracter inicial.

	[_]?[A-Za-z][A-Za-z0-9_-]*

