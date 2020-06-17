--------------------------------------------------------------------------------
-- Copyright (c) 1995-2013 Xilinx, Inc.  All rights reserved.
--------------------------------------------------------------------------------
--   ____  ____
--  /   /\/   /
-- /___/  \  /    Vendor: Xilinx
-- \   \   \/     Version: P.20131013
--  \   \         Application: netgen
--  /   /         Filename: micro_stage1_synthesis.vhd
-- /___/   /\     Timestamp: Mon Jun 15 22:27:27 2020
-- \   \  /  \ 
--  \___\/\___\
--             
-- Command	: -intstyle ise -ar Structure -tm micro_stage1 -w -dir netgen/synthesis -ofmt vhdl -sim micro_stage1.ngc micro_stage1_synthesis.vhd 
-- Device	: xc7a100t-3-csg324
-- Input file	: micro_stage1.ngc
-- Output file	: /home/ivan/Escom/Arquitectura/microprocessor/project/micro_stage1/netgen/synthesis/micro_stage1_synthesis.vhd
-- # of Entities	: 1
-- Design Name	: micro_stage1
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

entity micro_stage1 is
  port (
    gcm_b : in STD_LOGIC := 'X'; 
    gcm_c : in STD_LOGIC := 'X'; 
    gcm_d : in STD_LOGIC := 'X'; 
    cout_stage1 : out STD_LOGIC; 
    ideco_bus : in STD_LOGIC_VECTOR ( 4 downto 0 ); 
    data_a : in STD_LOGIC_VECTOR ( 4 downto 0 ); 
    data_b : in STD_LOGIC_VECTOR ( 4 downto 0 ); 
    out_stage1 : out STD_LOGIC_VECTOR ( 4 downto 0 ) 
  );
end micro_stage1;

architecture Structure of micro_stage1 is
  signal ideco_bus_3_IBUF_0 : STD_LOGIC; 
  signal ideco_bus_2_IBUF_1 : STD_LOGIC; 
  signal ideco_bus_1_IBUF_2 : STD_LOGIC; 
  signal ideco_bus_0_IBUF_3 : STD_LOGIC; 
  signal ideco_bus_4_IBUF_4 : STD_LOGIC; 
  signal data_a_4_IBUF_5 : STD_LOGIC; 
  signal data_a_3_IBUF_6 : STD_LOGIC; 
  signal data_a_2_IBUF_7 : STD_LOGIC; 
  signal data_a_1_IBUF_8 : STD_LOGIC; 
  signal data_a_0_IBUF_9 : STD_LOGIC; 
  signal data_b_4_IBUF_10 : STD_LOGIC; 
  signal data_b_3_IBUF_11 : STD_LOGIC; 
  signal data_b_2_IBUF_12 : STD_LOGIC; 
  signal data_b_1_IBUF_13 : STD_LOGIC; 
  signal data_b_0_IBUF_14 : STD_LOGIC; 
  signal gcm_b_BUFGP_15 : STD_LOGIC; 
  signal gcm_c_BUFGP_16 : STD_LOGIC; 
  signal gcm_d_BUFGP_17 : STD_LOGIC; 
  signal rd_reg00_block_ff4_block_q_18 : STD_LOGIC; 
  signal rd_reg00_block_ff3_block_q_19 : STD_LOGIC; 
  signal rd_reg00_block_ff2_block_q_20 : STD_LOGIC; 
  signal rd_reg00_block_ff1_block_q_21 : STD_LOGIC; 
  signal rd_reg00_block_ff0_block_q_22 : STD_LOGIC; 
  signal rd_reg01_block_ff4_block_q_23 : STD_LOGIC; 
  signal rd_reg01_block_ff3_block_q_24 : STD_LOGIC; 
  signal rd_reg01_block_ff2_block_q_25 : STD_LOGIC; 
  signal rd_reg01_block_ff1_block_q_26 : STD_LOGIC; 
  signal rd_reg01_block_ff0_block_q_27 : STD_LOGIC; 
  signal acc_ff4_block_q_28 : STD_LOGIC; 
  signal acc_ff3_block_q_29 : STD_LOGIC; 
  signal acc_ff2_block_q_30 : STD_LOGIC; 
  signal acc_ff1_block_q_31 : STD_LOGIC; 
  signal acc_ff0_block_q_32 : STD_LOGIC; 
  signal acm_ff4_block_q_33 : STD_LOGIC; 
  signal acm_ff3_block_q_34 : STD_LOGIC; 
  signal acm_ff2_block_q_35 : STD_LOGIC; 
  signal acm_ff1_block_q_36 : STD_LOGIC; 
  signal acm_ff0_block_q_37 : STD_LOGIC; 
  signal out_stage1_4_OBUF_38 : STD_LOGIC; 
  signal out_stage1_3_OBUF_39 : STD_LOGIC; 
  signal out_stage1_2_OBUF_40 : STD_LOGIC; 
  signal out_stage1_1_OBUF_41 : STD_LOGIC; 
  signal out_stage1_0_OBUF_42 : STD_LOGIC; 
  signal cout_stage1_OBUF_43 : STD_LOGIC; 
  signal alu_arith_unit_coutput : STD_LOGIC; 
  signal alu_arithmetic_unit_ci_prime : STD_LOGIC; 
  signal alu_arithmetic_unit_arithmetic_control_fix_aux_53 : STD_LOGIC; 
  signal alu_arithmetic_unit_arithmetic_control_Mmux_b_prime21_65 : STD_LOGIC; 
  signal alu_arithmetic_unit_arithmetic_control_Mmux_a_prime11_66 : STD_LOGIC; 
  signal alu_arithmetic_unit_arithmetic_control_Mmux_b_prime23 : STD_LOGIC; 
  signal alu_arithmetic_unit_arithmetic_control_Mmux_b_prime22 : STD_LOGIC; 
  signal alu_arithmetic_unit_arithmetic_control_is_a : STD_LOGIC; 
  signal alu_arithmetic_unit_arithmetic_control_Mmux_a_prime21_70 : STD_LOGIC; 
  signal alu_arithmetic_unit_arithmetic_control_Mmux_a_prime22 : STD_LOGIC; 
  signal alu_arithmetic_unit_arithmetic_control_ci_c_1_MUX_29_o : STD_LOGIC; 
  signal alu_arithmetic_unit_arithmetic_control_c_1_c_1_MUX_28_o : STD_LOGIC; 
  signal N2 : STD_LOGIC; 
  signal N4 : STD_LOGIC; 
  signal N6 : STD_LOGIC; 
  signal N8 : STD_LOGIC; 
  signal alu_arithmetic_unit_arithmetic_control_comparator_is_a : STD_LOGIC; 
  signal N10 : STD_LOGIC; 
  signal N11 : STD_LOGIC; 
  signal regmux_bus : STD_LOGIC_VECTOR ( 4 downto 0 ); 
  signal alu_arithmetic_unit_c_prime : STD_LOGIC_VECTOR ( 1 downto 0 ); 
  signal alu_arithmetic_unit_b_prime : STD_LOGIC_VECTOR ( 3 downto 0 ); 
  signal alu_arithmetic_unit_a_prime : STD_LOGIC_VECTOR ( 3 downto 0 ); 
  signal alu_arithmetic_unit_full_4bit_adder_c : STD_LOGIC_VECTOR ( 2 downto 0 ); 
