library ieee;
use ieee.std_logic_1164.all;

entity comp2bit is
	port(
	 a: in STD_LOGIC_VECTOR (1 downto 0);
	 b: in STD_LOGIC_VECTOR (1 downto 0);
	 is_a: out STD_LOGIC;
	 is_b: out STD_LOGIC;
	 are_equal: out STD_LOGIC
);
end entity;

architecture behavioral of comp2bit is
begin
	is_a <= (a(1) and (not b(1))) or (a(0) and not b(1) and not b(0)) or (a(1) and a(0) and (not b(0)));	
	is_b <= (b(1) and (not a(1))) or (b(0) and not a(1) and not a(0)) or (b(1) and b(0) and not a(0));
	are_equal <= (a(1) xnor b(1)) and (a(0) xnor b(0));
end architecture;
