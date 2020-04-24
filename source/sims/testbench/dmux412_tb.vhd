library ieee;
use ieee.std_logic_1164.all;
use work.basic_devs.dmux412;

entity dmux412_tb is
end entity;

architecture dmux412_test of dmux412_tb is
	signal sel:std_logic_vector(1 downto 0);
	signal src:std_logic:='1';
	signal dst00:std_logic;
	signal dst01:std_logic;
	signal dst02:std_logic;
	signal dst03:std_logic;
begin
	sel <= "00" after 0 ns, "01" after 2 ns, "10" after 4 ns, "11" after 6 ns, "00" after 8 ns;
	src <= not(src) after 1 ns;

	demux412_c: dmux412 port map (sel,src,dst00,dst01,dst02,dst03);

end architecture;