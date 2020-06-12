library ieee;
use ieee.std_logic_1164.all;

entity conta304 is
	port (
	 clk: in std_logic;
	 count: out std_logic_vector(2 downto 0)
  );
end entity;

architecture behavioral of conta304 is
	signal delta: std_logic_vector(2 downto 0):="000";
begin
	process(clk)
	begin
		if(clk='1') then
			delta(2) <= (not delta(2)) and delta(1) and delta(0);
			delta(1) <= (not delta(2)) and (delta(0) xor delta(1));
			delta(0) <= (not delta(2)) and not delta(0);
			count <= delta;
		end if;
	end process;
end architecture;