library ieee;
use ieee.std_logic_1164.all;
use work.memory_devs.bank241;

entity bank241_test is
end entity;

architecture bank241_tb of bank241_test is
	signal data_a: std_logic_vector(3 downto 0):="0110";
	signal data_b: std_logic_vector(3 downto 0):="1100";
	signal out_a: std_logic_vector(3 downto 0);
	signal out_b: std_logic_vector(3 downto 0);
	signal enable: std_logic_vector(1 downto 0):="00";

begin
	enable <= not(enable) after 100 ns;
	data_a <= not(data_a) after 30 ns;
	data_b <= not(data_b) after 30 ns;
	
	data_bank: bank241 port map(enable,data_a,data_b,out_a,out_b);

end architecture;