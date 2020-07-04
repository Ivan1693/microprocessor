library ieee;
use ieee.std_logic_1164.all;
use work.micro_devs.micro_stage3;

entity micro_stage3_sim is
end micro_stage3_sim;

architecture Behavioral of micro_stage3_sim is

signal acc_port : std_logic_vector (4 downto 0);
signal instr_port : std_logic_vector (15 downto 0);
signal gcm_d_port : std_logic;
signal data_a_port : std_logic_vector (4 downto 0);
signal data_b_port : std_logic_vector (4 downto 0);
signal pc_addr_port : std_logic_vector (4 downto 0);
signal pc_enable_port : std_logic;
signal alu_instr_port : std_logic_vector (4 downto 0);

begin
	instr_port <= "1000000000011101" after 400 ps,"1100001100000000" after 800 ps,"1100000001000001" after 1200 ps,"0000000000100000" after 1600 ps,"1110000000111111" after 2000 ps;
	acc_port <= "11001" after 1600 ps;
	stage3 : micro_stage3 port map(acc_port,instr_port,gcm_d_port,data_a_port,data_b_port,pc_addr_port,pc_enable_port,alu_instr_port);
	gcm_process: process
	begin
		gcm_d_port <= '0','1' after 200 ps;
		wait for 400 ps;
	end process;
end Behavioral;

