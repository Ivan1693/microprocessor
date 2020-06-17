library ieee;
use ieee.std_logic_1164.all;
use work.memory_devs.ff0;

entity reg010 is
    port (
	 enable: in  std_logic;
	 reg: in  std_logic_vector (15 downto 0);
	 out_reg: out  std_logic_vector (15 downto 0)
	);
end entity;

architecture behavioral of reg010 is
begin
	ff15_block: ff0 port map(reg(15),enable,out_reg(15));
	ff14_block: ff0 port map(reg(14),enable,out_reg(14));
	ff13_block: ff0 port map(reg(13),enable,out_reg(13));
	ff12_block: ff0 port map(reg(12),enable,out_reg(12));

	ff11_block: ff0 port map(reg(11),enable,out_reg(11));
	ff10_block: ff0 port map(reg(10),enable,out_reg(10));
	ff9_block: ff0 port map(reg(9),enable,out_reg(9));
	ff8_block: ff0 port map(reg(8),enable,out_reg(8));

	ff7_block: ff0 port map(reg(7),enable,out_reg(7));
	ff6_block: ff0 port map(reg(6),enable,out_reg(6));
	ff5_block: ff0 port map(reg(5),enable,out_reg(5));
	ff4_block: ff0 port map(reg(4),enable,out_reg(4));

	ff3_block: ff0 port map(reg(3),enable,out_reg(3));
	ff2_block: ff0 port map(reg(2),enable,out_reg(2));
	ff1_block: ff0 port map(reg(1),enable,out_reg(1));
	ff0_block: ff0 port map(reg(0),enable,out_reg(0));
end architecture;