library ieee;
use ieee.std_logic_1164.ALL;
use work.memory_devs.bank325;

entity ram325 is
    Port ( data_in_a : in  std_logic_vector (4 downto 0);
           data_in_b : in  std_logic_vector (4 downto 0);
			  data_in_c : in  std_logic_vector (9 downto 0);
           data_out_a : out  std_logic_vector (4 downto 0);
           data_out_b : out  std_logic_vector (4 downto 0);
           control : in  std_logic_vector (1 downto 0);
           gcm_d : in  std_logic);
end ram325;

architecture Behavioral of ram325 is

signal data_in_aux: std_logic_vector(4 downto 0);
signal data_in_addr: std_logic_vector(4 downto 0);
signal data_in_aux_b: std_logic_vector(4 downto 0);
signal data_in_addr_b: std_logic_vector(4 downto 0);
signal data_out_a_aux: std_logic_vector(4 downto 0);
signal data_out_a_addr: std_logic_vector(4 downto 0);
signal data_out_b_aux: std_logic_vector(4 downto 0);
signal data_out_b_addr: std_logic_vector(4 downto 0);

begin
	process(data_in_a,data_in_b,data_in_c,control,gcm_d)
		begin
		case control is
			when "00" => data_out_a_addr <= data_in_a; --Entrega los datos a y b y guarda el resultado de la operación en el acm
							 data_out_b_addr <= data_in_b;
							 data_in_addr <= "11111";
							 data_in_aux <= data_in_c(4 downto 0);
							 data_in_addr_b <= "11110";
							 data_in_aux_b <= data_in_c(9 downto 5);
			when "10" => data_in_addr <= data_in_a; --Escribe los datos de b en la direccion a
							 data_in_aux <= data_in_b;
							 data_in_addr_b <= "11110";
							 data_in_aux_b <= "00000";
			when "11" => data_in_addr <= data_in_b; -- Copia los datos de la direccion a en la direccion b
							 data_out_a_addr <= data_in_a;
							 data_in_aux <= data_out_a_aux;
							 data_in_addr_b <= "11110";
							 data_in_aux_b <= "00000";
			when others => data_in_addr <= "00000";
							 data_in_aux <= "00000";
		end case;
	end process;
	reg_grid: bank325 port map(data_in_addr,data_in_addr_b,data_out_a_addr,data_out_b_addr,data_in_aux,data_in_aux_b,data_out_a_aux,data_out_b_aux,gcm_d);
	data_out_a <= data_out_a_aux;
	data_out_b <= data_out_b_aux;
end Behavioral;


