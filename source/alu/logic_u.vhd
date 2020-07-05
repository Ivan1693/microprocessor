library ieee;
use ieee.std_logic_1164.all;
use work.basic_devs.logic_op_4bit;
use work.basic_devs.zero_shifter;
use work.basic_devs.b_shifter4;
use work.basic_devs.b_shifter5;

entity logic_u is
	port (
	 a: in std_logic_vector (4 downto 0);
	 b: in std_logic_vector (4 downto 0);
	 op_sel: in std_logic_vector (2 downto 0);
	 ci: in std_logic;
	 s: out std_logic_vector (4 downto 0)
	);
end entity;

architecture behavioral of logic_u is
signal a_prov: std_logic_vector(4 downto 0);
signal b_prov: std_logic_vector(4 downto 0);

signal logic_gates: std_logic_vector(4 downto 0);	-- Señal de salida del operador lógico
signal zero_shift: std_logic_vector(4 downto 0);	-- Señal de salida de los corrimientos
signal signed_shift: std_logic_vector(4 downto 0);	-- Señal de salida de las rotaciones con signo
signal unsigned_shift: std_logic_vector(3 downto 0);	-- Señal de salida de las rotaciones sin signo
signal dir: std_logic; -- Dirección de las rotaciones

begin
	dir <= not(ci);

	logic_operator: logic_op_4bit port map(a,b,op_sel,ci,logic_gates);
	full_zero_shifter: zero_shifter port map(a,b,op_sel,ci,zero_shift);
	unsigned_shifter: b_shifter4 port map(dir,a(3 downto 0),b(1 downto 0),unsigned_shift);
	signed_shifter: b_shifter5 port map(dir,a,b(2 downto 0),signed_shift);

	process(op_sel,ci,logic_gates,zero_shift,signed_shift,unsigned_shift)
	begin
		if(op_sel(2)='0') then
			if(op_sel(1 downto 0)="11") then
				s <= zero_shift;
			else
				s <= logic_gates;
			end if;
		else
			if(op_sel(1 downto 0)="00") then
				s <= zero_shift;
			else
				if(op_sel(1 downto 0)="01") then
					s<= a(4) & unsigned_shift;
				else
					s <= signed_shift;
				end if;
			end if;
		end if;
	end process;
end architecture;