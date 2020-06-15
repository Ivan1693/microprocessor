library ieee;
use ieee.std_logic_1164.all;

entity dmux673 is
	port(
		sel: in std_logic_vector(2 downto 0);
		src: in std_logic_vector(6 downto 0);
		dst00: out std_logic_vector(6 downto 0);
		dst01: out std_logic_vector(6 downto 0);
		dst02: out std_logic_vector(6 downto 0);
		dst03: out std_logic_vector(6 downto 0);
		dst04: out std_logic_vector(6 downto 0);
		dst05: out std_logic_vector(6 downto 0)
	);
end entity;

architecture behavioral of dmux673 is
begin
	process(sel,src)
	begin
		if sel="000" then dst00 <= src;	else
		if sel="001" then dst01 <= src; else
		if sel="010" then dst02 <= src;	else
		if sel="011" then dst03 <= src; else
		if sel="100" then dst04 <= src; else
		if sel="101" then dst05 <= src;
		end if;end if;end if;end if;end if;end if;
	end process;
end architecture;