library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity prog_counter is
    port ( 
	 addr_in : in  STD_LOGIC_VECTOR (4 downto 0);
	 addr_out : out  STD_LOGIC_VECTOR (4 downto 0);
	 enable_in : in  STD_LOGIC;
	 clk : in  STD_LOGIC);
end prog_counter;

architecture Behavioral of prog_counter is

signal q : std_logic_vector (4 downto 0) := "00000";

begin
	process(clk,enable_in,addr_in)
		begin
		if(enable_in = '1') then
			q <= addr_in;
		else
			if(clk'event and clk='0') then
				q(0) <= not q(0);
				q(1) <= q(1) xor q(0);
				q(2) <= q(2) xor (q(1) and q(0));
				q(3) <= q(3) xor (q(2) and q(1) and q(0));
				q(4) <= q(4) xor (q(3) and q(2) and q(1) and q(0));
			end if;
		end if;
		addr_out <= q;
	end process;
end Behavioral;


