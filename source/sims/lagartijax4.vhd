library ieee;
use ieee.std_logic_1164.all;
use work.micro_devs.all; 	-- Incluimos micro_stage1

entity lagartijax4 is
end entity;

architecture behavioral of lagartijax4 is
	signal clk: std_logic;
	signal gcm_a: std_logic;
	signal gcm_b: std_logic;
	signal gcm_c: std_logic;
	signal gcm_d: std_logic;
	signal gcm_e: std_logic;
	signal data_a_bus: std_logic_vector(4 downto 0);
	signal data_b_bus: std_logic_vector(4 downto 0);
	signal stage_bus: std_logic_vector(4 downto 0);

	 signal lagartijax4_out: std_logic_vector(4 downto 0);
	 signal useless_carry: std_logic;

	-- Definimos el periodo de reloj
 	constant clk_period : time := 400 ps;

begin
--	gcm_a <= '1' after 0 ns, '0' after 1 ns, '1' after 5 ns, '0' after 6 ns, '1' after 10 ns, '0' after 11 ns, '1' after 15 ns,  '0' after 16 ns, '1' after 20 ns, '0' after 21 ns, '1' after 25 ns, '0' after 26 ns;
--	gcm_b <= '0' after 0 ns, '1' after 1 ns, '0' after 2 ns, '1' after 6 ns, '0' after 7 ns, '1' after 11 ns,  '0' after 12 ns,  '1' after 16 ns, '0' after 17 ns, '1' after 21 ns, '0' after 22 ns;
--	gcm_c <= '0' after 0 ns, '1' after 2 ns, '0' after 3 ns, '1' after 7 ns, '0' after 8 ns, '1' after 12 ns, '0' after 13 ns,  '1' after 17 ns, '0' after 18 ns, '1' after 22 ns, '0' after 23 ns;
--	gcm_d <= '0' after 0 ns, '1' after 3 ns, '0' after 4 ns, '1' after 8 ns, '0' after 9 ns, '1' after 13 ns, '0' after 14 ns,  '1' after 18 ns, '0' after 19 ns, '1' after 23 ns, '0' after 24 ns;
--	gcm_e <= '0' after 0 ns, '1' after 4 ns, '0' after 5 ns, '1' after 9 ns, '0' after 10 ns, '1' after 14 ns, '0' after 15 ns,  '1' after 19 ns, '0' after 20 ns, '1' after 24 ns, '0' after 25 ns;

	gcm_block: gcm port map(clk,gcm_a,gcm_b,gcm_c,gcm_d,gcm_e);

	micro_core_block: micro_core port map(gcm_a,gcm_b,gcm_c,gcm_d,gcm_e,lagartijax4_out, useless_carry);
	-- Proceso de reloj
	clk_process:process
	begin
	clk <= '0', '1' after clk_period/2;
	wait for clk_period;
	end process;

end architecture;