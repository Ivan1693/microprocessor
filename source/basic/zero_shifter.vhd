library ieee;
use ieee.std_logic_1164.all;

entity zero_shifter is
	port (
	 a: in std_logic_vector (4 downto 0);
	 b: in std_logic_vector (4 downto 0);
	 op_sel: in std_logic_vector (2 downto 0);
	 ci: in std_logic;
	 s: out std_logic_vector (4 downto 0)
	);
end entity;

architecture behavioral of zero_shifter is
signal a_prov: std_logic_vector(4 downto 0);
signal b_prov: std_logic_vector(4 downto 0);
signal s_shift: std_logic_vector(4 downto 0);	-- Señal de salida de los corrimientos

begin
	process(op_sel,ci,a_prov,b,s_shift)
	begin
		if (op_sel="011") then
			if (ci='0') then
				case b is
					when "00001" => a_prov(4)<=a(4);
									a_prov(3)<='0';
									a_prov(2)<=b(0) and a(3);
									a_prov(1)<=b(0) and a(2);
									a_prov(0)<=b(0) and a(1);
					when "00010" => a_prov(4)<=a(4);
									a_prov(3)<='0';
									a_prov(2)<='0';
									a_prov(1)<=b(1) and a(3);
									a_prov(0)<=b(1) and a(2);
					when "00011" => a_prov(4)<=a(4);
									a_prov(3)<='0';
									a_prov(2)<='0';
									a_prov(1)<='0';
									a_prov(0)<=b(1) and a(3);
					when others => 	a_prov(4)<=a(4);
									a_prov(3 downto 0) <= "0000";
				end case;
				s_shift<=a_prov;
			else
				case b is
					when "00001" => a_prov(4)<=a(4);
									a_prov(3)<=b(0) and a(2);
									a_prov(2)<=b(0) and a(1);
									a_prov(1)<=b(0) and a(0);
									a_prov(0)<='0';
					when "00010" => a_prov(4)<=a(4);
									a_prov(3)<=b(1) and a(1);
									a_prov(2)<=b(1) and a(0);
									a_prov(1)<='0';
									a_prov(0)<='0';
					when "00011" => a_prov(4)<=a(4);
									a_prov(3)<=b(1) and a(0);
									a_prov(2)<='0';
									a_prov(1)<='0';
									a_prov(0)<='0';
					when others => 	a_prov(4)<=a(4);
									a_prov(3 downto 0) <= "0000";
				end case;
				s_shift<=a_prov;
			end if;
		end if;
		if (op_sel="100") then
			if (ci='0') then
				case b is
					when "00001" => a_prov(4)<='0';
									a_prov(3)<=b(0) and a(4);
									a_prov(2)<=b(0) and a(3);
									a_prov(1)<=b(0) and a(2);
									a_prov(0)<=b(0) and a(1);
					when "00010" => a_prov(4)<='0';
									a_prov(3)<='0';
									a_prov(2)<=b(1) and a(4);
									a_prov(1)<=b(1) and a(3);
									a_prov(0)<=b(1) and a(2);
					when "00011" => a_prov(4)<='0';
									a_prov(3)<='0';
									a_prov(2)<='0';
									a_prov(1)<=b(1) and a(4);
									a_prov(0)<=b(1) and a(3);
					when "00100" =>	a_prov(4)<='0';
									a_prov(3)<='0';
									a_prov(2)<='0';
									a_prov(1)<='0';
									a_prov(0)<=b(2) and a(4);
					when others => a_prov<="00000";
				end case;
				s_shift<=a_prov;
			else
				case b is
					when "00001" => a_prov(4)<=b(0) and a(3);
									a_prov(3)<=b(0) and a(2);
									a_prov(2)<=b(0) and a(1);
									a_prov(1)<=b(0) and a(0);
									a_prov(0)<='0';
					when "00010" => a_prov(4)<=b(1) and a(2);
									a_prov(3)<=b(1) and a(1);
									a_prov(2)<=b(1) and a(0);
									a_prov(1)<='0';
									a_prov(0)<='0';
					when "00011" => a_prov(4)<=b(1) and a(1);
									a_prov(3)<=b(1) and a(0);
									a_prov(2)<='0';
									a_prov(1)<='0';
									a_prov(0)<='0';
					when "00100" => a_prov(4)<=b(2) and a(0);
									a_prov(3)<='0';
									a_prov(2)<='0';
									a_prov(1)<='0';
									a_prov(0)<='0';
					when others => a_prov<="00000";
				end case;
				s_shift<=a_prov;
			end if;
		end if;
	end process;
	s <= s_shift;
end architecture;