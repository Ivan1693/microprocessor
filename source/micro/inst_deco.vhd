library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity inst_deco is
    Port ( inst : in  STD_LOGIC_VECTOR (15 downto 0);
           A : out  STD_LOGIC_VECTOR (4 downto 0);
           B : out  STD_LOGIC_VECTOR (4 downto 0);
           inst_out : out  STD_LOGIC_VECTOR (4 downto 0);
           PC : out  STD_LOGIC_VECTOR (4 downto 0));
end inst_deco;

architecture Behavioral of inst_deco is

begin
	process(inst)
		begin
		if(inst(15) = '0') then
			inst_out <= inst(14 downto 10);
			B <= inst(9 downto 5);
			A <= inst(4 downto 0);
		else
			PC <= inst(4 downto 0);
		end if;
	end process;
end Behavioral;

