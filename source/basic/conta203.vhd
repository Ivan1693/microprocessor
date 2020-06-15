library ieee;
use ieee.std_logic_1164.all;

entity conta203 is
	port (
	 clk: in std_logic;
	 count: out std_logic_vector(1 downto 0)
  );
end entity;

architecture behavioral of conta203 is
	signal delta: std_logic_vector(1 downto 0):="00";
begin
	process(clk)
	begin
		if(clk='1') then
			delta(1) <=  delta(0) xor delta(1);
			delta(0) <=  not delta(0);
			count <= delta;
		end if;
	end process;
end architecture;