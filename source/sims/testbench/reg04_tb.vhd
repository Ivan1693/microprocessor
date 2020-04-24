library ieee;
use ieee.std_logic_1164.all;
use work.memory_devs.reg04;

entity reg04_test is
end entity;

architecture reg04_tb of reg04_test is
    signal enable : std_logic :='1';
    signal input_a: std_logic_vector(3 downto 0);
    signal output_a: std_logic_vector(3 downto 0);

begin
	enable <= not(enable) after 100 ns;
	input_a <= "0000", "0001" after 30 ns, "0010" after 60 ns ,"0011" after 90 ns,"0100" after 120 ns;
	reg_a: reg04 port map (enable,input_a,output_a);

end architecture;