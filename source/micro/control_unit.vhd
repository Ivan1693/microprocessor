library ieee;
use ieee.std_logic_1164.all;

entity control_unit is
    port ( 
		 instr_in : in  std_logic_vector (15 downto 0);
		 acc_in : in  std_logic_vector (4 downto 0);
		 gcm_d : in std_logic;
		 gcm_e : in std_logic;
		 pc_enable : out std_logic;
		 pc_out : out std_logic_vector (4 downto 0);
		 pc_clock : out std_logic;
		 instr_out : out std_logic_vector (4 downto 0);
		 ram_a_out : out std_logic_vector (4 downto 0);
		 ram_b_out : out std_logic_vector (4 downto 0);
		 ram_c_out : out std_logic_vector (4 downto 0);
		 ram_ctrl_out : out std_logic_vector (1 downto 0)
	 );
end entity;

architecture behavioral of control_unit is
begin
	process(instr_in,acc_in,gcm_d,gcm_e)
		begin
		if(instr_in(15) = '0') then
			instr_out <= instr_in(14 downto 10);
			ram_ctrl_out <= "00";
			ram_b_out <= instr_in(9 downto 5);
			ram_a_out <= instr_in(4 downto 0);
			ram_c_out <= acc_in;
			pc_enable <= '0';
			pc_out <= "00000";
			pc_clock <= gcm_e or (gcm_d and acc_in(0) and (not instr_in(14)) and instr_in(13));
		else
			if(instr_in(14) = '0') then
				instr_out <= "00000";
				ram_ctrl_out <= "00";
				ram_b_out <= "00000";
				ram_a_out <= "00000";
				pc_enable <= '1';
				pc_out <= instr_in(4 downto 0); 
			else
				instr_out <= "00000";
				ram_ctrl_out <= instr_in(14 downto 13);
				ram_b_out <= instr_in(9 downto 5);
				ram_a_out <= instr_in(4 downto 0);
				pc_enable <= '0';
				pc_out <= "00000";
			end if;
			pc_clock <= gcm_e;
		end if;
	end process;
end architecture;

