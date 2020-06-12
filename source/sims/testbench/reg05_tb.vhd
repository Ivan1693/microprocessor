library ieee;
use ieee.std_logic_1164.all;
use work.memory_devs.reg05;

entity reg05_test is
end entity;

architecture reg05_tb of reg05_test is
    signal enable : std_logic :='1';
    signal input_a: std_logic_vector(4 downto 0);
    signal output_a: std_logic_vector(4 downto 0);

begin
	enable <= not(enable) after 100 ns;
	input_a <= "00000", "00001" after 30 ns, "00010" after 60 ns ,"00011" after 90 ns,"00100" after 120 ns;
	reg_a: reg05 port map (enable,input_a,output_a);

end architecture;