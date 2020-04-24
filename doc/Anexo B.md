# Anexo B: Nomenclatura de dispositivos

## Circuitos básicos

#### Multiplexor

	mux[elementos][tamaño][selector]
	
	elementos: 	N número de señales de entrada
	tamaño:		Tamaño en bits de las entradas y sálida
	selector:	Tamaño en bits de selector = ⌈log_2(elementos)⌉

#### Demultiplexor

	dmux[elementos][tamaño][selector]
	
	elementos: 	N número de señales de sálida
	tamaño:		Tamaño en bits de las entradas y sálida
	selector:	Tamaño en bits de selector = ⌈log_2(elementos)⌉

#### Contador

	cont[tipo][tamaño][inicio][fin]
	
	tipo:
		a 		ascendente
		d 		descendente
	tamaño:		N bits
	inicio: 	Posición inicial (incio<2^N)
	fin: 		Posición final (inicio<fin<2^N)

#### Decodificador

	deco[tamaño entrada|código de entrada][tamaño salida|código de salida]
	
	tamaño:	Tamaño en bits
	código: codificación (gray, 7seg, etc)

## Dispositivos de memoria

#### Flip Flops

	ff[tipo]
	
	tipo:
		D 	0
		T 	1
		SR 	2
		JK 	3

#### Registros

	reg[tipo][tamaño]
	
	tipo:
		PP	paralelo-paralelo	0
		PS 	paralelo-serie 		1
		SP 	serie-paralelo 		2
		SS 	serie-serie 		3
	
	tamaño: N bits

#### Banco de registros

	bank[elementos][tamaño][sálida]
	
	elementos:	N registros, N>1
	tamaño: 2^M bits
	sálida:	K registros, N>=1

