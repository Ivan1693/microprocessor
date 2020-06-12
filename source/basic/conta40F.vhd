library IEEE;
use IEEE.std_logic_1164.all;
use ieee.numeric_std.all;

entity conta40F is
	port(
     clk : in std_logic;
     reset : in std_logic; -- Pausa el conteo con reset=1
     count_o : out std_logic_vector(3 downto 0);
     end_o   : out std_logic -- Alto cuando termina una cuenta
);
end entity;


architecture behavioral of conta40F is
    signal cuenta : integer range 0 to 15;

begin
    process(clk,reset)
    begin
    	if (reset='1') then
            cuenta <= 0;
            end_o <= '0';
        elsif(clk='1') then
            end_o <= '0';
            if(cuenta=15) then
                cuenta <= 0;
                end_o <= '1';
            else    
                cuenta <= cuenta + 1;
            end if;    
        end if;
    end process;
    --Converts from dec to 8 bits bin
    count_o <= std_logic_vector(to_unsigned(cuenta, 4));

end architecture;