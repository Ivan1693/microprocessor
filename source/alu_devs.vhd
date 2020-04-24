library ieee;
use ieee.std_logic_1164.all;
package alu_devs is
	-- ALU 16 Operaciones
	component alu_16op is
		port(
		 unit_sel : in std_logic;
		 op_sel : in std_logic_vector(1 downto 0);
		 ci : in std_logic;
		 a : in std_logic_vector(3 downto 0);
		 b : in std_logic_vector(3 downto 0);
		 co : out std_logic;
		 s : out std_logic_vector(3 downto 0)
		 );
	end component;
	-- Unidad aritmética
	component arith_u is
		port (
		 a: in std_logic_vector (3 downto 0);
		 b: in std_logic_vector (3 downto 0);
		 op_sel: in std_logic_vector (1 downto 0);
		 ci: in std_logic;
		 co: out std_logic;
		 s: out std_logic_vector (3 downto 0)
	);
	end component;
	-- Control de unidad aritmética
	component ctrl_arith_u is
		port( 
		 c:in  std_logic_vector (1 downto 0);
		 ci:in  std_logic;
		 a:in  std_logic_vector (3 downto 0);
		 b:in  std_logic_vector (3 downto 0);
		 a_prime:out  std_logic_vector (3 downto 0);
		 b_prime:out  std_logic_vector (3 downto 0);
		 fix:out std_logic 
		);
	end component;
	-- Unidad lógica
	component logic_u is
		port (
		 a: in std_logic_vector (3 downto 0);
		 b: in std_logic_vector (3 downto 0);
		 op_sel: in std_logic_vector (1 downto 0);
		 ci: in std_logic;
		 s: out std_logic_vector (3 downto 0)
		);
	end component;
end package ; 