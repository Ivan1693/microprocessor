library ieee;
use ieee.std_logic_1164.all;
use work.alu_devs.all;
use work.basic_devs.all;
use work.memory_devs.all;

entity micro_stage1 is
  port(
   inst_in: in std_logic_vector(4 downto 0);
   gcm_b: in std_logic;	-- Señal del RD
   gcm_c: in std_logic;	-- Señal del ACC
   data_a: in std_logic_vector(4 downto 0);
   data_b: in std_logic_vector(4 downto 0);
   cout_stage1: out std_logic;
   out_stage1: out std_logic_vector(4 downto 0);
   acc_port: out std_logic_vector(9 downto 0)
  );
end entity;

architecture behavioral of micro_stage1 is
	
	signal unit_sel: std_logic;
	signal op_sel: std_logic_vector(2 downto 0);
	signal carry_in: std_logic;
	signal carry_out: std_logic;
	signal bank_enable:std_logic_vector(1 downto 0);

	-- Buses
	signal alu_bus: std_logic_vector(4 downto 0);
	signal rda_bus: std_logic_vector(4 downto 0);
	signal rdb_bus: std_logic_vector(4 downto 0);
	signal acc_port_a: std_logic_vector(4 downto 0);
	signal acc_port_b: std_logic_vector(4 downto 0);
	signal acc_port_b_pre: std_logic_vector(4 downto 0);

begin
	-- Segmentación de instrucción
		unit_sel <= inst_in(4);
		op_sel <= 	inst_in(3 downto 1);
		carry_in <= inst_in(0);

		bank_enable <= gcm_b & gcm_b;

		cout_stage1 <= carry_out;
		out_stage1 <= alu_bus;

		acc_port_b_pre <= "0000" & carry_out;

		alu: alu_16op port map(unit_sel,op_sel,carry_in,rda_bus,rdb_bus,carry_out,alu_bus);
		rd: bank251 port map(bank_enable,data_a,data_b,rda_bus,rdb_bus);
		acc_1: reg05 port map(gcm_c,alu_bus,acc_port_a);
		acc_2: reg05 port map(gcm_c,acc_port_b_pre,acc_port_b);
	
		acc_port <= acc_port_b & acc_port_a;

end architecture;