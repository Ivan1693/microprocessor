library ieee;
use ieee.std_logic_1164.all;
use work.basic_devs.conta203;

entity conta203_tb is
end entity;

architecture behavioral of conta203_tb is
	signal clk:std_logic:='1';
	signal out_signal: std_logic_vector(1 downto 0);
begin
	clk <= not(clk) after 2 ns;
	conta_03: conta203 port map(clk,out_signal);
end architecture;

