library ieee;
use ieee.std_logic_1164.all;
use work.alu_devs.alu_16op;

entity alu_sim is
end entity;

architecture behavior of alu_sim is
	signal instru: std_logic_vector(4 downto 0);
	signal a: std_logic_vector(4 downto 0);
	signal b: std_logic_vector(4 downto 0);
	signal co: std_logic;
	signal s: std_logic_vector(4 downto 0);

begin
	
	a<="10101";
	b<="00110" after 0 ns, "00001" after 6200 ps, "00010" after 6400 ps, "00011" after 6600 ps, "00100" after 6800 ps, "00001" after 7200 ps, "00010" after 7400 ps, "00011" after 7600 ps, "00100" after 7800 ps, "00001" after 8200 ps, "00010" after 8400 ps, "00011" after 8600 ps, "00100" after 8800 ps, "00101" after 8900 ps, "00001" after 9200 ps, "00010" after 9400 ps, "00011" after 9600 ps, "00100" after 9800 ps, "00101" after 9900 ps;
	instru<="10000" after 0 ns, "10001" after 1 ns, "10010" after 2 ns, "10011" after 3 ns, "10100" after 4 ns, "10101" after 5 ns, "10110" after 6 ns, "10111" after 7 ns, "11000" after 8 ns, "11001" after 9 ns, "11010" after 10 ns;
	alu_instancia: alu_16op port map (instru(4),instru(3 downto 1), instru(0), a, b, co, s);
end architecture;