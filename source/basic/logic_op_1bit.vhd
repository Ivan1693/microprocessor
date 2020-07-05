library ieee;
use ieee.std_logic_1164.all;

entity logic_op_1bit is
	port(
	 a : in std_logic;
	 b : in std_logic;
	 c : in std_logic_vector (2 downto 0);
	 ci : in std_logic;
	 s : out std_logic);
end entity;

architecture behavioral of logic_op_1bit is
begin
	s <=	ci xor (a and b) when c = "000" else
		  	ci xor (a or b)  when c = "001" else
			ci xor (a xor b) when c = "010";
end architecture;
