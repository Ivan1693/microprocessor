library ieee;
use ieee.std_logic_1164.all;

entity pc is port (
	
	clk: in std_logic;
	in_reg_pc: in std_logic_vector(9 downto 0);
	in_enable: in std_logic;
	out_reg_pc: out std_logic_vector(9 downto 0));

end entity;

architecture func of pc is 

begin

	process(clk)
	begin

		if in_enable='1' then

			out_reg_pc<= in_reg_pc;

		else
			
			out_reg_pc<="0000000000";

		end if;

	end process;

end architecture;
