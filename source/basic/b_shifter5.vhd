library ieee;
use ieee.std_logic_1164.all;
use work.basic_devs.mux512;

entity b_shifter5 is
  port (
  	dir: in std_logic;
  	value: in std_logic_vector(4 downto 0);
  	places: in std_logic_vector(2 downto 0);
  	shifted: out std_logic_vector(4 downto 0)
  );
end entity;

architecture behavioral of b_shifter5 is
	signal d4: std_logic;
	signal d3: std_logic;
	signal d2: std_logic;
	signal d1: std_logic;
	signal d0: std_logic;
	signal o4: std_logic;
	signal o3: std_logic;
	signal o2: std_logic;
	signal o1: std_logic;
	signal o0: std_logic;

begin
	-- Barrel Shifter: dir='1' right, dir='0' left
	d4 <= value(4) when dir='0' else value(0) when dir='1';
	d3 <= value(3) when dir='0' else value(1) when dir='1';
	d2 <= value(2) when dir='0' else value(2) when dir='1';
	d1 <= value(1) when dir='0' else value(3) when dir='1';
	d0 <= value(0) when dir='0' else value(4) when dir='1';

	shift_a: mux512 port map(places,d4,d3,d2,d1,d0,o4);
	shift_b: mux512 port map(places,d3,d2,d1,d0,d4,o3);
	shift_c: mux512 port map(places,d2,d1,d0,d4,d3,o2);
	shift_d: mux512 port map(places,d1,d0,d4,d3,d2,o1);
	shift_e: mux512 port map(places,d0,d4,d3,d2,d1,o0);
	process(o0,o1,o2,o3)
	begin
		if dir='0' then
			shifted <= o4 & o3 & o2 & o1 & o0;
		else
			shifted <= o0 & o1 & o2 & o3 & o4;
		end if;
	end process;
end architecture;