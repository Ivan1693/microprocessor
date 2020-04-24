library ieee;
use ieee.std_logic_1164.all;

entity logic_op_1bit is
	port(
	 a : in std_logic;
	 b : in std_logic;
	 c : in std_logic_vector (1 downto 0);
	 ci : in std_logic;
	 s : out std_logic);
end entity;

architecture behavioral of logic_op_1bit is
begin
	s <=	ci xor (a and b) when c = "00" else
		  	ci xor (a or b) when c = "01" else
			ci xor (a xor b) when c = "10" else
			ci xor a when c = "11";
end architecture;
