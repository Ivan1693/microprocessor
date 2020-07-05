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
	
	a<=
		"00010" after 0 ns,
		"00001" after 8 ns,
		"01001" after 9 ns,
		"01010" after 10 ns,
		"01011" after 11 ns,
		"01100" after 12 ns,
		"10001" after 13 ns,
		"01110" after 14 ns,
		"01111" after 15 ns,

	-- Corrimientos -rotaciones
	"11000" after 22 ns;
	b<=

		--Aritméticas
		"00000" after 0 ns,
		"00001" after 1 ns,
		"00010" after 2 ns,
		"00011" after 3 ns,
		"00100" after 4 ns,
		"00101" after 5 ns,
		"00110" after 6 ns,
		"00111" after 7 ns,
		--Saltos
		"00100" after 8 ns,
		"01001" after 9 ns,
		"01010" after 10 ns,
		"01011" after 11 ns,
		"00010" after 12 ns,
		"01101" after 13 ns,
		"01110" after 14 ns,
		"01111" after 15 ns,

		-- Lógicas
		"00000" after 16 ns,
		"00001" after 17 ns,
		"00010" after 18 ns,
		"00011" after 19 ns,
		"00100" after 20 ns,
		"00101" after 21 ns,


		--Corrimientos - rotaciones
		"00001" after 22 ns,
		"00001" after 23 ns,
		"00001" after 24 ns,
		"00001" after 25 ns,
		"00001" after 26 ns,
		"00001" after 27 ns,
		"00001" after 28 ns,
		"00001" after 29 ns;
		
	instru<=
		--Aritméticas
		"00000" after 0 ns,
		"00001" after 1 ns,
		"00010" after 2 ns,
		"00011" after 3 ns,
		"00100" after 4 ns,
		"00101" after 5 ns,
		"00110" after 6 ns,
		"00111" after 7 ns,
		--Saltos
		"01000" after 8 ns,
		"01001" after 9 ns,
		"01010" after 10 ns,
		"01011" after 11 ns,
		"01100" after 12 ns,
		"01101" after 13 ns,
		"01110" after 14 ns,
		"01111" after 15 ns,


		--Lógicas
		"10000" after 16 ns,
		"10001" after 17 ns,
		"10010" after 18 ns,
		"10011" after 19 ns,
		"10100" after 20 ns,
		"10101" after 21 ns,

		--Corrimientos
		"10110" after 22 ns,
		"10111" after 23 ns,
		"11000" after 24 ns,
		"11001" after 25 ns,


		--Rotaciones
		"11010" after 26 ns,
		"11011" after 27 ns,
		"11100" after 28 ns,
		"11101" after 29 ns,
		"00000" after 30 ns;
	
		alu_instancia: alu_16op port map (instru(4),instru(3 downto 1), instru(0), a, b, co, s);
end architecture;