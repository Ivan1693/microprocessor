library ieee;
use ieee.std_logic_1164.all;

entity conta305 is
	port (
	 clk: in std_logic;
	 count: out std_logic_vector(2 downto 0)
  );
end entity;

architecture behavioral of conta305 is
	signal delta: std_logic_vector(2 downto 0):="000";
begin
	process(clk)
	begin
		if(clk='1') then
			delta <=
			((not delta(2) and delta(1) and delta(0)) or (delta(2) and not delta(0) and not delta(1))) & 
			(not delta(2) and (delta(0) xor delta(1))) & 
			(not delta(0) and (not delta(1) or not delta(2)));
			count <= delta;
		end if;
	end process;
end architecture;