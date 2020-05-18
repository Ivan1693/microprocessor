library ieee;
use ieee.std_logic_1164.all;

package basic_devs is
	-- Sumador 4 bits
	component adder4bit is
		port (
		 a :in  std_logic_vector (3 downto 0);
		 b :in  std_logic_vector (3 downto 0);
		 ci :in  std_logic;
		 co :out  std_logic;
		 s :out  std_logic_vector (3 downto 0)
	);
	end component;
	-- Sumador completo
	component full_adder
		port(
		 a: in std_logic;
		 b: in std_logic;
		 ci: in std_logic;
		 co: out std_logic;
		 s: out std_logic	
	);
	end component;
	-- Comparador 4 bits
	component comp4bit is
		port(
		 a:in  std_logic_vector (3 downto 0);
		 b:in  std_logic_vector (3 downto 0);
		 is_a:out  std_logic;
		 is_b:out  std_logic;
		 are_equal:out  std_logic
	);
	end component;
	-- Comparador 2 bits
	component comp2bit is
		port(
		 a :in  std_logic_vector (1 downto 0);
		 b :in  std_logic_vector (1 downto 0);
		 is_a :out  std_logic;
		 is_b: out  std_logic;
		 are_equal:out  std_logic
	);
	end component;
	-- Operador lógico 1 bit
	component logic_op_1bit is
		port(
		 a : in std_logic;
		 b : in std_logic;
		 c : in std_logic_vector (1 downto 0);
		 ci : in std_logic;
		 s : out std_logic);
	end component;
	-- Contador 3 bits 0 a 3
	component conta203 is
		port (
		 clk: in std_logic;
		 count: out std_logic_vector(1 downto 0)
	  );
	end component;
	-- Contador 3 bits 0 a 4
	component conta304 is
		port (
		 clk: in std_logic;
		 count: out std_logic_vector(2 downto 0)
	  );
	end component;
	-- Contador 3 bits 0 a 5
	component conta305 is
		port (
		 clk: in std_logic;
		 count: out std_logic_vector(2 downto 0)
	  );
	end component;
	-- Contador 4 bits 0 a 15
	component conta40F is
		port(
	     clk : in std_logic;
	     reset : in std_logic;
	     count_o : out std_logic_vector(3 downto 0);
	     end_o   : out std_logic
	);
	end component;
	-- Multiplexor 2 a 1 de 4 bits
	component mux241 is
		port(
		 sel: in std_logic;
		 src00: in std_logic_vector(3 downto 0);
		 src01: in std_logic_vector(3 downto 0);
		 dst: out std_logic_vector(3 downto 0)
		);
	end component;
	-- Multiplexor 6 a 1 de 4 bits
	component mux643 is
		port(
		 sel: in std_logic_vector(2 downto 0);
		 src00: in std_logic_vector(3 downto 0);
		 src01: in std_logic_vector(3 downto 0);
		 src02: in std_logic_vector(3 downto 0);
		 src03: in std_logic_vector(3 downto 0);
		 src04: in std_logic_vector(3 downto 0);
		 src05: in std_logic_vector(3 downto 0);
 		 dst: out std_logic_vector(3 downto 0)
		);
	end component;
	-- Demultiplexor 1 a 6 de 7 bits 
	component dmux673 is
		port(
		 sel: in std_logic_vector(2 downto 0);
		 src: in std_logic_vector(6 downto 0);
		 dst00: out std_logic_vector(6 downto 0);
		 dst01: out std_logic_vector(6 downto 0);
		 dst02: out std_logic_vector(6 downto 0);
		 dst03: out std_logic_vector(6 downto 0);
		 dst04: out std_logic_vector(6 downto 0);
		 dst05: out std_logic_vector(6 downto 0)
		);
	end component;
	-- Demuliplexor 1 a 4 de 1 bit
	component dmux412 is
	  port (
		sel: in std_logic_vector(1 downto 0);
		src: in std_logic;
		dst00: out std_logic;
		dst01: out std_logic;
		dst02: out std_logic;
		dst03: out std_logic
	  );
	end component;
	component dmux513 is
	  port (
		sel: in std_logic_vector(2 downto 0);
		src: in std_logic;
		dst00: out std_logic;
		dst01: out std_logic;
		dst02: out std_logic;
		dst03: out std_logic;
		dst04: out std_logic
	  );
	end component;	
	-- Decodificador 4 bits a display 7 segmentos anodo
	component deco47seg is
		port (
		 data_in: in std_logic_vector(3 downto 0);
		 display: out std_logic_vector(6 downto 0)
	  );
	end component;
end package; 