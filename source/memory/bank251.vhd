library ieee;
use ieee.std_logic_1164.all;
use work.memory_devs.reg05;

entity bank251 is
	port(
	 enable: in std_logic_vector(1 downto 0);
	 reg00: in std_logic_vector(4 downto 0);
	 reg01: in std_logic_vector(4 downto 0);
	 out00: out std_logic_vector(4 downto 0);
	 out01: out std_logic_vector(4 downto 0) 
	);
end entity;

architecture behavioral of bank251 is
	signal enable00: std_logic;
	signal enable01: std_logic;
begin
	enable00 <= enable(1);
	enable01 <= enable(0);
	reg00_block: reg05 port map(enable00,reg00,out00);
	reg01_block: reg05 port map(enable01,reg01,out01);
end architecture;