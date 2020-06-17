library ieee;
use ieee.std_logic_1164.all;
use work.micro_devs.all;

entity inst_deco_tb is
end entity;

architecture inst_deco_tb of inst_deco_tb is
	signal inst : in  std_logic_vector (15 downto 0);
	signal A : std_logic_vector (4 downto 0);
	signal B : std_logic_vector (4 downto 0);
	signal inst_out : std_logic_vector (4 downto 0);
	signal PC : std_logic_vector (4 downto 0);
	signal PC_in_enable :std_logic);
begin
	inst <= 
		"000000000000000" after 0 ps,
		"000000000011111" after 20 ps;


	deco: inst_deco port map (
		inst,
		A,
		B,
		inst_out,
		PC,
		PC_in_enable
		);

end architecture;