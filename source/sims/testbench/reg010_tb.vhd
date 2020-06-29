library ieee;
use ieee.std_logic_1164.all;
use work.memory_devs.reg010;

entity reg010_sim is
end entity;

architecture reg010_sim of reg010_sim is
	signal enable: std_logic:='0';
	signal reg:  std_logic_vector (15 downto 0);
	signal out_reg:  std_logic_vector (15 downto 0);

begin
	enable <= not (enable) after 2 ns;
	reg <= 
		"0000000000000000" after 0 ns,
		"0000000100000000" after 10 ns;

	reg010_bloc: reg010 port map(
		enable,
		reg,
		out_reg
		);

end architecture ; -- reg010