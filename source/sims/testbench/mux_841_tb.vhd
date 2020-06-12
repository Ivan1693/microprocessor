library ieee;
use ieee.std_logic_1164.all;
use work.basic_devs.mux_841;

entity mux_841_tb is
end entity;

architecture mux_841_test of mux_841_tb is
	signal sel: std_logic;
	signal reg_a: std_logic_vector(3 downto 0);
	signal reg_b: std_logic_vector(3 downto 0);
	signal s: std_logic_vector(3 downto 0);
begin
	sel <= '0', '1' after 10 fs;
	reg_a <="1001";
	reg_b <="0110";

	mux_841_dev: mux_841 port map(sel,reg_a,reg_b,s);
	
end architecture ; -- mux_841_test