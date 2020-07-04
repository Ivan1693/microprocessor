library ieee;
use ieee.std_logic_1164.all;
use work.alu_devs.alu_16op;

entity alu_sim is
end entity;

architecture behavior of alu_sim is
	signal unit_sel: std_logic;
	signal op_sel: std_logic_vector(1 downto 0);
	signal ci: std_logic;
	signal a: std_logic_vector(3 downto 0);
	signal b: std_logic_vector(3 downto 0);
	signal sa: std_logic;
	signal sb: std_logic;
	signal co: std_logic;
	signal sf: std_logic;
	signal s: std_logic_vector(3 downto 0);

begin
	
	--Test B > A
	
	--SUM

	unit_sel <= '0';
	op_sel <= "00";
	ci <= '0';
	a <= "0101";
	b <= "0110";
	sa <= '0';
	sb <= '0';
	
	alu_16op_block_sum_1: alu_16op port map(unit_sel,op_sel,ci,a,b,sa,sb,sf,co,s);
	
	sa <= '0';
	sb <= '1';
	
	alu_16op_block_sum_2: alu_16op port map(unit_sel,op_sel,ci,a,b,sa,sb,sf,co,s);
	
	sa <= '1';
	sb <= '0';
	
	alu_16op_block_sum_3: alu_16op port map(unit_sel,op_sel,ci,a,b,sa,sb,sf,co,s);

	sa <= '1';
	sb <= '1';
	
	alu_16op_block_sum_4: alu_16op port map(unit_sel,op_sel,ci,a,b,sa,sb,sf,co,s);
		
end architecture;