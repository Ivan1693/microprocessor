library ieee;
use ieee.std_logic_1164.all;
package micro_devs is
	component lagartijax4 is
		port(
		 clk_in: in std_logic;
		 lagartijax4_out: out std_logic_vector(4 downto 0);
		 adder_co: out std_logic
		);
	end component;
	component micro_stage1 is
  port(
   inst_in: in std_logic_vector(4 downto 0);
   gcm_b: in std_logic;	-- Señal del RD
   gcm_c: in std_logic;	-- Señal del ACC
   data_a: in std_logic_vector(4 downto 0);
   data_b: in std_logic_vector(4 downto 0);
   cout_stage1: out std_logic;
   out_stage1: out std_logic_vector(4 downto 0);
   acc_port: out std_logic_vector(9 downto 0)
  );
	end component;
	-- MicroStage2
	component micro_stage2 is
	  port (
		gcm_a: in std_logic;	-- Señal del RI
		-- Entrada PC
		pc_addr_port: in std_logic_vector(4 downto 0);
		pc_enable_port: in std_logic;
		pc_clock_port : in std_logic;
		-- Salida de instrucción a micro:stage3
		instr_out_port: out std_logic_vector(15 downto 0)
	  );
	end component;
	-- MicroStage3
	component micro_stage3 is
    Port ( acc_port : in  std_logic_vector (9 downto 0);
           instr_port : in  std_logic_vector (15 downto 0);
			  gcm_d_port : in std_logic;
			  gcm_e_port : in std_logic;
			  data_a_port : out std_logic_vector (4 downto 0);
           data_b_port : out std_logic_vector (4 downto 0);
			  pc_addr_port : out std_logic_vector (4 downto 0);
           pc_enable_port : out std_logic;
			  pc_clock_port : out std_logic;
			  alu_instr_port : out std_logic_vector (4 downto 0));
	end component;
	-- Unidad de control
	component control_unit is
    port ( 
		 instr_in : in  std_logic_vector (15 downto 0);
		 acc_in : in  std_logic_vector (9 downto 0);
		 gcm_d : in std_logic;
		 gcm_e : in std_logic;
		 pc_enable : out std_logic;
		 pc_out : out std_logic_vector (4 downto 0);
		 pc_clock : out std_logic;
		 instr_out : out std_logic_vector (4 downto 0);
		 ram_a_out : out std_logic_vector (4 downto 0);
		 ram_b_out : out std_logic_vector (4 downto 0);
		 ram_c_out : out std_logic_vector (9 downto 0);
		 ram_ctrl_out : out std_logic_vector (1 downto 0)
	 );
	end component;
	-- Contador de programa
	component prog_counter is
	    port ( 
	    in_reg_pc: in std_logic_vector(4 downto 0);
	    out_reg_pc: out std_logic_vector(4 downto 0);
	    in_enable: in std_logic;
	    clk: in std_logic);
	end component;
	-- GCM
	component gcm is
	  port (
	  	oscilator: in std_logic;
	  	gcm_a: out std_logic;
	  	gcm_b: out std_logic;
	  	gcm_c: out std_logic;
	  	gcm_d: out std_logic;
	  	gcm_e: out std_logic
	  );
	end component;
	--
	component micro_core is
		port(
		gcm_a: in std_logic;
		gcm_b: in std_logic;
		gcm_c: in std_logic;
		gcm_d: in std_logic;
		gcm_e: in std_logic;
		
		--Puerto de salida
		lagartijax4_out: out std_logic_vector(4 downto 0);
		useless_carry: out std_logic
		);
	end component;
end package; 