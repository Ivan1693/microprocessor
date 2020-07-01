--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version: P.20131013
--  \   \         Application: netgen
--  /   /         Filename: lagartijax4_synthesis.vhd
-- /___/   /\     Timestamp: Sun Jun 28 15:46:48 2020
-- \   \  /  \ 
--  \___\/\___\
--             
-- Command	: -intstyle ise -ar Structure -tm lagartijax4 -w -dir netgen/synthesis -ofmt vhdl -sim lagartijax4.ngc lagartijax4_synthesis.vhd 
-- Device	: xc7a100t-3-csg324
-- Input file	: lagartijax4.ngc
-- Output file	: /home/ivan/Escom/Arquitectura/microprocessor/project/lagartijax4/netgen/synthesis/lagartijax4_synthesis.vhd
-- # of Entities	: 1
-- Design Name	: lagartijax4
-- Xilinx	: /opt/Xilinx/14.7/ISE_DS/ISE/
--             
-- Purpose:    
--     This VHDL netlist is a verification model and uses simulation 
--     primitives which may not represent the true implementation of the 
--     device, however the netlist is functionally correct and should not 
--     be modified. This file cannot be synthesized and should only be used 
--     with supported simulation tools.
--             
-- Reference:  
--     Command Line Tools User Guide, Chapter 23
--     Synthesis and Simulation Design Guide, Chapter 6
--             
--------------------------------------------------------------------------------

library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
library UNISIM;
use UNISIM.VCOMPONENTS.ALL;
use UNISIM.VPKG.ALL;

entity lagartijax4 is
  port (
    clk_in : in STD_LOGIC := 'X'; 
    adder_co : out STD_LOGIC; 
    lagartijax4_out : out STD_LOGIC_VECTOR ( 4 downto 0 ) 
  );
end lagartijax4;

architecture Structure of lagartijax4 is
  signal lagartijax4_out_3_OBUF_0 : STD_LOGIC; 
begin
  XST_GND : GND
    port map (
      G => lagartijax4_out_3_OBUF_0
    );
  lagartijax4_out_4_OBUF : OBUF
    port map (
      I => lagartijax4_out_3_OBUF_0,
      O => lagartijax4_out(4)
    );
  lagartijax4_out_3_OBUF : OBUF
    port map (
      I => lagartijax4_out_3_OBUF_0,
      O => lagartijax4_out(3)
    );
  lagartijax4_out_2_OBUF : OBUF
    port map (
      I => lagartijax4_out_3_OBUF_0,
      O => lagartijax4_out(2)
    );
  lagartijax4_out_1_OBUF : OBUF
    port map (
      I => lagartijax4_out_3_OBUF_0,
      O => lagartijax4_out(1)
    );
  lagartijax4_out_0_OBUF : OBUF
    port map (
      I => lagartijax4_out_3_OBUF_0,
      O => lagartijax4_out(0)
    );
  adder_co_OBUF : OBUF
    port map (
      I => lagartijax4_out_3_OBUF_0,
      O => adder_co
    );

end Structure;

