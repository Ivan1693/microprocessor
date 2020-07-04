library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity micro_stage3 is
    Port ( data_a_port : out  STD_LOGIC_VECTOR (4 downto 0);
           data_b_port : out  STD_LOGIC_VECTOR (4 downto 0);
			  pc_addr_port : out  STD_LOGIC_VECTOR (4 downto 0);
           pc_enable_port : out  STD_LOGIC;
           acc_port : in  STD_LOGIC_VECTOR (4 downto 0);
           instr_port : in  STD_LOGIC_VECTOR (15 downto 0));
end micro_stage3;

architecture Behavioral of micro_stage3 is

begin


end Behavioral;

