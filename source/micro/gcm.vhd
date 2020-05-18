library ieee;
use ieee.std_logic_1164.all;
use work.basic_devs.all;

entity gcm is
  port (
  	oscilator: in std_logic;
  	gcm_a: out std_logic;
  	gcm_b: out std_logic;
  	gcm_c: out std_logic;
  	gcm_d: out std_logic;
  	gcm_e: out std_logic

  );
end entity;

architecture behavioral of gcm is
  	signal gcm_count: std_logic_vector(2 downto 0);

begin
	conta304_block: conta304 port map(oscilator, gcm_count);
	dmux513_block: dmux513 port map(gcm_count,oscilator,gcm_a,gcm_b,gcm_c,gcm_d,gcm_e);
end architecture;