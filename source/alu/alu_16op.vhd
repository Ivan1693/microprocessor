library ieee;
use ieee.std_logic_1164.all;
use work.alu_devs.all;

entity alu_16op is
	port(
	 unit_sel : in std_logic;
	 op_sel : in std_logic_vector(2 downto 0);
	 ci : in std_logic;
	 a : in std_logic_vector(4 downto 0);
	 b : in std_logic_vector(4 downto 0);
	 co : out std_logic;
	 s : out std_logic_vector(4 downto 0)
	 );
end entity;
architecture behavioral of alu_16op is

	signal a_mag: std_logic_vector(3 downto 0);
	signal sa: std_logic;
	signal b_mag: std_logic_vector(3 downto 0);
	signal sb: std_logic;
	signal a_aux: std_logic_vector(4 downto 0);
	signal b_aux: std_logic_vector(4 downto 0);
	signal logic_unit_output: std_logic_vector(4 downto 0);
	signal arith_unit_coutput: std_logic;
	signal arith_unit_output: std_logic_vector(3 downto 0);
	signal sf: std_logic;
begin
	-- [a|b]: signo de [a|b] 
	-- [a|b]_mag: magnitud de [a|b]
	sa <= a(4);
	a_mag <= a(3 downto 0);

	sb <= b(4);
	b_mag <= b(3 downto 0);

	arithmetic_unit: arith_u port map (a_mag,b_mag,sa,sb,op_sel,ci,arith_unit_coutput,sf,arith_unit_output);
	logic_unit: logic_u port map (a,b,op_sel,ci,logic_unit_output);
	
	process(unit_sel,arith_unit_output,arith_unit_coutput,logic_unit_output,sf)
	begin
		if(unit_sel='0') then
			s <= sf & arith_unit_output;
			co <= arith_unit_coutput;
		else
			s <=  logic_unit_output;
			co <= '0';
		end if;
	end process;
end architecture;