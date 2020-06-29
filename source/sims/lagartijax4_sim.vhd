library ieee;
use ieee.std_logic_1164.all;
use work.micro_devs.all;

entity lagartijax4_sim is
end entity;

architecture behavioral of lagartijax4_sim is
	signal clk: std_logic;
	 signal lagartijax4_out: std_logic_vector(4 downto 0);
	 signal adder_out: std_logic;

	-- Definimos el periodo de reloj
 	constant clk_period : time := 400 ps;

begin
	lagartijax4_block: lagartijax4 port map(clk,lagartijax4_out,adder_out);

	-- Proceso de reloj
	clk_process:process
	begin
	clk <= '0', '1' after clk_period/2;
	wait for clk_period;
	end process;

end architecture;