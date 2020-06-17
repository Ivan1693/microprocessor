library ieee;
use ieee.std_logic_1164.all;
use work.alu_devs.all;
use work.basic_devs.all;
use work.memory_devs.all;

entity micro_stage2 is
  port (
  	gcm_a: in std_logic;	-- Señal del RI
	gcm_e: in std_logic;	-- Señal del PC
   -- Salida de instrucción a micro:stage1
   inst_out_port: out std_logic_vector(4 downto 0);
   -- Salida de datos a micro_stage1
   data_a: out std_logic_vector(4 downto 0);
   data_b: out std_logic_vector(4 downto 0)
  );
end entity;

architecture behavioral of micro_stage2 is
	signal addr_bus: std_logic_vector(9 downto 0);
	signal pc_in_bus: std_logic_vector(9 downto 0);
	signal pc_in_enable: std_logic;
	signal rom_bus: std_logic_vector(15 downto 0);
	signal instr_bus: std_logic_vector(15 downto 0);
	signal ri_bus: std_logic_vector(15 downto 0);
begin
	
	ri: reg010 port map(gcm_a,rom_bus,instr_bus);

end architecture;