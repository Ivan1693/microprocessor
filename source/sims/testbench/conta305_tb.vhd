library ieee;
use ieee.std_logic_1164.all;
use work.basic_devs.conta305; -- Incluímos el componente desde basic_devs

entity conta305_tb is -- Caja cerrada
end entity;

architecture conta305_test of conta305_tb is
	signal clk: std_logic:='0'; -- Señal de reloj
	signal out_cont: std_logic_vector(2 downto 0); -- Señal a conectar a la salida del contador
begin
	clk <= not(clk) after 1 ns; -- Simulamos un ciclo de reloj de 2 ns
	conta305_block: conta305 port map(clk, out_cont); -- Instanciamos el contador
end architecture;