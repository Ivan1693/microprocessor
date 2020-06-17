library ieee;
use ieee.std_logic_1164.all;
package micro_devs is
	component micro_stage1 is
	  port(
	   -- Bus temporal <- Aquí llega la instrucción desde el Decodificador de instrucción
	   ideco_bus: in std_logic_vector(4 downto 0);
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