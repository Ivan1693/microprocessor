library ieee;
use ieee.std_logic_1164.all;
use work.micro_devs.gcm;

entity gcm_sim is
end entity;

architecture behavioral of gcm_sim is
	signal oscilator: std_logic:='1';
	signal gcm_a: std_logic;
	signal gcm_b: std_logic;
	signal gcm_c: std_logic;
	signal gcm_d: std_logic;
	signal gcm_e: std_logic;
begin
	oscilator <= not(oscilator) after 400 ns;
	gcm_block: gcm port map(oscilator,gcm_a,gcm_b,gcm_c,gcm_d,gcm_e);
end architecture;