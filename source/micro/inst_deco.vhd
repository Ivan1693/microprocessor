library ieee;
use ieee.std_logic_1164.all;

entity inst_deco is
    port ( 
     inst : in  std_logic_vector (15 downto 0);
	 A : out  std_logic_vector (4 downto 0);
	 B : out  std_logic_vector (4 downto 0);
	 inst_out : out  std_logic_vector (4 downto 0);
	 PC : out  std_logic_vector (4 downto 0);
	 PC_in_enable : out std_logic);
end entity;

architecture behavioral of inst_deco is
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
	PC_in_enable <= inst(15);
end architecture;

