library ieee;
use ieee.std_logic_1164.all;
package micro_devs is
	component micro_stage1 is
	  port(
	   -- Bus temporal <- Aquí llega la instrucción desde el Decodificador de instrucción
	   inst_in: in std_logic_vector(4 downto 0);
	   -- Señal del Genrador de ciclo de máquina GCM
	   gcm_b: in std_logic;	-- Señal del RD
	   gcm_c: in std_logic;	-- Señal del ACC
	   gcm_d: in std_logic;	-- Señal del ACM   
	   -- Posteriorment se leera de la ROM
	   data_a: in std_logic_vector(4 downto 0);
	   data_b: in std_logic_vector(4 downto 0);
	   -- Salida para testbench
	   cout_stage1: out std_logic;
	   out_stage1: out std_logic_vector(4 downto 0)
	  );
	end component;
	-- MicroStage2
	component micro_stage2 is
	  port (
	  	gcm_a: in std_logic;	-- Señal del RI
		gcm_e: in std_logic;	-- Señal del PC
	   -- Salida de instrucción a micro:stage1
	   inst_out_port: out std_logic_vector(4 downto 0);
	   -- Salida de datos a micro_stage1
	   data_a: out std_logic_vector(4 downto 0);
	   data_b: out std_logic_vector(4 downto 0)
	  );
	end component;
	-- Decodificador de instrucción
	component inst_deco is
	    port ( inst : in  STD_LOGIC_VECTOR (15 downto 0);
		 A : out  STD_LOGIC_VECTOR (4 downto 0);
		 B : out  STD_LOGIC_VECTOR (4 downto 0);
		 inst_out : out  STD_LOGIC_VECTOR (4 downto 0);
		 PC : out  STD_LOGIC_VECTOR (4 downto 0);
		 PC_in_enable : out STD_LOGIC);
	end component;
	-- Contador de programa
	component prog_counter is
	    port ( 
		 addr_in : in  STD_LOGIC_VECTOR (4 downto 0);
		 addr_out : out  STD_LOGIC_VECTOR (4 downto 0);
		 enable_in : in  STD_LOGIC;
		 clk : in  STD_LOGIC);
	end component;
	-- GCM
	component gcm is
	  port (
	  	oscilator: in std_logic;
	  	gcm_a: out std_logic;
	  	gcm_b: out std_logic;
	  	gcm_c: out std_logic;
	  	gcm_d: out std_logic;
	  	gcm_e: out std_logic
	  );
	end component;
end package; 