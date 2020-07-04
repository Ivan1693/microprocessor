library ieee;
use ieee.std_logic_1164.all;
use work.alu_devs.all;
use work.basic_devs.all;
use work.memory_devs.all;
use work.micro_devs.all;

entity micro_stage2 is
  port (
  	gcm_a: in std_logic;	-- Señal del RI
	gcm_e: in std_logic;	-- Señal del PC
   -- Entrada PC
	pc_addr_port: in std_logic_vector(4 downto 0);
	pc_enable_port: in std_logic;
   -- Salida de instrucción a micro:stage3
   instr_out_port: out std_logic_vector(4 downto 0);
   -- Salida de datos a micro_stage1
   data_a: out std_logic_vector(4 downto 0);
   data_b: out std_logic_vector(4 downto 0)
  );
end entity;

architecture behavioral of micro_stage2 is
	signal addr_bus: std_logic_vector(4 downto 0);
	signal rom_bus: std_logic_vector(15 downto 0);
begin
	
	ir: reg010 port map(gcm_a,rom_bus,instr_out_port);
	pc: prog_counter port map(pc_addr_port,addr_bus,pc_enable_port,gcm_e);
	rom: rom3216 port map(addr_bus,rom_bus);

end architecture;