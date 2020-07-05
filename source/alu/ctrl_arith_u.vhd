library ieee;
use ieee.std_logic_1164.all;
use work.basic_devs.comp4bit;

entity ctrl_arith_u is
	port( 
	 c: in std_logic_vector (2 downto 0);
	 ci: in std_logic;
	 a: in std_logic_vector (3 downto 0);
	 b: in std_logic_vector (3 downto 0);
	 a_prime: out std_logic_vector (3 downto 0);
	 b_prime: out std_logic_vector (3 downto 0);
	 fix_aux: out std_logic
	);
end entity;

architecture behavioral of ctrl_arith_u is
	signal is_a: std_logic;
	signal is_b: std_logic;
	signal are_equal: std_logic;
	signal flag_sel: std_logic_vector(3 downto 0);
begin
	flag_sel <= c & ci;
	comparator: comp4bit port map (a,b,is_a,is_b,are_equal);
	
	process(c,ci,b,a,is_a,is_b,are_equal,flag_sel)
	begin
	if(c(2)='0') then
		if(ci='0') then
			case c is
			when "000" =>	b_prime <= b;a_prime <= a;
			when "001" =>	b_prime <= "0000";a_prime <= a;
			when "010" =>	b_prime <= b;a_prime <= "0000";
			when "011" =>	b_prime <= "1111";a_prime <= a;fix_aux <='1';	
			when others => b_prime <= "0000";a_prime <="0000";a_prime <="0000";
			end case;
			fix_aux <= '0';
		else
			case c is
			when "000" => 	b_prime <= not a;
							a_prime <= b;
			when "001" =>	b_prime <= "0000";
							a_prime <= a;
			when "010" =>	b_prime <= b;
							a_prime <= "0000";
			when "011" =>	b_prime <= b;
							a_prime <= "1110";
					 		fix_aux <='1'; -- Al dec
			when others => b_prime <= "0000";a_prime <="0000";
			end case;
			if(c="000") then
			if(is_a='1') then
				b_prime <= not b;
				a_prime <= a;
				fix_aux <='0';
			else
				b_prime <= not a;
				a_prime <=b;
				fix_aux <='1';
			end if;
			end if;
		end if;
	else
		if flag_sel="1000" then
			case is_b is
				when '1' => b_prime <="0001";
				when others => b_prime <= "0000";
			end case;
		else 
			if flag_sel="1100" then
				case is_a is
					when '1' => b_prime <="0001";
					when others => b_prime <= "0000";
				end case;
			else
				if flag_sel="1010" then
					case are_equal is
						when '1' => b_prime <="0001";
						when others => b_prime <= "0000";
					end case;
				else
					case are_equal is
						when '1' => b_prime <="0000";
						when others => b_prime <= "0000";
					end case;				
				end if;
			end if;
		end if;
		a_prime<= "0000";
	end if;
	end process;

end architecture;