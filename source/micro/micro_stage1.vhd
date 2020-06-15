library ieee;
use ieee.std_logic_1164.all;
use work.alu_devs.all;
use work.basic_devs.all;
use work.memory_devs.all;

entity micro_stage1 is
  port(
   -- Bus temporal <- Aquí llega la instrucción desde el Decodificador de instrucción
   ideco_bus: in std_logic_vector(4 downto 0);
   -- Señal del Genrador de ciclo de máquina GCM
   gcm_b: in std_logic;	-- Señal del RD
   gcm_c: in std_logic;	-- Señal del ACC
   gcm_d: in std_logic;	-- Señal del ACM
   -- Posteriorment se leera de la ROM
   data_a: in std_logic_vector(3 downto 0);
   data_b: in std_logic_vector(3 downto 0);
   -- Salida para testbench
   cout_stage1: out std_logic;
   out_stage1: out std_logic_vector(3 downto 0)
  );
end entity;

architecture behavioral of micro_stage1 is
	
	signal unit_sel: std_logic;
	signal op_sel: std_logic_vector(1 downto 0);
	signal carry_in: std_logic;
	signal carry_out: std_logic;
	signal regmux_sel: std_logic;
	signal bank_enable:std_logic_vector(1 downto 0);

	-- Buses
	signal regmux_bus: std_logic_vector(3 downto 0);
	signal alu_bus: std_logic_vector(3 downto 0);
	signal rda_bus: std_logic_vector(3 downto 0);
	signal rdb_bus: std_logic_vector(3 downto 0);
	signal acc_bus: std_logic_vector(4 downto 0);
	signal acc_inbus: std_logic_vector(4 downto 0);
	signal acm_bus: std_logic_vector(4 downto 0);
	signal acm_mag: std_logic_vector(3 downto 0);
	signal acm_carry: std_logic;

begin
	-- Segmentación de instrucción
		unit_sel <= ideco_bus(3);
		op_sel <= 	ideco_bus(2) & ideco_bus(1);
		carry_in <= ideco_bus(0);

	--Se selecciona las salidas del banco RD
		bank_enable <= gcm_b & gcm_b;
	--Se elige el segundo registro de entrada a la ALU (B o ACM)
		regmux_sel <= ideco_bus(4);
	-- Salida de ALU se cocatena para entrar a ACC
		acc_inbus <= carry_out & alu_bus;
	-- Se toma sólo la magnitud del registro en ACM
		acm_mag <= acm_bus(3) & acm_bus(2) & acm_bus(1) & acm_bus(0);
	-- Señal del acarreo de la entrada en ACM (No se usa por el momento)
		acm_carry <= acm_bus(4);
	-- Salida de micro_stage1 para decodificador de 7 segmentos
		cout_stage1 <= carry_out;
		out_stage1 <= alu_bus;

		regmux: mux241 port map(regmux_sel,acm_mag,rdb_bus,regmux_bus);
		alu: alu_16op port map(unit_sel,op_sel,carry_in,rda_bus,regmux_bus,carry_out,alu_bus);
		rd: bank241 port map(bank_enable,data_a,data_b,rda_bus,rdb_bus);
		acc: reg05 port map(gcm_c,acc_inbus,acc_bus);
		acm: reg05 port map(gcm_d,acc_bus,acm_bus);
end architecture;