library ieee;
use ieee.std_logic_1164.all;
use work.micro_devs.all; 	-- Incluimos micro_stage1

entity micro_core is
	port(
	 gcm_a: in std_logic;
	 gcm_b: in std_logic;
	 gcm_c: in std_logic;
	 gcm_d: in std_logic;
	 gcm_e: in std_logic;	
	 --Puerto de salida
	 lagartijax4_out: out std_logic_vector(4 downto 0);
	 useless_carry: out std_logic
	);
end entity;

architecture behavioral of micro_core is
	signal data_a_bus: std_logic_vector(4 downto 0);
	signal data_b_bus: std_logic_vector(4 downto 0);
	signal stage_bus: std_logic_vector(4 downto 0);
begin

	micro_stage1_block: micro_stage1 port map (stage_bus,gcm_b,gcm_c,gcm_d,data_a_bus,data_b_bus,useless_carry,lagartijax4_out);
	micro_stage2_block: micro_stage2 port map(gcm_a,gcm_e,stage_bus,data_a_bus,data_b_bus);

end architecture;