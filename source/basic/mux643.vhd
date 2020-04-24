library ieee;
use ieee.std_logic_1164.all;

entity mux643 is
	port(
		sel: in std_logic_vector(2 downto 0);
		src00: in std_logic_vector(3 downto 0);
		src01: in std_logic_vector(3 downto 0);
		src02: in std_logic_vector(3 downto 0);
		src03: in std_logic_vector(3 downto 0);
		src04: in std_logic_vector(3 downto 0);
		src05: in std_logic_vector(3 downto 0);
		dst: out std_logic_vector(3 downto 0)
	);
end entity;

architecture behavioral of mux643 is
begin
	process(sel,src00,src01,src02,src03,src04,src05)
	begin
		if sel="000" then dst <= src00;	else
		if sel="001" then dst <= src01; else
		if sel="010" then dst <= src02;	else
		if sel="011" then dst <= src03; else
		if sel="100" then dst <= src04; else
		if sel="101" then dst <= src05;
		end if;end if;end if;end if;end if;end if;
	end process;
end architecture;