begin
  acc_ff0_block_q : LD
    port map (
      D => out_stage1_0_OBUF_42,
      G => gcm_c_BUFGP_16,
      Q => acc_ff0_block_q_32
    );
  acc_ff1_block_q : LD
    port map (
      D => out_stage1_1_OBUF_41,
      G => gcm_c_BUFGP_16,
      Q => acc_ff1_block_q_31
    );
  acc_ff2_block_q : LD
    port map (
      D => out_stage1_2_OBUF_40,
      G => gcm_c_BUFGP_16,
      Q => acc_ff2_block_q_30
    );
  acc_ff3_block_q : LD
    port map (
      D => out_stage1_3_OBUF_39,
      G => gcm_c_BUFGP_16,
      Q => acc_ff3_block_q_29
    );
  acc_ff4_block_q : LD
    port map (
      D => out_stage1_4_OBUF_38,
      G => gcm_c_BUFGP_16,
      Q => acc_ff4_block_q_28
    );
  acm_ff0_block_q : LD
    port map (
      D => acc_ff0_block_q_32,
      G => gcm_d_BUFGP_17,
      Q => acm_ff0_block_q_37
    );
  acm_ff1_block_q : LD
    port map (
      D => acc_ff1_block_q_31,
      G => gcm_d_BUFGP_17,
      Q => acm_ff1_block_q_36
    );
  acm_ff2_block_q : LD
    port map (
      D => acc_ff2_block_q_30,
      G => gcm_d_BUFGP_17,
      Q => acm_ff2_block_q_35
    );
  acm_ff3_block_q : LD
    port map (
      D => acc_ff3_block_q_29,
      G => gcm_d_BUFGP_17,
      Q => acm_ff3_block_q_34
    );
  acm_ff4_block_q : LD
    port map (
      D => acc_ff4_block_q_28,
      G => gcm_d_BUFGP_17,
      Q => acm_ff4_block_q_33
    );
  rd_reg00_block_ff0_block_q : LD
    port map (
      D => data_a_0_IBUF_9,
      G => gcm_b_BUFGP_15,
      Q => rd_reg00_block_ff0_block_q_22
    );
  rd_reg00_block_ff1_block_q : LD
    port map (
      D => data_a_1_IBUF_8,
      G => gcm_b_BUFGP_15,
      Q => rd_reg00_block_ff1_block_q_21
    );
  rd_reg00_block_ff2_block_q : LD
    port map (
      D => data_a_2_IBUF_7,
      G => gcm_b_BUFGP_15,
      Q => rd_reg00_block_ff2_block_q_20
    );
  rd_reg00_block_ff3_block_q : LD
    port map (
      D => data_a_3_IBUF_6,
      G => gcm_b_BUFGP_15,
      Q => rd_reg00_block_ff3_block_q_19
    );
  rd_reg00_block_ff4_block_q : LD
    port map (
      D => data_a_4_IBUF_5,
      G => gcm_b_BUFGP_15,
      Q => rd_reg00_block_ff4_block_q_18
    );
  rd_reg01_block_ff0_block_q : LD
    port map (
      D => data_b_0_IBUF_14,
      G => gcm_b_BUFGP_15,
      Q => rd_reg01_block_ff0_block_q_27
    );
  rd_reg01_block_ff1_block_q : LD
    port map (
      D => data_b_1_IBUF_13,
      G => gcm_b_BUFGP_15,
      Q => rd_reg01_block_ff1_block_q_26
    );
  rd_reg01_block_ff2_block_q : LD
    port map (
      D => data_b_2_IBUF_12,
      G => gcm_b_BUFGP_15,
      Q => rd_reg01_block_ff2_block_q_25
    );
  rd_reg01_block_ff3_block_q : LD
    port map (
      D => data_b_3_IBUF_11,
      G => gcm_b_BUFGP_15,
      Q => rd_reg01_block_ff3_block_q_24
    );
  rd_reg01_block_ff4_block_q : LD
    port map (
      D => data_b_4_IBUF_10,
      G => gcm_b_BUFGP_15,
      Q => rd_reg01_block_ff4_block_q_23
    );
  alu_arithmetic_unit_arithmetic_control_fix_aux : LD
    port map (
      D => alu_arithmetic_unit_arithmetic_control_c_1_c_1_MUX_28_o,
      G => alu_arithmetic_unit_arithmetic_control_ci_c_1_MUX_29_o,
      Q => alu_arithmetic_unit_arithmetic_control_fix_aux_53
    );
  regmux_Mmux_dst51 : LUT3
    generic map(
      INIT => X"D8"
    )
    port map (
      I0 => ideco_bus_4_IBUF_4,
      I1 => rd_reg01_block_ff4_block_q_23,
      I2 => acm_ff4_block_q_33,
      O => regmux_bus(4)
    );
  regmux_Mmux_dst41 : LUT3
    generic map(
      INIT => X"D8"
    )
    port map (
      I0 => ideco_bus_4_IBUF_4,
      I1 => rd_reg01_block_ff3_block_q_24,
      I2 => acm_ff3_block_q_34,
      O => regmux_bus(3)
    );
  regmux_Mmux_dst31 : LUT3
    generic map(
      INIT => X"D8"
    )
    port map (
      I0 => ideco_bus_4_IBUF_4,
      I1 => rd_reg01_block_ff2_block_q_25,
      I2 => acm_ff2_block_q_35,
      O => regmux_bus(2)
    );
  regmux_Mmux_dst21 : LUT3
    generic map(
      INIT => X"D8"
    )
    port map (
      I0 => ideco_bus_4_IBUF_4,
      I1 => rd_reg01_block_ff1_block_q_26,
      I2 => acm_ff1_block_q_36,
      O => regmux_bus(1)
    );
  regmux_Mmux_dst11 : LUT3
    generic map(
      INIT => X"D8"
    )
    port map (
      I0 => ideco_bus_4_IBUF_4,
      I1 => rd_reg01_block_ff0_block_q_27,
      I2 => acm_ff0_block_q_37,
      O => regmux_bus(0)
    );
  alu_arithmetic_unit_full_4bit_adder_adder_d_co1 : LUT3
    generic map(
      INIT => X"E8"
    )
    port map (
      I0 => alu_arithmetic_unit_b_prime(3),
      I1 => alu_arithmetic_unit_full_4bit_adder_c(2),
      I2 => alu_arithmetic_unit_a_prime(3),
      O => alu_arith_unit_coutput
    );
  alu_arithmetic_unit_full_4bit_adder_adder_a_co1 : LUT3
    generic map(
      INIT => X"E8"
    )
    port map (
      I0 => alu_arithmetic_unit_b_prime(0),
      I1 => alu_arithmetic_unit_ci_prime,
      I2 => alu_arithmetic_unit_a_prime(0),
      O => alu_arithmetic_unit_full_4bit_adder_c(0)
    );
  alu_arithmetic_unit_operation_control_instance_Mmux_c_prime21 : LUT4
    generic map(
      INIT => X"EA2A"
    )
    port map (
      I0 => ideco_bus_2_IBUF_1,
      I1 => ideco_bus_1_IBUF_2,
      I2 => rd_reg00_block_ff4_block_q_18,
      I3 => ideco_bus_0_IBUF_3,
      O => alu_arithmetic_unit_c_prime(1)
    );
  alu_arithmetic_unit_operation_control_instance_Mmux_ci_prime11 : LUT5
    generic map(
      INIT => X"EAEA2926"
    )
    port map (
      I0 => ideco_bus_0_IBUF_3,
      I1 => rd_reg00_block_ff4_block_q_18,
      I2 => ideco_bus_1_IBUF_2,
      I3 => regmux_bus(4),
      I4 => ideco_bus_2_IBUF_1,
      O => alu_arithmetic_unit_ci_prime
    );
  alu_arithmetic_unit_arithmetic_control_Mmux_b_prime231 : LUT4
    generic map(
      INIT => X"0200"
    )
    port map (
      I0 => alu_arithmetic_unit_arithmetic_control_is_a,
      I1 => alu_arithmetic_unit_c_prime(0),
      I2 => alu_arithmetic_unit_c_prime(1),
      I3 => alu_arithmetic_unit_ci_prime,
      O => alu_arithmetic_unit_arithmetic_control_Mmux_b_prime23
    );
  alu_arithmetic_unit_arithmetic_control_Mmux_a_prime111 : LUT4
    generic map(
      INIT => X"0100"
    )
    port map (
      I0 => alu_arithmetic_unit_arithmetic_control_is_a,
      I1 => alu_arithmetic_unit_c_prime(0),
      I2 => alu_arithmetic_unit_c_prime(1),
      I3 => alu_arithmetic_unit_ci_prime,
      O => alu_arithmetic_unit_arithmetic_control_Mmux_a_prime11_66
    );
  alu_arithmetic_unit_arithmetic_control_Mmux_b_prime61 : LUT6
    generic map(
      INIT => X"FEF4FFFFFEF4FEF4"
    )
    port map (
      I0 => regmux_bus(2),
      I1 => alu_arithmetic_unit_arithmetic_control_Mmux_b_prime23,
      I2 => alu_arithmetic_unit_arithmetic_control_Mmux_b_prime22,
      I3 => alu_arithmetic_unit_arithmetic_control_Mmux_b_prime21_65,
      I4 => rd_reg00_block_ff2_block_q_20,
      I5 => alu_arithmetic_unit_arithmetic_control_Mmux_a_prime11_66,
      O => alu_arithmetic_unit_b_prime(2)
    );
  alu_arithmetic_unit_arithmetic_control_Mmux_b_prime21 : LUT6
    generic map(
      INIT => X"FEF4FFFFFEF4FEF4"
    )
    port map (
      I0 => regmux_bus(0),
      I1 => alu_arithmetic_unit_arithmetic_control_Mmux_b_prime23,
      I2 => alu_arithmetic_unit_arithmetic_control_Mmux_b_prime22,
      I3 => alu_arithmetic_unit_arithmetic_control_Mmux_b_prime21_65,
      I4 => rd_reg00_block_ff0_block_q_22,
      I5 => alu_arithmetic_unit_arithmetic_control_Mmux_a_prime11_66,
      O => alu_arithmetic_unit_b_prime(0)
    );
  alu_arithmetic_unit_arithmetic_control_Mmux_b_prime81 : LUT6
    generic map(
      INIT => X"FEF4FFFFFEF4FEF4"
    )
    port map (
      I0 => regmux_bus(3),
      I1 => alu_arithmetic_unit_arithmetic_control_Mmux_b_prime23,
      I2 => alu_arithmetic_unit_arithmetic_control_Mmux_b_prime22,
      I3 => alu_arithmetic_unit_arithmetic_control_Mmux_b_prime21_65,
      I4 => rd_reg00_block_ff3_block_q_19,
      I5 => alu_arithmetic_unit_arithmetic_control_Mmux_a_prime11_66,
      O => alu_arithmetic_unit_b_prime(3)
    );
  alu_arithmetic_unit_arithmetic_control_Mmux_b_prime41 : LUT6
    generic map(
      INIT => X"FEF4FFFFFEF4FEF4"
    )
    port map (
      I0 => regmux_bus(1),
      I1 => alu_arithmetic_unit_arithmetic_control_Mmux_b_prime23,
      I2 => alu_arithmetic_unit_arithmetic_control_Mmux_b_prime22,
      I3 => alu_arithmetic_unit_arithmetic_control_Mmux_b_prime21_65,
      I4 => rd_reg00_block_ff1_block_q_21,
      I5 => alu_arithmetic_unit_arithmetic_control_Mmux_a_prime11_66,
      O => alu_arithmetic_unit_b_prime(1)
    );
  alu_arithmetic_unit_arithmetic_control_Mmux_c_1_c_1_MUX_28_o11 : LUT4
    generic map(
      INIT => X"E8EA"
    )
    port map (
      I0 => alu_arithmetic_unit_ci_prime,
      I1 => alu_arithmetic_unit_c_prime(0),
      I2 => alu_arithmetic_unit_c_prime(1),
      I3 => alu_arithmetic_unit_arithmetic_control_is_a,
      O => alu_arithmetic_unit_arithmetic_control_c_1_c_1_MUX_28_o
    );
  alu_arithmetic_unit_arithmetic_control_Mmux_a_prime211 : LUT4
    generic map(
      INIT => X"FF45"
    )
    port map (
      I0 => alu_arithmetic_unit_c_prime(1),
      I1 => alu_arithmetic_unit_arithmetic_control_is_a,
      I2 => alu_arithmetic_unit_ci_prime,
      I3 => alu_arithmetic_unit_c_prime(0),
      O => alu_arithmetic_unit_arithmetic_control_Mmux_a_prime21_70
    );
  alu_arithmetic_unit_arithmetic_control_Mmux_a_prime41 : LUT5
    generic map(
      INIT => X"FFFFF888"
    )
    port map (
      I0 => rd_reg00_block_ff3_block_q_19,
      I1 => alu_arithmetic_unit_arithmetic_control_Mmux_a_prime21_70,
      I2 => regmux_bus(3),
      I3 => alu_arithmetic_unit_arithmetic_control_Mmux_a_prime11_66,
      I4 => alu_arithmetic_unit_arithmetic_control_Mmux_a_prime22,
      O => alu_arithmetic_unit_a_prime(3)
    );
  alu_arithmetic_unit_arithmetic_control_Mmux_a_prime31 : LUT5
    generic map(
      INIT => X"FFFFF888"
    )
    port map (
      I0 => rd_reg00_block_ff2_block_q_20,
      I1 => alu_arithmetic_unit_arithmetic_control_Mmux_a_prime21_70,
      I2 => regmux_bus(2),
      I3 => alu_arithmetic_unit_arithmetic_control_Mmux_a_prime11_66,
      I4 => alu_arithmetic_unit_arithmetic_control_Mmux_a_prime22,
      O => alu_arithmetic_unit_a_prime(2)
    );
  alu_arithmetic_unit_arithmetic_control_Mmux_a_prime21 : LUT5
    generic map(
      INIT => X"FFFFF888"
    )
    port map (
      I0 => rd_reg00_block_ff1_block_q_21,
      I1 => alu_arithmetic_unit_arithmetic_control_Mmux_a_prime21_70,
      I2 => regmux_bus(1),
      I3 => alu_arithmetic_unit_arithmetic_control_Mmux_a_prime11_66,
      I4 => alu_arithmetic_unit_arithmetic_control_Mmux_a_prime22,
      O => alu_arithmetic_unit_a_prime(1)
    );
  alu_arithmetic_unit_arithmetic_control_Mmux_a_prime11 : LUT6
    generic map(
      INIT => X"2223A2A22220A2A2"
    )
    port map (
      I0 => rd_reg00_block_ff0_block_q_22,
      I1 => alu_arithmetic_unit_c_prime(1),
      I2 => alu_arithmetic_unit_c_prime(0),
      I3 => alu_arithmetic_unit_arithmetic_control_is_a,
      I4 => alu_arithmetic_unit_ci_prime,
      I5 => regmux_bus(0),
      O => alu_arithmetic_unit_a_prime(0)
    );
  alu_Mmux_s1 : LUT6
    generic map(
      INIT => X"EBBE41144114EBBE"
    )
    port map (
      I0 => ideco_bus_3_IBUF_0,
      I1 => alu_arithmetic_unit_a_prime(0),
      I2 => alu_arithmetic_unit_ci_prime,
      I3 => alu_arithmetic_unit_b_prime(0),
      I4 => ideco_bus_0_IBUF_3,
      I5 => N2,
      O => out_stage1_0_OBUF_42
    );
  alu_Mmux_s2 : LUT6
    generic map(
      INIT => X"EBBE41144114EBBE"
    )
    port map (
      I0 => ideco_bus_3_IBUF_0,
      I1 => alu_arithmetic_unit_b_prime(1),
      I2 => alu_arithmetic_unit_a_prime(1),
      I3 => alu_arithmetic_unit_full_4bit_adder_c(0),
      I4 => ideco_bus_0_IBUF_3,
      I5 => N4,
      O => out_stage1_1_OBUF_41
    );
  alu_Mmux_s3 : LUT6
    generic map(
      INIT => X"EBBE41144114EBBE"
    )
    port map (
      I0 => ideco_bus_3_IBUF_0,
      I1 => alu_arithmetic_unit_b_prime(2),
      I2 => alu_arithmetic_unit_a_prime(2),
      I3 => alu_arithmetic_unit_full_4bit_adder_c(1),
      I4 => ideco_bus_0_IBUF_3,
      I5 => N6,
      O => out_stage1_2_OBUF_40
    );
  alu_Mmux_s4 : LUT6
    generic map(
      INIT => X"EBBE41144114EBBE"
    )
    port map (
      I0 => ideco_bus_3_IBUF_0,
      I1 => alu_arithmetic_unit_b_prime(3),
      I2 => alu_arithmetic_unit_a_prime(3),
      I3 => alu_arithmetic_unit_full_4bit_adder_c(2),
      I4 => ideco_bus_0_IBUF_3,
      I5 => N8,
      O => out_stage1_3_OBUF_39
    );
  alu_arithmetic_unit_arithmetic_control_comparator_is_a2 : LUT5
    generic map(
      INIT => X"B2BB22B2"
    )
    port map (
      I0 => rd_reg00_block_ff3_block_q_19,
      I1 => regmux_bus(3),
      I2 => rd_reg00_block_ff2_block_q_20,
      I3 => regmux_bus(2),
      I4 => alu_arithmetic_unit_arithmetic_control_comparator_is_a,
      O => alu_arithmetic_unit_arithmetic_control_is_a
    );
  ideco_bus_4_IBUF : IBUF
    port map (
      I => ideco_bus(4),
      O => ideco_bus_4_IBUF_4
    );
  ideco_bus_3_IBUF : IBUF
    port map (
      I => ideco_bus(3),
      O => ideco_bus_3_IBUF_0
    );
  ideco_bus_2_IBUF : IBUF
    port map (
      I => ideco_bus(2),
      O => ideco_bus_2_IBUF_1
    );
  ideco_bus_1_IBUF : IBUF
    port map (
      I => ideco_bus(1),
      O => ideco_bus_1_IBUF_2
    );
  ideco_bus_0_IBUF : IBUF
    port map (
      I => ideco_bus(0),
      O => ideco_bus_0_IBUF_3
    );
  data_a_4_IBUF : IBUF
    port map (
      I => data_a(4),
      O => data_a_4_IBUF_5
    );
  data_a_3_IBUF : IBUF
    port map (
      I => data_a(3),
      O => data_a_3_IBUF_6
    );
  data_a_2_IBUF : IBUF
    port map (
      I => data_a(2),
      O => data_a_2_IBUF_7
    );
  data_a_1_IBUF : IBUF
    port map (
      I => data_a(1),
      O => data_a_1_IBUF_8
    );
  data_a_0_IBUF : IBUF
    port map (
      I => data_a(0),
      O => data_a_0_IBUF_9
    );
  data_b_4_IBUF : IBUF
    port map (
      I => data_b(4),
      O => data_b_4_IBUF_10
    );
  data_b_3_IBUF : IBUF
    port map (
      I => data_b(3),
      O => data_b_3_IBUF_11
    );
  data_b_2_IBUF : IBUF
    port map (
      I => data_b(2),
      O => data_b_2_IBUF_12
    );
  data_b_1_IBUF : IBUF
    port map (
      I => data_b(1),
      O => data_b_1_IBUF_13
    );
  data_b_0_IBUF : IBUF
    port map (
      I => data_b(0),
      O => data_b_0_IBUF_14
    );
  out_stage1_4_OBUF : OBUF
    port map (
      I => out_stage1_4_OBUF_38,
      O => out_stage1(4)
    );
  out_stage1_3_OBUF : OBUF
    port map (
      I => out_stage1_3_OBUF_39,
      O => out_stage1(3)
    );
  out_stage1_2_OBUF : OBUF
    port map (
      I => out_stage1_2_OBUF_40,
      O => out_stage1(2)
    );
  out_stage1_1_OBUF : OBUF
    port map (
      I => out_stage1_1_OBUF_41,
      O => out_stage1(1)
    );
  out_stage1_0_OBUF : OBUF
    port map (
      I => out_stage1_0_OBUF_42,
      O => out_stage1(0)
    );
  cout_stage1_OBUF : OBUF
    port map (
      I => cout_stage1_OBUF_43,
      O => cout_stage1
    );
  alu_Mmux_co11 : LUT4
    generic map(
      INIT => X"5440"
    )
    port map (
      I0 => ideco_bus_3_IBUF_0,
      I1 => alu_arithmetic_unit_b_prime(3),
      I2 => alu_arithmetic_unit_full_4bit_adder_c(2),
      I3 => alu_arithmetic_unit_a_prime(3),
      O => cout_stage1_OBUF_43
    );
  alu_arithmetic_unit_operation_control_instance_Mmux_c_prime11 : LUT6
    generic map(
      INIT => X"666AA6AAAAAAAAAA"
    )
    port map (
      I0 => ideco_bus_1_IBUF_2,
      I1 => ideco_bus_0_IBUF_3,
      I2 => ideco_bus_4_IBUF_4,
      I3 => acm_ff4_block_q_33,
      I4 => rd_reg01_block_ff4_block_q_23,
      I5 => ideco_bus_2_IBUF_1,
      O => alu_arithmetic_unit_c_prime(0)
    );
  alu_arithmetic_unit_full_4bit_adder_adder_c_co1 : LUT5
    generic map(
      INIT => X"FEEAA880"
    )
    port map (
      I0 => alu_arithmetic_unit_b_prime(2),
      I1 => alu_arithmetic_unit_b_prime(1),
      I2 => alu_arithmetic_unit_full_4bit_adder_c(0),
      I3 => alu_arithmetic_unit_a_prime(1),
      I4 => alu_arithmetic_unit_a_prime(2),
      O => alu_arithmetic_unit_full_4bit_adder_c(2)
    );
  alu_Mmux_s1_SW0 : LUT6
    generic map(
      INIT => X"4949491F1F491F1F"
    )
    port map (
      I0 => ideco_bus_1_IBUF_2,
      I1 => ideco_bus_2_IBUF_1,
      I2 => rd_reg00_block_ff0_block_q_22,
      I3 => ideco_bus_4_IBUF_4,
      I4 => acm_ff0_block_q_37,
      I5 => rd_reg01_block_ff0_block_q_27,
      O => N2
    );
  alu_Mmux_s2_SW0 : LUT6
    generic map(
      INIT => X"4949491F1F491F1F"
    )
    port map (
      I0 => ideco_bus_1_IBUF_2,
      I1 => ideco_bus_2_IBUF_1,
      I2 => rd_reg00_block_ff1_block_q_21,
      I3 => ideco_bus_4_IBUF_4,
      I4 => acm_ff1_block_q_36,
      I5 => rd_reg01_block_ff1_block_q_26,
      O => N4
    );
  alu_Mmux_s3_SW0 : LUT6
    generic map(
      INIT => X"4949491F1F491F1F"
    )
    port map (
      I0 => ideco_bus_1_IBUF_2,
      I1 => ideco_bus_2_IBUF_1,
      I2 => rd_reg00_block_ff2_block_q_20,
      I3 => ideco_bus_4_IBUF_4,
      I4 => acm_ff2_block_q_35,
      I5 => rd_reg01_block_ff2_block_q_25,
      O => N6
    );
  alu_Mmux_s4_SW0 : LUT6
    generic map(
      INIT => X"4949491F1F491F1F"
    )
    port map (
      I0 => ideco_bus_1_IBUF_2,
      I1 => ideco_bus_2_IBUF_1,
      I2 => rd_reg00_block_ff3_block_q_19,
      I3 => ideco_bus_4_IBUF_4,
      I4 => acm_ff3_block_q_34,
      I5 => rd_reg01_block_ff3_block_q_24,
      O => N8
    );
  alu_arithmetic_unit_arithmetic_control_comparator_is_a1 : LUT6
    generic map(
      INIT => X"082A082AAEBF082A"
    )
    port map (
      I0 => rd_reg00_block_ff1_block_q_21,
      I1 => ideco_bus_4_IBUF_4,
      I2 => rd_reg01_block_ff1_block_q_26,
      I3 => acm_ff1_block_q_36,
      I4 => rd_reg00_block_ff0_block_q_22,
      I5 => regmux_bus(0),
      O => alu_arithmetic_unit_arithmetic_control_comparator_is_a
    );
  alu_arithmetic_unit_arithmetic_control_Mmux_ci_c_1_MUX_29_o11 : LUT6
    generic map(
      INIT => X"DBBEDBEB77777777"
    )
    port map (
      I0 => ideco_bus_2_IBUF_1,
      I1 => ideco_bus_0_IBUF_3,
      I2 => rd_reg00_block_ff4_block_q_18,
      I3 => ideco_bus_1_IBUF_2,
      I4 => regmux_bus(4),
      I5 => alu_arithmetic_unit_c_prime(0),
      O => alu_arithmetic_unit_arithmetic_control_ci_c_1_MUX_29_o
    );
  alu_arithmetic_unit_full_4bit_adder_adder_b_co1 : LUT5
    generic map(
      INIT => X"FEEAA880"
    )
    port map (
      I0 => alu_arithmetic_unit_b_prime(1),
      I1 => alu_arithmetic_unit_b_prime(0),
      I2 => alu_arithmetic_unit_ci_prime,
      I3 => alu_arithmetic_unit_a_prime(0),
      I4 => alu_arithmetic_unit_a_prime(1),
      O => alu_arithmetic_unit_full_4bit_adder_c(1)
    );
  alu_arithmetic_unit_arithmetic_control_Mmux_b_prime221 : LUT4
    generic map(
      INIT => X"0820"
    )
    port map (
      I0 => ideco_bus_1_IBUF_2,
      I1 => ideco_bus_0_IBUF_3,
      I2 => ideco_bus_2_IBUF_1,
      I3 => rd_reg00_block_ff4_block_q_18,
      O => alu_arithmetic_unit_arithmetic_control_Mmux_b_prime22
    );
  alu_arithmetic_unit_arithmetic_control_Mmux_b_prime211 : LUT5
    generic map(
      INIT => X"F7F794C1"
    )
    port map (
      I0 => ideco_bus_1_IBUF_2,
      I1 => rd_reg00_block_ff4_block_q_18,
      I2 => ideco_bus_0_IBUF_3,
      I3 => regmux_bus(4),
      I4 => ideco_bus_2_IBUF_1,
      O => alu_arithmetic_unit_arithmetic_control_Mmux_b_prime21_65
    );
  alu_arithmetic_unit_arithmetic_control_Mmux_a_prime221 : LUT6
    generic map(
      INIT => X"0808800808808080"
    )
    port map (
      I0 => ideco_bus_0_IBUF_3,
      I1 => ideco_bus_2_IBUF_1,
      I2 => ideco_bus_1_IBUF_2,
      I3 => ideco_bus_4_IBUF_4,
      I4 => rd_reg01_block_ff4_block_q_23,
      I5 => acm_ff4_block_q_33,
      O => alu_arithmetic_unit_arithmetic_control_Mmux_a_prime22
    );
  alu_Mmux_s53 : MUXF7
    port map (
      I0 => N10,
      I1 => N11,
      S => ideco_bus_1_IBUF_2,
      O => out_stage1_4_OBUF_38
    );
  alu_Mmux_s53_F : LUT6
    generic map(
      INIT => X"4444411444444444"
    )
    port map (
      I0 => ideco_bus_3_IBUF_0,
      I1 => regmux_bus(4),
      I2 => alu_arith_unit_coutput,
      I3 => alu_arithmetic_unit_arithmetic_control_fix_aux_53,
      I4 => ideco_bus_2_IBUF_1,
      I5 => alu_arithmetic_unit_ci_prime,
      O => N10
    );
  alu_Mmux_s53_G : LUT5
    generic map(
      INIT => X"54440444"
    )
    port map (
      I0 => ideco_bus_3_IBUF_0,
      I1 => rd_reg00_block_ff4_block_q_18,
      I2 => ideco_bus_0_IBUF_3,
      I3 => ideco_bus_2_IBUF_1,
      I4 => regmux_bus(4),
      O => N11
    );
  gcm_b_BUFGP : BUFGP
    port map (
      I => gcm_b,
      O => gcm_b_BUFGP_15
    );
  gcm_c_BUFGP : BUFGP
    port map (
      I => gcm_c,
      O => gcm_c_BUFGP_16
    );
  gcm_d_BUFGP : BUFGP
    port map (
      I => gcm_d,
      O => gcm_d_BUFGP_17
    );

end Structure;

