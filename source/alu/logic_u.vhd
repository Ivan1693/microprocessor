library ieee;
use ieee.std_logic_1164.all;
use work.basic_devs.logic_op_1bit;

entity logic_u is
	port (
	 a: in std_logic_vector (4 downto 0);
	 b: in std_logic_vector (4 downto 0);
	 op_sel: in std_logic_vector (2 downto 0);
	 ci: in STD_LOGIC;
	 s: out std_logic_vector (4 downto 0)
	);
end entity;

architecture behavioral of logic_u is
signal a_prov: std_logic_vector(4 downto 0):="01010";
signal b_prov: std_logic_vector(4 downto 0):="00001";
signal aux: std_logic;
signal s_1bit: std_logic_vector(4 downto 0);
signal s_shift: std_logic_vector(4 downto 0);
begin
	logic_unit_0 : logic_op_1bit port map(a(0),b(0),op_sel,ci,s_1bit(0));
	logic_unit_1 : logic_op_1bit port map(a(1),b(1),op_sel,ci,s_1bit(1));
	logic_unit_2 : logic_op_1bit port map(a(2),b(2),op_sel,ci,s_1bit(2));
	logic_unit_3 : logic_op_1bit port map(a(3),b(3),op_sel,ci,s_1bit(3));
	logic_unit_4 : logic_op_1bit port map(a(4),b(4),op_sel,ci,s_1bit(4));
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
	s<=s_shift;
end architecture;