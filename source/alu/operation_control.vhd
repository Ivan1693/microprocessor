library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity operation_control is
    Port ( SA : in  STD_LOGIC;
           SB : in  STD_LOGIC;
           c : in  STD_LOGIC_VECTOR (1 downto 0);
			  ci : in STD_LOGIC;
           c_prime : out  STD_LOGIC_VECTOR (1 downto 0);
			  ci_prime : out STD_LOGIC;
           SAB : out  STD_LOGIC);
end operation_control;

architecture Behavioral of operation_control is

begin
	process(c,SA,SB,ci)
		begin
			case c is
				when "00" => c_prime <= c;
								 ci_prime <= ci xor SA xor SB;
								 SAB <= SB;
				when "01" => c_prime(1) <= ci and SA;
								 c_prime(0) <= '1';
								 ci_prime <= ci and (not SA);
								 SAB <= SA;
				when "10" => c_prime(1) <= '1';
								 c_prime(0) <= ci and SB;
								 ci_prime <= ci;
								 SAB <= SB;
				when "11" => c_prime(1) <= ((not ci) and (not SA)) or ci;
								 c_prime(0) <= (not ci) or (ci and (not SB));
								 ci_prime <= ci or ((not ci) and SA);
								 SAB <= ((not ci) and SA) or (ci and SB);
				when others => c_prime <= "00";
									ci_prime <= '0';
									SAB <= '0';
			end case;
	end process;
end Behavioral;

