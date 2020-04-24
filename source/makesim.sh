#Aún no detecta todos los errores X(
#usage		Dispositivo -> ./makesim [COMPONENTE] [PAQUETE] [NOMBRE DE SIMULACION] [DURACIÓN]
#			Testbench 	-> ./makesim [TESTBENCH] sims [NOMBRE DE SIMULACION] [DURACIÓN]
#!/bin/bash

RED='\033[0;31m'
GRN='\033[0;32m'
LBL='\033[1;34m'
YLW='\033[1;33m'
NC='\033[0m'
OBJ=$1
PKG=$2
SIMNAME=$3

echo -e ">Analizar ${LBL}${PKG}/${OBJ}.vhd${NC}"

OK=$(ghdl -a ${PKG}/${OBJ}.vhd 2>&1)
if [[ $OK == *"cannot"* || $OK == *"can't"* ]]; then
  echo -e "${RED}> Error:\n${NC}${OK}"
  exit 1
fi

if [ "$PKG" = "sims" ]; then
	echo -e ">Analizar simulación ${LBL}sims/${OBJ}${NC}"

	OK=$(ghdl -a sims/${OBJ}.vhd 2>&1)
	if [[ $OK == *"cannot"* ]]; then
	  echo -e "${RED}> Error:${NC} ${OK}"
	  exit 1
	fi
	ARCH=${OBJ}

else
	echo -e ">Analizar testbench ${LBL}sims/testbench/${OBJ}_tb.vhd${NC}"
	
	OK=$(ghdl -a sims/testbench/${OBJ}_tb.vhd 2>&1)
	if [[ $OK == *"cannot"* ]]; then
	  echo -e "${RED}> Error:${NC} ${OK}"
	  exit 1
	fi

	ARCH=${OBJ}_tb
fi

echo -e "${GRN}>Correr testbench...${NC}"
# Procesa nombre de archivo de simulación
if [ "$SIMNAME" = "$NONAME" ]; then
	echo -e " archivo de simulacion: ${YLW}${OBJ}_sim.vcd${NC}"
	SIMNAME="${OBJ}_sim.vcd"
else
	echo -e " archivo de simulacion: ${YLW}$SIMNAME${NC}"
fi

re='^[0-9]+$'
if ! [[ $4 =~ $re ]] ; then
   echo -e "${RED}> ATENCIÓN: ${NC}Sin argumento de tiempo. Simulación sin tiempo de paro (Ctrl+C para detener)"
   TIME=""
else
	TIME="--stop-time=${4}ns"
fi

OK=$(ghdl -r ${ARCH} --vcd=sims/vcd/$SIMNAME ${TIME} 2>&1)
if [[ $OK == *"error"* || $OK == *"can't"* || $OK == *"file"* ]]; then
  echo -e "${RED}> Error:\n${NC}${OK}"
  exit 1
else
	echo ${OK}
fi
