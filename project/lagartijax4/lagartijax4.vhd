library ieee;
use ieee.std_logic_1164.all;
use work.micro_devs.all;

entity lagartijax4 is
	port(
	 clk_in: in std_logic;
	 lagartijax4_out: out std_logic_vector(4 downto 0);
	 adder_co: out std_logic
	);
end entity;

architecture behavioral of lagartijax4 is
	signal gcm_a: std_logic;
	signal gcm_b: std_logic;
	signal gcm_c: std_logic;
	signal gcm_d: std_logic;
	signal gcm_e: std_logic;
begin
	gcm_block: gcm port map(clk_in,gcm_a,gcm_b,gcm_c,gcm_d,gcm_e);
	micro_core_block: micro_core port map(
		gcm_a,
		gcm_b,
		gcm_c,
		gcm_d,
		gcm_e,
		lagartijax4_out,
		adder_co);
end architecture;