#!/bin/bash
RED='\033[0;31m'
GRN='\033[0;32m'
LBL='\033[1;34m'
YLW='\033[1;33m'
NC='\033[0m'
FILE=$1
ARCH=$2
echo -e "Make simulation\narchivo:${LBL}${FILE}${NC} analizar..."
ghdl -a ${FILE}
echo -e "simular ${LBL}${ARCH}${NC}"
ghdl -r ${ARCH} --vcd=${ARCH}_waves.vcd
