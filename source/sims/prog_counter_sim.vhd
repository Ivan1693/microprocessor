library ieee;
use ieee.std_logic_1164.all;
use work.micro_devs.all;

entity prog_counter_tb is
end entity;

architecture prog_counter_tb of prog_counter_tb is
	 signal addr_in :   STD_LOGIC_VECTOR (4 downto 0);
	 signal addr_out :   STD_LOGIC_VECTOR (4 downto 0);
	 signal enable_in :   STD_LOGIC;
	 signal clk :   STD_LOGIC;

	constant clk_period : time := 400 ps;
begin
	addr_in <= "00000";
	enable_in <= '0' after 0 ns, '1' after 100 ns;



	counter: prog_counter port map(
		addr_in,
		addr_out,
		enable_in,
		clk
	);

	clk_process:process
	begin
	clk <= '0', '1' after clk_period/2;
	wait for clk_period;
	end process;

end architecture;