library ieee;
use ieee.std_logic_1164.all;

entity inst_deco is
    port ( 
    	
     inst : in  std_logic_vector (15 downto 0);
	 a : out  std_logic_vector (4 downto 0);
	 b : out  std_logic_vector (4 downto 0);
	 inst_out : out  std_logic_vector (4 downto 0);
	 pc : out  std_logic_vector (4 downto 0);
	 pc_in_enable : out std_logic
	 );
end entity;

architecture behavioral of inst_deco is
begin
	process(inst)
		begin
		if(inst(15) = '0') then
			inst_out <= inst(14 downto 10);
			b <= inst(9 downto 5);
			a <= inst(4 downto 0);
		else
			pc <= inst(4 downto 0);
		end if;
	end process;
	pc_in_enable <= inst(15);
end architecture;

