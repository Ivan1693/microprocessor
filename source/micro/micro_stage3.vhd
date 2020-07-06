library ieee;
use ieee.std_logic_1164.all;
use work.micro_devs.control_unit;
use work.memory_devs.ram325;

entity micro_stage3 is
    Port ( acc_port : in  std_logic_vector (4 downto 0);
           instr_port : in  std_logic_vector (15 downto 0);
			  gcm_d_port : in std_logic;
			  gcm_e_port : in std_logic;
			  data_a_port : out std_logic_vector (4 downto 0);
           data_b_port : out std_logic_vector (4 downto 0);
			  pc_addr_port : out std_logic_vector (4 downto 0);
           pc_enable_port : out std_logic;
			  pc_clock_port : out std_logic;
			  alu_instr_port : out std_logic_vector (4 downto 0));
end micro_stage3;

architecture Behavioral of micro_stage3 is

signal ram_control_bus : std_logic_vector (1 downto 0);
signal ram_a_bus : std_logic_vector (4 downto 0);
signal ram_b_bus : std_logic_vector (4 downto 0);
signal ram_c_bus : std_logic_vector (4 downto 0);

begin
	cu: control_unit port map(instr_port,acc_port,gcm_d_port,gcm_e_port,pc_enable_port,pc_addr_port,pc_clock_port,alu_instr_port,ram_a_bus,ram_b_bus,ram_c_bus,ram_control_bus);
	ram: ram325 port map(ram_a_bus,ram_b_bus,ram_c_bus,data_a_port,data_b_port,ram_control_bus,gcm_d_port);
end Behavioral;
