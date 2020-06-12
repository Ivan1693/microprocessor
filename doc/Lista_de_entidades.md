# Anexo A: Lista de entidades

### ALU
##### ALU 16 Operaciones

```vhdl
entity alu_16op is
	port(
	 unit_sel : in std_logic;
	 op_sel : in std_logic_vector(1 downto 0);
	 ci : in std_logic;
	 a : in std_logic_vector(3 downto 0);
	 b : in std_logic_vector(3 downto 0);
	 co : out std_logic;
	 s : out std_logic_vector(3 downto 0)
	 );
end entity;
```

##### Unidad aritmética
```vhdl
entity arith_u is
	port (
	 a: in std_logic_vector (3 downto 0);
	 b: in std_logic_vector (3 downto 0);
	 op_sel: in std_logic_vector (1 downto 0);
	 ci: in std_logic;
	 co: out std_logic;
	 s: out std_logic_vector (3 downto 0)
);
end entity;
```

##### Control de unidad aritmética
```vhdl
entity ctrl_arith_u is
	port( 
	 c:in  std_logic_vector (1 downto 0);
	 ci:in  std_logic;
	 a:in  std_logic_vector (3 downto 0);
	 b:in  std_logic_vector (3 downto 0);
	 a_prime:out  std_logic_vector (3 downto 0);
	 b_prime:out  std_logic_vector (3 downto 0);
	 fix:out std_logic 
	);
end entity;
```

##### Unidad lógica
```vhdl
entity logic_u is
	port (
	 a: in std_logic_vector (3 downto 0);
	 b: in std_logic_vector (3 downto 0);
	 op_sel: in std_logic_vector (1 downto 0);
	 ci: in std_logic;
	 s: out std_logic_vector (3 downto 0)
	);
end entity;
```



### Dispositivos básicos

##### Sumador 4 bits
```vhdl
entity adder4bit is
	port (
	 a :in  std_logic_vector (3 downto 0);
	 b :in  std_logic_vector (3 downto 0);
	 ci :in  std_logic;
	 co :out  std_logic;
	 s :out  std_logic_vector (3 downto 0)
);
end entity;
```

##### Sumador completo
```vhdl
entity full_adder
	port(
	 a: in std_logic;
	 b: in std_logic;
	 ci: in std_logic;
	 co: out std_logic;
	 s: out std_logic	
);
end entity;
```

##### Comparador 4 bits
```vhdl
entity comp4bit is
	port(
	 a:in  std_logic_vector (3 downto 0);
	 b:in  std_logic_vector (3 downto 0);
	 is_a:out  std_logic;
	 is_b:out  std_logic;
	 are_equal:out  std_logic
);
end entity;
```

##### Comparador 2 bits
```vhdl
entity comp2bit is
	port(
	 a :in  std_logic_vector (1 downto 0);
	 b :in  std_logic_vector (1 downto 0);
	 is_a :out  std_logic;
	 is_b: out  std_logic;
	 are_equal:out  std_logic
);
end entity;
```

##### Operador lógico 1 bit
```vhdl
entity logic_op_1bit is
	port(
	 a : in std_logic;
	 b : in std_logic;
	 c : in std_logic_vector (1 downto 0);
	 ci : in std_logic;
	 s : out std_logic);
end entity;
```

##### Contador 3 bits 0 a 3
```vhdl
entity conta203 is
	port (
	 clk: in std_logic;
	 count: out std_logic_vector(1 downto 0)
  );
end entity;
```

##### Contador 3 bits 0 a 5
```vhdl
entity conta305 is
	port (
	 clk: in std_logic;
	 count: out std_logic_vector(2 downto 0)
  );
end entity;
```

##### Contador 4 bits 0 a 15
```vhdl
entity conta40F is
	port (
	 clk: in std_logic;
	 count: out std_logic_vector(3 downto 0)
  );
end entity;
```

##### Multiplexor 2 a 1 de 4 bits
```vhdl
entity mux241 is
	port(
	 sel: in std_logic;
	 src00: in std_logic_vector(3 downto 0);
	 src01: in std_logic_vector(3 downto 0);
	 dst: out std_logic_vector(3 downto 0)
	);
end entity;
```

##### Multiplexor 6 a 1 de 4 bits
```vhdl
entity mux643 is
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
end entity;
```

##### Demultiplexor 1 a 6 de 7 bits 
```vhdl
entity dmux673 is
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
end entity;
```

##### Demultiplexor 1 a 4 de 1 bit

```vhdl
entity dmux412 is
  port (
	sel: in std_logic_vector(1 downto 0);
	src: in std_logic;
	dst00: out std_logic;
	dst01: out std_logic;
	dst02: out std_logic;
	dst03: out std_logic
  );
end entity; 
```

##### Decodificador 4 bits a display 7 segmentos anodo

```vhdl
entity deco47seg is
	port (
	 data_in: in std_logic_vector(3 downto 0);
	 display: out std_logic_vector(6 downto 0)
  );
end entity;
```



### Dispositivos de memoria

##### Banco de registros de 2x4
```vhdl
entity bank241 is
	port(
	 enable: in std_logic_vector(1 downto 0);
	 reg00: in std_logic_vector(3 downto 0);
	 reg01: in std_logic_vector(3 downto 0);
	 out00: out std_logic_vector(3 downto 0);
	 out01: out std_logic_vector(3 downto 0) 
	);
end entity;
```

##### Registro 5 bits

```vhdl
entity reg05 is
    port(
	 enable: in  std_logic;
	 reg: in  std_logic_vector (4 downto 0);
	 out_reg: out  std_logic_vector (4 downto 0)
	);
end entity;
```

##### Registro 4 bits

```vhdl
entity reg04 is
    port(
	 enable: in  std_logic;
	 reg: in  std_logic_vector (3 downto 0);
	 out_reg: out  std_logic_vector (3 downto 0)
	);
end entity;
```

##### Flip-flop D

```vhdl
entity ff0 is
   	port(
     d: in std_logic;
     enable: in  std_logic;
	 q: out  std_logic
);
end entity;
```



### Módulos del microprocesador

##### Stage 1
```vhdl
entity micro_stage1 is
  port(
   ideco_bus: in std_logic_vector(4 downto 0);
   gcm_b: in std_logic;	-- Señal del RD
   gcm_c: in std_logic;	-- Señal del ACC
   gcm_d: in std_logic;	-- Señal del ACM   
   data_a: in std_logic_vector(3 downto 0);
   data_b: in std_logic_vector(3 downto 0);
   cout_stage1: out std_logic;
   out_stage1: out std_logic_vector(3 downto 0)
  );
end entity;
```
