library ieee;
use ieee.std_logic_1164.all;

entity dmux513 is
  port (
	sel: in std_logic_vector(2 downto 0);
	src: in std_logic;
	dst00: out std_logic;
	dst01: out std_logic;
	dst02: out std_logic;
	dst03: out std_logic;
	dst04: out std_logic
  );
end entity;

architecture behavioral of dmux513 is
begin
	process(sel,src)
	begin
		if sel="000" then
			dst04 <= '0';
			dst00 <= src;
		else
			dst00 <= '0';
			if sel="001" then
				dst01 <= src;
			else
			dst01 <= '0';
			if sel="010" then
				dst02 <= src;
			else
				dst02 <= '0';
				if sel="011" then
					dst03 <= src;
			else
				dst03 <= '0';
				if sel="100" then
					dst04 <= src;
		end if;end if;end if;end if;end if;
	end process;
end architecture;