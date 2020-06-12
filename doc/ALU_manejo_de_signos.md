## Manejo de signos

| suma | $\iff$ | resta |
| :--: | :----: | :---: |
| $++$ | $\iff$ | $-+$  |
| $+-$ | $\iff$ | $--$  |
| $-+$ | $\iff$ | $++$  |
| $--$ | $\iff$ | $+-$  |

**Equivalencia de operaciones**

**Suma/resta**

| $c$  | $S_A$ | $S_B$ | $c'$ | $S_{AB}$ |
| ---- | ----- | ----- | ---- | -------- |
| 000  | 0     | 0     | 000  | 0        |
| 000  | 0     | 1     | 001  | 1        |
| 000  | 1     | 0     | 001  | 0        |
| 000  | 1     | 1     | 000  | 1        |
| 001  | 0     | 0     | 001  | 0        |
| 001  | 0     | 1     | 000  | 0        |
| 001  | 1     | 0     | 000  | 1        |
| 001  | 1     | 1     | 001  | 1        |


| $c'$ | $S_{AB}$ | $co$ | $S_F$ |
| ---- | -------- | ---- | ----- |
| 000  | 0        | 0    | 0     |
| 000  | 0        | 1    | 0     |
| 000  | 1        | 0    | 1     |
| 000  | 1        | 1    | 1     |
| 001  | 0        | 0    | 0     |
| 001  | 0        | 1    | 1     |
| 001  | 1        | 0    | 1     |
| 001  | 1        | 1    | 0     |

Se usa la equivalencia entre suma de signos diferentes a resta de signos iguales y resta de signos diferentes a suma de signos iguales
Para definir una tabla de elección de operación
Cómo se transforma a operaciones con signos iguales
Definimos S'AB como el signo de ambos
Sabiendo el signo de ambos, la operación y el acarreo
Definimos la tabla de signo del resultado
Dónde SF es el signo del resultado
En la suma los signos pasan igual
Y en la resta depende del signo y el que es mayor evidentemente
(-A) - (-B) <=> -(A - B)
Razón por la que en la resta nos da una compuerta XOR

**Transferencia, incremento, decremento**

| $S_E$ | $op$ |                 | $c'$ | $S_F$ |
| ----- | ---- | --------------- | ---- | ----- |
| 0     | 010  | transferencia A | 010  | 0     |
| 1     | 010  | transferencia A | 010  | 1     |
| 0     | 100  | transferencia B | 100  | 0     |
| 1     | 100  | transferencia B | 100  | 1     |
| 0     | 011  | incremento A    | 011  | 0     |
| 0     | 101  | incremento B    | 101  | 0     |
| 0     | 110  | decremento A    | 110  | 0     |
| 0     | 111  | decremento B    | 111  | 0     |
| 1     | 011  | incremento A    | 110  | 1     |
| 1     | 101  | incremento B    | 111  | 1     |
| 1     | 110  | decremento A    | 011  | 1     |
| 1     | 111  | decremento B    | 101  | 1     |

| $S_E$ | $c'$ | $S_F$ |
| ----- | ---- | ----- |
| 0     | 010  | 0     |
| 1     | 010  | 1     |
| 0     | 100  | 0     |
| 1     | 100  | 1     |
| 0     | 011  | 0     |
| 0     | 101  | 0     |
| 0     | 110  | 0     |
| 0     | 111  | 0     |
| 1     | 110  | 1     |
| 1     | 111  | 1     |
| 1     | 011  | 1     |
| 1     | 101  | 1     |