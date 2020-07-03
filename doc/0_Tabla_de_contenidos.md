# Índice
<style>
    td{border:0;border-bottom:1px #CCC dashed;}
</style>
<table>
    <tr><td style="font-weight:bold;">I: Introducción</td><td>1</td></tr>
    <tr><td style="text-indent:2em;">Microprocesador</td><td>2</td></tr>
    <tr><td style="text-indent:2em;">Arquitectura</td><td>2</td></tr>
    <tr><td style="text-indent:2em;">Instrucciones RISC</td><td>3</td></tr>
    <tr><td style="text-indent:1em;">Diseño</td><td>4</td></tr>
    <tr><td style="text-indent:2em;">LagartijaX4: micro_stage 1 y 2 + GCM</td><td>4</td></tr>
    <tr><td style="text-indent:2em;">Implementación del diseño</td><td>6</td></tr>
    <tr><td style="text-indent:3em;">Organización del proyecto</td><td>6</td></tr>
    <tr><td style="text-indent:2em;">Paquetes</td><td>6</td></tr>
    <tr><td style="text-indent:3em;">Contenidos</td><td>7</td></tr>
    <tr><td style="text-indent:2em;">Formato de archivos</td><td>7</td></tr>
    <tr><td style="text-indent:1em;">Niveles de diseño</td><td>8</td></tr>
    <tr><td style="font-weight:bold;">II: Stage 1</td><td>9</td></tr>
    <tr><td style="text-indent:1em;"> ALU + Registros ACM, ACC y RD</td><td>10</td></tr>
    <tr><td style="text-indent:1em;"> ALU 16 Operaciones</td><td>11</td></tr>
    <tr><td style="text-indent:2em;"> Diseño</td><td>11</td></tr>
    <tr><td style="text-indent:3em;"> Instrucciones</td><td>12</td></tr>
    <tr><td style="text-indent:3em;"> Unidad lógica</td><td>13</td></tr>
    <tr><td style="text-indent:3em;"> Unidad Aritmética</td><td>13</td></tr>
    <tr><td style="text-indent:4em;"> Resta</td><td>14</td></tr>
    <tr><td style="text-indent:5em;"> Bloque de control de operandos</td><td>14</td></tr>
    <tr><td style="text-indent:1em;"> Simulación</td><td>15</td></tr>
    <tr><td style="text-indent:1em;"> Registros</td><td>17</td></tr>
    <tr><td style="text-indent:3em;"> Árbol de instancias</td><td>17</td></tr>
    <tr><td style="text-indent:3em;"> Propagación de ALU</td><td>17</td></tr>
    <tr><td style="text-indent:1em;"> Simulación</td><td>18</td></tr>
    <tr><td style="text-indent:3em;"> Convenciones para la simulación</td><td>18</td></tr>
    <tr><td style="text-indent:2em;"> Testbench</td><td>20</td></tr>
    <tr><td style="text-indent:2em;"> micro_stage1</td><td>22</td></tr>
</table>


<div style="text-align:center;page-break-after: always; break-after: page;"></div>

<style>
    td{border:0;border-bottom:1px #CCC dashed;}
</style>
<table>
    <tr><td style="font-weight:bold;"> III: Stage 2</td><td>25</td></tr>
    <tr><td style="text-indent:1em;"> Manejo de signos + ROM + PC + RI + DI</td><td>26</td></tr>
    <tr><td style="text-indent:1em;"> Manejo de signos</td><td>26</td></tr>
    <tr><td style="text-indent:2em;"> Control de operación para suma/resta</td><td>27</td></tr>
    <tr><td style="text-indent:3em;"> Control de signo para suma/resta</td><td>28</td></tr>
    <tr><td style="text-indent:2em;"> Control de operación para transferencia, incremento y decremento</td><td>29</td></tr>
    <tr><td style="text-indent:3em;"> Control de signo para la transferencia, incremento y decremento</td><td>30</td></tr>
    <tr><td style="text-indent:2em;"> Simulación</td><td>31</td></tr>
    <tr><td style="text-indent:1em;"> ROM</td><td>33</td></tr>
    <tr><td style="text-indent:1em;"> Registro de instrucción RI + Decodificador de instrucción</td><td>34</td></tr>
    <tr><td style="text-indent:1em;"> Contador de programa PC</td><td>34</td></tr>
    <tr><td style="text-indent:1em;"> Instrucción de 16 bits</td><td>34</td></tr>
    <tr><td style="font-weight:bold;"> GCM</td><td>35</td></tr>
    <tr><td style="text-indent:1em;"> Descripción</td><td>36</td></tr>
    <tr><td style="text-indent:2em;"> Simulación</td><td>36</td></tr>
    <tr><td style="font-weight:bold;"> IV: LagartijaX4</td><td>37</td></tr>
    <tr><td style="text-indent:1em;"> Instrucciones de prueba</td><td>38</td></tr>
    <tr><td style="text-indent:1em;"> Simulación</td><td>39</td></tr>
    <tr><td style="text-indent:1em;"> Conclusión</td><td>43</td></tr>
    <tr><td style="font-weight:bold;"> Bibliografía y Referencias electrónicas</td><td>45</td></tr>
    <tr><td style="font-weight:bold;"> Anexo A: Nomenclatura de dispositivos</td><td>46</td></tr>
</table>