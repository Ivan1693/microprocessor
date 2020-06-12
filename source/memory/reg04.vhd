library ieee;
use ieee.std_logic_1164.all;
use work.memory_devs.ff0;

entity reg04 is
    port (
	 enable: in  std_logic;
	 reg: in  std_logic_vector (3 downto 0);
	 out_reg: out  std_logic_vector (3 downto 0)
	);
end entity;

architecture behavioral of reg04 is
begin
	ff3_block: ff0 port map(reg(3),enable,out_reg(3));
	ff2_block: ff0 port map(reg(2),enable,out_reg(2));
	ff1_block: ff0 port map(reg(1),enable,out_reg(1));
	ff0_block: ff0 port map(reg(0),enable,out_reg(0));
end architecture;