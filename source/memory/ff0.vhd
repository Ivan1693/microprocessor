library ieee;
use ieee.std_logic_1164.all;

entity ff0 is
	port (
	 d: in std_logic;
	 enable: in std_logic;
	 q: out  std_logic
	);
end entity;

architecture behavioral of ff0 is
begin
	q <= d when enable='1';
end architecture ;