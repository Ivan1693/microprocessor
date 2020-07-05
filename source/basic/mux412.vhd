library ieee;
use ieee.std_logic_1164.all;

entity mux412 is
	port(
		sel: in std_logic_vector(1 downto 0);
		src00: in std_logic;
		src01: in std_logic;
		src02: in std_logic;
		src03: in std_logic;
		dst: out std_logic
	);
end entity;

architecture behavioral of mux412 is
begin
	process(sel,src00,src01,src02,src03)
	begin
		if sel="00" then dst <= src00;	else
		if sel="01" then dst <= src01;	else
		if sel="10" then dst <= src02;	else
		if sel="11" then dst <= src03;	else
		end if;end if;end if;end if;
	end process;
end architecture;