library ieee;
use ieee.std_logic_1164.all;

package memory_devs is
	-- Banco de registros de 2x4
	component bank241 is
		port(
		 enable: in std_logic_vector(1 downto 0);
		 reg00: in std_logic_vector(3 downto 0);
		 reg01: in std_logic_vector(3 downto 0);
		 out00: out std_logic_vector(3 downto 0);
		 out01: out std_logic_vector(3 downto 0) 
		);
	end component;
	-- Banco de registros de 2x5
	component bank251 is
		port(
		 enable: in std_logic_vector(1 downto 0);
		 reg00: in std_logic_vector(4 downto 0);
		 reg01: in std_logic_vector(4 downto 0);
		 out00: out std_logic_vector(4 downto 0);
		 out01: out std_logic_vector(4 downto 0) 
		);
	end component;
	--Registro 16 bits
	component reg010 is
	    port (
		 enable: in  std_logic;
		 reg: in  std_logic_vector (15 downto 0);
		 out_reg: out  std_logic_vector (15 downto 0)
		);
	end component;
	--Registro 5 bits
	component reg05 is
	    port(
		 enable: in  std_logic;
		 reg: in  std_logic_vector (4 downto 0);
		 out_reg: out  std_logic_vector (4 downto 0)
		);
	end component;
	--Registro 4 bits
	component reg04 is
	    port(
		 enable: in  std_logic;
		 reg: in  std_logic_vector (3 downto 0);
		 out_reg: out  std_logic_vector (3 downto 0)
		);
	end component;
	--Flip-flop D
	component ff0 is
    	port(
	     d: in std_logic;
	     enable: in  std_logic;
		 q: out  std_logic
	);
	end component;
end package ; 