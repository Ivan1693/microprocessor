library ieee;
use ieee.std_logic_1164.all;
use work.memory_devs.ff0;

entity ff0_tb is
end entity;

architecture testbench of ff0_tb is
	signal enable : std_logic :='1';
	signal dat: std_logic :='1';
	signal q: std_logic;

begin
	enable <= not(enable) after 100 ns;
	dat <= not(dat) after 30 ns;
	flipflop: ff0 port map(dat,enable,q);
end architecture;