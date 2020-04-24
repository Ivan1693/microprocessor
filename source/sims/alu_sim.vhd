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
	signal co: std_logic;
	signal s: std_logic_vector(3 downto 0);

begin

	alu_16op_block: alu_16op port map(unit_sel,op_sel,ci,a,b,co,s);

end architecture;