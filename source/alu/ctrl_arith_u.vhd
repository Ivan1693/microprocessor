library ieee;
use ieee.std_logic_1164.all;
use work.basic_devs.comp4bit;

entity ctrl_arith_u is
	port( 
	 c: in std_logic_vector (1 downto 0);
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
	
begin
	comparator: comp4bit port map (a,b,is_a,is_b,are_equal);
	
	process(c,ci,b,a,is_a,is_b,are_equal)
	begin
		if(ci='0') then
			case c is
				when "00" => b_prime <= b;
				when "01" => b_prime <= "0000";
				when "10" => b_prime <= b;
				when "11" => b_prime <= "1111";
				when others => b_prime <= "0000";
			end case;
			fix_aux <= '0';
		else
			case c is
				when "00" => b_prime <= not a;
				when "01" => b_prime <= "0000";
				when "10" => b_prime <= b;
				when "11" => b_prime <= b;
							 fix_aux <='1'; -- Al dec
				when others => b_prime <= "0000";
			end case;
			if(c="00") then
				if(is_a='1') then
					b_prime <= not b;
					fix_aux <='0';
				else
					b_prime <= not a;
					fix_aux <='1';
				end if;
			end if;
		end if;

		if(ci='0') then
			case c is
				when "00" => a_prime <= a;
				when "01" => a_prime <= a;
				when "10" => a_prime <= "0000";
				when "11" => a_prime <= a;
							 fix_aux <='1';
				when others => b_prime <= "0000";
			end case;
		else
			case c is
				when "00" => a_prime <= b;
				when "01" => a_prime <= a;
				when "10" => a_prime <= "0000";
				when "11" => a_prime <= "1110";
				when others => b_prime <= "0000";
			end case;
			if(c="00") then
				if(is_a='1') then
					a_prime <= a;
				else
					a_prime <=b;
				end if;
			end if;
		end if;
	end process;
end architecture;