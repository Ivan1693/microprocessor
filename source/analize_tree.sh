#!/bin/bash
RED='\033[0;31m'
GRN='\033[0;32m'
LBL='\033[1;34m'
YLW='\033[1;33m'
NC='\033[0m'
VAR1=$1
VAR2="-r"

echo -e "${LBL}ESCOM${NC} Arquitectura de computadoras: Microcontrolador 4bits\nAnalisis de codigo fuente de paquetes y componentes con GHDL \n"

if [ "$VAR1" = "$VAR2" ]; then
    echo -e "${RED}> Recompilar:${NC} work-obj93.cf"
    rm work-obj93.cf
else
    echo "> actualizar work-obj93.cf"
fi

echo -e "> analizar paquete de basicos"
ghdl -a basic_devs.vhd
compok=$?
	if [[ compok==0 ]]; then
		echo -e "  ${YLW}basic_devs.vhd${NC} [${GRN}OK${NC}]\n> analizar directorio basic/"
		files=$(ls basic/*.vhd)
		for i in $files ; do
			ghdl -a $i 
			compok=$?
			if [[ compok==0 ]]; then
				echo -e "  ${LBL}$i${NC} [${GRN}OK${NC}]"
			else
				echo -e "${RED}Error${NC} al analizar ${LBL}$i${NC}"
				exit 1
			fi
		done		
	else
		echo -e "${RED}Error${NC} al analizar basic_devs.vhd"
		exit 1
	fi

echo -e "> analizar paquete de memoria"
ghdl -a memory_devs.vhd
compok=$?
	if [[ compok==0 ]]; then
		echo -e "  ${YLW}memory_devs.vhd${NC} [${GRN}OK${NC}]\n> analizar directorio memory/"
		files=$(ls memory/*.vhd)
		for i in $files ; do
			ghdl -a $i 
			compok=$?
			if [[ compok==0 ]]; then
				echo -e "  ${LBL}$i${NC} [${GRN}OK${NC}]"
			else
				echo -e "${RED}Error${NC} al analizar ${LBL}$i${NC}"
				exit 1
			fi
		done		
	else
		echo -e "${RED}Error${NC} al analizar memory_devs.vhd"
		exit 1
	fi

echo -e "> analizar paquete de alu"
ghdl -a alu_devs.vhd
compok=$?
	if [[ compok==0 ]]; then
		echo -e "  ${YLW}alu_devs.vhd${NC} [${GRN}OK${NC}]\n> analizar directorio alu/"
		files=$(ls alu/*.vhd)
		for i in $files ; do
			ghdl -a $i 
			compok=$?
			if [[ compok==0 ]]; then
				echo -e "  ${LBL}$i${NC} [${GRN}OK${NC}]"
			else
				echo -e "${RED}Error${NC} al analizar ${LBL}$i${NC}"
				exit 1
			fi
		done		
	else
		echo -e "${RED}Error${NC} al analizar alu_devs.vhd"
		exit 1
	fi

echo -e "> analizar paquete de micro"
ghdl -a micro_devs.vhd
	if [[ compok==0 ]]; then
		echo -e "  ${YLW}micro_devs.vhd${NC} [${GRN}OK${NC}]\n> analizar directorio micro/"
		files=$(ls micro/*.vhd)
		for i in $files ; do
			ghdl -a $i 
			compok=$?
			if [[ compok==0 ]]; then
				echo -e "  ${LBL}$i${NC} [${GRN}OK${NC}]"
			else
				echo -e "${RED}Error${NC} al analizar ${LBL}$i${NC}"
				exit 1
			fi
		done		
	else
		echo -e "${RED}Error${NC} al analizar micro_devs.vhd"
		exit 1
	fi
