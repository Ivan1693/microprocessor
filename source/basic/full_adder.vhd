library ieee;
use ieee.std_logic_1164.all;

entity full_adder is
	port(
	 a: in std_logic;
	 b: in std_logic;
	 ci: in std_logic;
	 co: out std_logic;
	 s: out std_logic	
);
end entity;

architecture behavioral of full_adder is
begin
	s <= a xor b xor ci;
	co <= (a and b) or (ci and (a or b));
end architecture;