library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

entity ram_sim is
end ram_sim;

architecture Behavioral of ram_sim is

component ram325 is
    Port ( data_in_a : in  std_logic_vector (4 downto 0);
           data_in_b : in  std_logic_vector (4 downto 0);
           data_out_a : out  std_logic_vector (4 downto 0);
           data_out_b : out  std_logic_vector (4 downto 0);
           control : in  std_logic_vector (1 downto 0);
           gcm_d : in  std_logic);
end component;

signal data_in_a: std_logic_vector (4 downto 0);
signal data_in_b: std_logic_vector (4 downto 0);
signal data_out_a: std_logic_vector (4 downto 0);
signal data_out_b: std_logic_vector (4 downto 0);
signal control: std_logic_vector (1 downto 0);
signal gcm_d: std_logic;

begin
data_in_a <= "00000" after 0 ps,"00001" after 400ps,"00000" after 800 ps,"00001" after 1600 ps;
data_in_b <= "10100" after 0 ps,"00111" after 400ps,"00001" after 800 ps,"00010" after 1200 ps,"00011" after 1600 ps;
control <= "00" after 0 ps,"10" after 800 ps,"11" after 1200 ps;
ram: ram325 port map(data_in_a,data_in_b,data_out_a,data_out_b,control,gcm_d);	
gcm_process: process
	begin
	gcm_d <= '0','1' after 200 ps;
	wait for 400 ps;
end process;
end Behavioral;
