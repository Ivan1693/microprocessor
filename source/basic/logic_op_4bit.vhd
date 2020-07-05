library ieee;
use ieee.std_logic_1164.all;
use work.basic_devs.logic_op_1bit;

entity logic_op_4bit is
	port(
	 a : in std_logic_vector(4 downto 0);
	 b : in std_logic_vector(4 downto 0);
	 op_sel: in std_logic_vector (2 downto 0);
	 ci: in std_logic;
	 s : out std_logic_vector(4 downto 0)
	 );
end entity;

architecture behavioral of logic_op_4bit is
begin
	logic_unit_0 : logic_op_1bit port map(a(0),b(0),op_sel,ci,s(0));
	logic_unit_1 : logic_op_1bit port map(a(1),b(1),op_sel,ci,s(1));
	logic_unit_2 : logic_op_1bit port map(a(2),b(2),op_sel,ci,s(2));
	logic_unit_3 : logic_op_1bit port map(a(3),b(3),op_sel,ci,s(3));
	logic_unit_4 : logic_op_1bit port map(a(4),b(4),op_sel,ci,s(4));
end architecture;