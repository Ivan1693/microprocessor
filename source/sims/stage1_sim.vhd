library ieee;
use ieee.std_logic_1164.all;
use work.micro_devs.micro_stage1; 	-- Incluimos micro_stage1
use work.basic_devs.all;			-- contador de 0 a 3 y demultiplexor de 1 a 4 y decos


entity top_sim is
end top_sim;
 
architecture behavior of top_sim is 
 --Señales micro_stage1
	signal ideco_bus : std_logic_vector(4 downto 0); -- Instrucción
	signal clk: std_logic;
	signal gcm_a : std_logic;
	signal gcm_b : std_logic;
	signal gcm_c : std_logic;
	signal gcm_d : std_logic;

-- Datos de prueba A y 5
	signal data_a : std_logic_vector(4 downto 0):="01010";
	signal data_b : std_logic_vector(4 downto 0):="00101";
	
-- Contador para simular GCM
	signal gcm_count: std_logic_vector(1 downto 0); 

 	--Outputs del módulo
	signal cout_stage1 : std_logic;
	signal out_stage1 : std_logic_vector(4 downto 0);
 -- Buses a decodificadores
 	signal deco00:std_logic_vector(3 downto 0);
 	signal deco01:std_logic_vector(3 downto 0);
 	signal deco02:std_logic_vector(3 downto 0);
 	signal deco03:std_logic_vector(3 downto 0);
 	signal deco04:std_logic_vector(3 downto 0);	
 -- Displays de 7 segemetos	
 	signal display00: std_logic_vector(6 downto 0);
 	signal display01: std_logic_vector(6 downto 0);
 	signal display02: std_logic_vector(6 downto 0);
 	signal display03: std_logic_vector(6 downto 0);
 	signal display04: std_logic_vector(6 downto 0);
	-- Definimos el periodo de reloj
 	constant clk_period : time := 400 ps;
 
begin

-- Simulamos cambio de intrucción cada 1600 ps con el registro B como segundo operando de la ALU
	ideco_bus <= 
	 "10000" after 200 ps,
	 "10001" after 1800 ps,
	 "10010" after 3400 ps,
	 "10011" after 5000 ps,
	 "10100" after 6600 ps,
	 "10101" after 8200 ps,
	 "10110" after 9800 ps,
	 "10111" after 11400 ps,
	 "11000" after 13000 ps,
	 "11001" after 14600 ps,
	 "11010" after 16200 ps,
	 "11011" after 17800 ps,
	 "11100" after 19400 ps,
	 "11101" after 21000 ps,
	 "11110" after 22600 ps,
	 "11111" after 24200 ps;
--
	--Buses a decodificadores
	deco00 <= data_a(3) & data_a(2) & data_a(1) & data_a(0);
	deco01 <= data_b(3) & data_b(2) & data_b(1) & data_b(0);
	--Omitimos el primer bit de la instrucción que hace referencia al selector del demux de rdb_bus y acm_mag
	deco02 <= ideco_bus(3) & ideco_bus(2) & ideco_bus(1) & ideco_bus(0);
	-- Padding de 3 bits
	deco03 <= '0' & '0' & '0' & cout_stage1;
	deco04 <= out_stage1(3) & out_stage1(2) & out_stage1(1) & out_stage1(0);

	--[GCM
	-- Contador de GCM
	gcm_counter: conta203 port map(clk,gcm_count);
	-- Demultiplexor
	gcm_dmux: dmux412 port map(gcm_count,clk,gcm_a,gcm_b,gcm_c,gcm_d);
	--/GCM]

	-- Microprocessor Stage 1
	micro_stage1_block: micro_stage1 port map(ideco_bus,gcm_b,gcm_c,gcm_d,data_a,data_b,cout_stage1,out_stage1);

	data_a_deco47: deco47seg port map(deco00,display00);
	data_b_deco47: deco47seg port map(deco01,display01);
	instrcn_deco47: deco47seg port map(deco02,display02);
	co_deco47: deco47seg port map(deco03,display03);
	alu_out_deco47: deco47seg port map(deco04,display04);

	-- Proceso de reloj
	clk_process:process
	begin
	clk <= '0', '1' after clk_period/2;
	wait for clk_period;
	end process;

end architecture;
