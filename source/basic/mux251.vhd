library ieee;
use ieee.std_logic_1164.all;

entity mux251 is
	port(
		sel: in std_logic;
		src00: in std_logic_vector(4 downto 0);
		src01: in std_logic_vector(4 downto 0);
		dst: out std_logic_vector(4 downto 0)
	);
end entity;

architecture behavioral of mux251 is
begin
	process(sel,src00,src01)
	begin
		if(sel='0') then
			dst <= src00;
		else
			if(sel='1') then
				dst <= src01;
			else 
			end if;
		end if;
	end process;
end architecture;