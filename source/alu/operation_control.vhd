library ieee;
use ieee.std_logic_1164.all;

entity operation_control is
    port(
	 SA : in  STD_LOGIC;
	 SB : in  STD_LOGIC;
	 c : in  STD_LOGIC_VECTOR (2 downto 0);
	 ci : in STD_LOGIC;
	 c_prime : out  STD_LOGIC_VECTOR (2 downto 0);
 	 ci_prime : out STD_LOGIC;
	 SAB : out  STD_LOGIC
	 );
end operation_control;

architecture behavioral of operation_control is

begin
	process(c,SA,SB,ci)
		begin
			case c is
				when "000" => c_prime <= c;
								 ci_prime <= ci xor SA xor SB;
								 SAB <= SB;
				when "001" => c_prime(1) <= ci and SA;
								 c_prime(0) <= '1';
								 ci_prime <= ci and (not SA);
								 SAB <= SA;
				when "010" => c_prime(1) <= '1';
								 c_prime(0) <= ci and SB;
								 ci_prime <= ci;
								 SAB <= SB;
				when "011" => c_prime(1) <= ((not ci) and (not SA)) or ci;
								 c_prime(0) <= (not ci) or (ci and (not SB));
								 ci_prime <= ci or ((not ci) and SA);
								 SAB <= ((not ci) and SA) or (ci and SB);
				when others => c_prime <= "000";
									ci_prime <= '0';
									SAB <= '0';
			end case;
	end process;
end behavioral;

