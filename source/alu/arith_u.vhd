library ieee;
use ieee.std_logic_1164.all;
use work.alu_devs.ctrl_arith_u;
use work.basic_devs.adder4bit;

entity arith_u is
	port (
	 a: in std_logic_vector (3 downto 0);
	 b: in std_logic_vector (3 downto 0);
	 op_sel: in std_logic_vector (1 downto 0);
	 ci: in std_logic;
	 co: out std_logic;
	 s: out std_logic_vector (3 downto 0)
);
end entity;

architecture behavioral of arith_u is

	signal adder_out : std_logic_vector(3 downto 0);
	signal adder_cout : std_logic;
	signal a_prime : std_logic_vector(3 downto 0);
	signal b_prime : std_logic_vector(3 downto 0);
	signal fix: std_logic;

begin

	arithmetic_control: ctrl_arith_u port map(op_sel,ci,a,b,a_prime,b_prime,fix);
	full_4bit_adder: adder4bit port map(a_prime,b_prime,ci,adder_cout,adder_out);

	process(fix,adder_cout,adder_out)
	begin
		s <= adder_out;
		co <= fix xor adder_cout;

	end process;
end architecture;