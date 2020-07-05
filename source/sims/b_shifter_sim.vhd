library ieee;
use ieee.std_logic_1164.all;
use work.basic_devs.b_shifter4;
use work.basic_devs.b_shifter5;

entity b_shifter_sim is
end entity;

architecture testbench of b_shifter_sim is
	signal value4: std_logic_vector(3 downto 0):="0100";
	signal shifted4: std_logic_vector(3 downto 0);
	signal places4: std_logic_vector(1 downto 0);

	signal value5: std_logic_vector(4 downto 0):="10000";
	signal shifted5: std_logic_vector(4 downto 0);
	signal places5: std_logic_vector(2 downto 0);

	signal dir: std_logic;
begin
	dir<='0';
	places4 <= "00" after 0 ns, "01" after 1 ns, "10" after 2 ns, "11" after 3 ns,"00" after 4 ns;
	places5 <= "000" after 0 ns, "001" after 1 ns, "010" after 2 ns, "011" after 3 ns,"100" after 4 ns, "000" after 5 ns;
	b_shift4: b_shifter4 port map(dir,value4,places4,shifted4);
	b_shift5: b_shifter5 port map(dir,value5,places5,shifted5);
end architecture ; -- testbench
