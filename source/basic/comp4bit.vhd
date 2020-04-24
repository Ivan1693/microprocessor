library ieee;
use ieee.std_logic_1164.all;
use work.basic_devs.comp2bit;

entity comp4bit is
	port(
	 a:in  std_logic_vector (3 downto 0);
	 b:in  std_logic_vector (3 downto 0);
	 is_a:out  std_logic;
	 is_b:out  std_logic;
	 are_equal:out  std_logic
	);
end entity;

architecture behavioral of comp4bit is
	signal a_msb: std_logic_vector (1 downto 0);
	signal b_msb: std_logic_vector (1 downto 0);
	signal a_lsb: std_logic_vector (1 downto 0);
	signal b_lsb: std_logic_vector (1 downto 0);

	signal a_lsbo: std_logic;
	signal b_lsbo: std_logic;
	signal e_lsbo: std_logic;

	signal a_msbo: std_logic;
	signal b_msbo: std_logic;
	signal e_msbo: std_logic;

begin
	
	a_msb(1) <= a(3);a_msb(0) <= a(2);a_lsb(1) <= a(1);a_lsb(0) <= a(0);
	b_msb(1) <= b(3);b_msb(0) <= b(2);b_lsb(1) <= b(1);b_lsb(0) <= b(0);

	msb: comp2bit port map (a_msb,b_msb,a_msbo,b_msbo,e_msbo);
	lsb: comp2bit port map (a_lsb,b_lsb,a_lsbo,b_lsbo,e_lsbo);
	
	is_a <= (a_msbo and not b_msbo) or (a_msbo and a_lsbo and not b_lsbo) or (not b_msbo and a_lsbo and not b_lsbo);
	is_b <= (not a_msbo and b_msbo) or (not a_msbo and not a_lsbo and b_lsbo) or (b_msbo and not  a_lsbo and b_lsbo);
	
	are_equal <= '1' when e_msbo='1' and e_lsbo='1' else '0';

end architecture;