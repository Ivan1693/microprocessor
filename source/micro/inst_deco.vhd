library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity inst_deco is
    Port ( inst : in  STD_LOGIC_VECTOR (15 downto 0);
           A : out  STD_LOGIC_VECTOR (4 downto 0);
           B : out  STD_LOGIC_VECTOR (4 downto 0);
			  reg_sel : out STD_LOGIC;
           unit_sel : out  STD_LOGIC;
           op_sel : out  STD_LOGIC_VECTOR (1 downto 0);
           ci : out  STD_LOGIC;
           PC : out  STD_LOGIC_VECTOR (4 downto 0));
end inst_deco;

architecture Behavioral of inst_deco is

begin
	process(inst)
		begin
		if(inst(15) = '0') then
			reg_sel <= inst(14);
			unit_sel <= inst(13);
			op_sel <= inst(12 downto 11);
			ci <= inst(10);
			B <= inst(9 downto 5);
			A <= inst(4 downto 0);
		else
			PC <= inst(4 downto 0);
		end if;
	end process;
end Behavioral;

