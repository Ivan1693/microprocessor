library ieee;
use ieee.std_logic_1164.all;
use work.micro_devs.all; 	-- Incluimos micro_stage1
use work.basic_devs.all;	-- contador de 0 a 3 y demultiplexor de 1 a 4 y decos

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

	--Puerto de salida
	signal lagartijax4_out: std_logic_vector(4 downto 0);
	signal useless_carry: std_logic;

	-- Definimos el periodo de reloj
 	constant clk_period : time := 400 ps;

begin

	gcm_block: gcm port map(clk,gcm_a,gcm_b,gcm_c,gcm_d,gcm_e);
	micro_stage1_block: micro_stage1 port map (stage_bus,gcm_b,gcm_c,gcm_d,data_a_bus,data_b_bus,useless_carry,lagartijax4_out);
	micro_stage2_block: micro_stage2 port map(gcm_a,gcm_e,stage_bus,data_a_bus,data_b_bus);


	-- Proceso de reloj
	clk_process:process
	begin
	clk <= '0', '1' after clk_period/2;
	wait for clk_period;
	end process;

end architecture;