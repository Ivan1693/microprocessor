library ieee;
use ieee.std_logic_1164.all;
use work.basic_devs.conta40F;

entity conta40F_tb is
end entity;

architecture behavioral of conta40F_tb is
	signal clk:std_logic:='1';
	signal reset: std_logic:='0';
	signal out_signal: std_logic_vector(3 downto 0);
	signal end_o: std_logic;

begin
	clk <= not(clk) after 2 ns;
	reset <= not(reset) after 800 ns;

	conta_0F: conta40F port map(clk,reset,out_signal,end_o);
end architecture;