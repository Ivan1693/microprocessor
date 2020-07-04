library ieee;
use ieee.std_logic_1164.all;

entity sign_control is
    port(
     c_prime : in  STD_LOGIC_VECTOR (2 downto 0);
	 ci_prime : in  STD_LOGIC;
	 SAB : in  STD_LOGIC;
	 SF : out  STD_LOGIC;
	 co : in  STD_LOGIC
	);
end sign_control;
architecture behavioral of sign_control is
begin
	process(c_prime,SAB,ci_prime,co)
		begin
			if(c_prime = "000") then
				SF <= ((not ci_prime) and SAB) or (ci_prime and (SAB xor co));
			else
				SF <= SAB;
			end if;
	end process;
end behavioral;

