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
	-- Banco de registro de 32x5
	component bank325 is
    Port ( address_in: in  std_logic_vector (4 downto 0);
			  address_out_a: in  std_logic_vector (4 downto 0);
			  address_out_b: in  std_logic_vector (4 downto 0);
			  data_in: in  std_logic_vector (4 downto 0);
           data_out_a: out  std_logic_vector (4 downto 0);
			  data_out_b: out  std_logic_vector (4 downto 0);
           enable: in  std_logic);
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
   --ROM
	component rom3216 is
    	port(
		 address : in STD_LOGIC_VECTOR (4 downto 0);
		 data : out  STD_LOGIC_VECTOR (15 downto 0));
	end component;
	--RAM
	component ram325 is
		 Port ( data_in_a : in  std_logic_vector (4 downto 0);
				  data_in_b : in  std_logic_vector (4 downto 0);
				  data_in_c : in  std_logic_vector (4 downto 0);
				  data_out_a : out  std_logic_vector (4 downto 0);
				  data_out_b : out  std_logic_vector (4 downto 0);
				  control : in  std_logic_vector (1 downto 0);
				  gcm_d : in  std_logic);
	end component;
end package ; 