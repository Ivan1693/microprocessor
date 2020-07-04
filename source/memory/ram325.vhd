library ieee;
use ieee.std_logic_1164.ALL;
use work.memory_devs.bank325;

entity ram325 is
    Port ( data_in_a : in  std_logic_vector (4 downto 0);
           data_in_b : in  std_logic_vector (4 downto 0);
           data_out_a : out  std_logic_vector (4 downto 0);
           data_out_b : out  std_logic_vector (4 downto 0);
           control : in  std_logic_vector (1 downto 0);
           gcm_d : in  std_logic);
end ram325;

architecture Behavioral of ram325 is

signal data_in_aux: std_logic_vector(4 downto 0);
signal data_in_addr: std_logic_vector(4 downto 0);
signal data_out_a_aux: std_logic_vector(4 downto 0);
signal data_out_a_addr: std_logic_vector(4 downto 0);
signal data_out_b_aux: std_logic_vector(4 downto 0);
signal data_out_b_addr: std_logic_vector(4 downto 0);
signal enable: std_logic:= '0';

begin
	process(data_in_a,data_in_b,control,gcm_d)
		begin
		case control is
			when "00" => data_out_a_addr <= data_in_a;
							 data_out_b_addr <= data_in_b;
							 enable <= '0';
			when "10" => data_in_addr <= data_in_a; --Escribe los datos de b en la direccion a
							 data_in_aux <= data_in_b;
							 enable <= gcm_d;
			when "11" => data_in_addr <= data_in_b; -- Copia los datos de la direccion a en la direccion b
							 data_out_a_addr <= data_in_a;
							 data_in_aux <= data_out_a_aux;
							 enable <= gcm_d;
			when others => data_in_addr <= "00000";
							 data_in_aux <= "00000";
							 enable <= '0';
		end case;
	end process;
	reg_grid: bank325 port map(data_in_addr,data_out_a_addr,data_out_b_addr,data_in_aux,data_out_a_aux,data_out_b_aux,enable);
	data_out_a <= data_out_a_aux;
	data_out_b <= data_out_b_aux;
end Behavioral;


