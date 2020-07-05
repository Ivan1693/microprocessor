library ieee;
use ieee.std_logic_1164.all;

entity mux512 is
	port(
		sel: in std_logic_vector(2 downto 0);
		src00: in std_logic;
		src01: in std_logic;
		src02: in std_logic;
		src03: in std_logic;
		src04: in std_logic;
		dst: out std_logic
	);
end entity;

architecture behavioral of mux512 is
begin
	process(sel,src00,src01,src02,src03,src04)
	begin
		if sel="000" then dst <= src00;	else
		if sel="001" then dst <= src01;	else
		if sel="010" then dst <= src02;	else
		if sel="011" then dst <= src03;	else
		if sel="100" then dst <= src04;	else
		end if;end if;end if;end if;end if;
	end process;
end architecture;