library ieee;
use ieee.std_logic_1164.all;
use work.basic_devs.full_adder;

entity adder4bit is
	port (
	 a :in  std_logic_vector (3 downto 0);
	 b :in  std_logic_vector (3 downto 0);
	 ci :in  STD_LOGIC;
	 co :out  STD_LOGIC;
	 s :out  std_logic_vector (3 downto 0)
);
end entity;

architecture behavioral of adder4bit is
	signal c: std_logic_vector(2 downto 0);
begin
	adder_a: full_adder port map(a(0),b(0),ci,c(0),s(0));
	adder_b: full_adder port map(a(1),b(1),c(0),c(1),s(1));
	adder_c: full_adder port map(a(2),b(2),c(1),c(2),s(2));
	adder_d: full_adder port map(a(3),b(3),c(2),co,s(3));
end architecture;