library ieee;
use ieee.std_logic_1164.all;
use work.alu_devs.ctrl_arith_u;
use work.alu_devs.operation_control;
use work.alu_devs.sign_control;
use work.basic_devs.adder4bit;

entity arith_u is
	port (
	 a: in std_logic_vector (3 downto 0);
	 b: in std_logic_vector (3 downto 0);
	 sa: in std_logic;
	 sb: in std_logic;
	 op_sel: in std_logic_vector (2 downto 0);
	 ci: in std_logic;
	 co: out std_logic;
	 sf: out std_logic;
	 s: out std_logic_vector (3 downto 0)
);
end entity;

architecture behavioral of arith_u is

	signal adder_out : std_logic_vector(3 downto 0);
	signal adder_cout : std_logic;
	signal a_prime : std_logic_vector(3 downto 0);
	signal b_prime : std_logic_vector(3 downto 0);
	signal sab : std_logic;
	signal ci_prime : std_logic;
	signal c_prime : std_logic_vector(2 downto 0);
	signal co_aux : std_logic;
	signal fix_aux : std_logic;
	signal overflow:std_logic:='0';

begin
	operation_control_instance: operation_control port map(sa,sb,op_sel,ci,c_prime,ci_prime,sab);
	arithmetic_control: ctrl_arith_u port map(c_prime,ci_prime,a,b,a_prime,b_prime,fix_aux);
	full_4bit_adder: adder4bit port map(a_prime,b_prime,ci_prime,adder_cout,adder_out);
	sign_control_instance: sign_control port map(c_prime,ci_prime,sab,sf,co_aux);



	process(fix_aux,adder_cout,adder_out,sa,op_sel)
	begin
			if (op_sel&ci)="1101" then
				s <= "000" & not(sa);
			else 
				if (op_sel&ci)="1110" then
					s <= "000" & sa;
				else
					if (op_sel&ci)="1111" then
						s <= "000" & overflow;
					else
						s <= adder_out;
						overflow <= adder_cout;
						co_aux <= fix_aux xor adder_cout;
					end if;
			end if;
		end if;
	end process;
	
	co <= adder_cout;
end architecture;