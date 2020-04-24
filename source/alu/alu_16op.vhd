-- Checar decrementos
library ieee;
use ieee.std_logic_1164.all;
use work.alu_devs.all;

entity alu_16op is
	port(
	 unit_sel : in std_logic;
	 op_sel : in std_logic_vector(1 downto 0);
	 ci : in std_logic;
	 a : in std_logic_vector(3 downto 0);
	 b : in std_logic_vector(3 downto 0);
	 co : out std_logic;
	 s : out std_logic_vector(3 downto 0)
	 );
end entity;

architecture behavioral of alu_16op is
	signal logic_unit_output: std_logic_vector(3 downto 0);
	signal arith_unit_coutput: std_logic;
	signal arith_unit_output: std_logic_vector(3 downto 0);
begin
	arithmetic_unit: arith_u port map (a,b,op_sel,ci,arith_unit_coutput,arith_unit_output);
	logic_unit: logic_u port map (a,b,op_sel,ci,logic_unit_output);
	
	process(unit_sel,arith_unit_output,arith_unit_coutput,logic_unit_output)
	begin
		if(unit_sel='0') then
			s <= arith_unit_output;
			co <= arith_unit_coutput;
		else
			s <= logic_unit_output;
			co <= '0';
		end if;
	end process;
end architecture;