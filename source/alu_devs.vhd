library ieee;
use ieee.std_logic_1164.all;
package alu_devs is
	-- ALU 16 Operaciones
	component alu_16op is
	port(
		 unit_sel : in std_logic;
		 op_sel : in std_logic_vector(1 downto 0);
		 ci : in std_logic;
		 a : in std_logic_vector(4 downto 0);
		 b : in std_logic_vector(4 downto 0);
		 --sa : in std_logic;
		 --sb : in std_logic;
		 co : out std_logic;
		 --sf : out std_logic;
		 s : out std_logic_vector(4 downto 0)
		 );
	end component;
	-- Unidad aritmética
	component arith_u is
		port (
		 	 a: in std_logic_vector (3 downto 0);
			 b: in std_logic_vector (3 downto 0);
			 sa: in std_logic;
			 sb: in std_logic;
			 op_sel: in std_logic_vector (1 downto 0);
			 ci: in std_logic;
			 co: out std_logic;
			 sf: out std_logic;
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
		 fix_aux:out std_logic
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
	-- Control de signo
	component sign_control is
		Port ( c_prime : in  STD_LOGIC_VECTOR (1 downto 0);
			  ci_prime : in  STD_LOGIC;
           SAB : in  STD_LOGIC;
           SF : out  STD_LOGIC;
           co : in  STD_LOGIC);
	end component;
	-- Control de operación
	component operation_control is
		Port ( SA : in  STD_LOGIC;
           SB : in  STD_LOGIC;
           c : in  STD_LOGIC_VECTOR (1 downto 0);
			  ci : in STD_LOGIC;
           c_prime : out  STD_LOGIC_VECTOR (1 downto 0);
			  ci_prime : out STD_LOGIC;
           SAB : out  STD_LOGIC);
	end component;
end package ; 