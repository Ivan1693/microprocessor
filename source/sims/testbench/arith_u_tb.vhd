library ieee;
use ieee.std_logic_1164.all;
use work.alu_devs.all;

entity arith_u_tb is
end entity;

architecture testbench of arith_u_tb is
	 signal a: std_logic_vector (3 downto 0);
	 signal b: std_logic_vector (3 downto 0);
	 signal op_sel: std_logic_vector (1 downto 0);
	 signal ci: std_logic;
	 signal co: std_logic;
	 signal s: std_logic_vector (3 downto 0);
begin
	a <=	"0000" after 0 ns,
			"0001" after 1 ns,
			"0010" after 2 ns,
			"0011" after 3 ns,
			"0100" after 4 ns,
			"0101" after 5 ns,
			"0110" after 6 ns,
			"0111" after 7 ns,
			"1000" after 8 ns,
			"1001" after 9 ns,
			"1010" after 10 ns,
			"1011" after 11 ns,
			"1100" after 12 ns,
			"1101" after 13 ns,
			"1110" after 14 ns,
			"1111" after 15 ns;
	b <= "0111";
	op_sel <= "00";
	ci <= '1';

	atrith_u_block: arith_u port map(a,b,op_sel,ci,co,s);

end architecture;