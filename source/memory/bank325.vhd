library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity bank325 is
    Port ( address_in: in  std_logic_vector (4 downto 0);
			  address_out_a: in  std_logic_vector (4 downto 0);
			  address_out_b: in  std_logic_vector (4 downto 0);
			  data_in: in  std_logic_vector (4 downto 0);
           data_out_a: out  std_logic_vector (4 downto 0);
			  data_out_b: out  std_logic_vector (4 downto 0);
           enable: in  std_logic);
end bank325;

architecture Behavioral of bank325 is

type reg_grid is array (31 downto 0) of std_logic_vector(4 downto 0);
signal memory_grid: reg_grid;

begin
	process(address_in,address_out_a,address_out_b,data_in,enable)
		begin
		if(enable = '1') then
			memory_grid(to_integer(unsigned(address_in))) <= data_in;
		end if;
	end process;
	data_out_a <= memory_grid(to_integer(unsigned(address_out_a)));
	data_out_b <= memory_grid(to_integer(unsigned(address_out_b)));
end Behavioral;

