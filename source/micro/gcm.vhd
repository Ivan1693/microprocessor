library ieee;
use ieee.std_logic_1164.all;
use work.basic_devs.all;

entity gcm is
  port (
  	oscilator: in std_logic;
  	gcm_a: out std_logic;
  	gcm_b: out std_logic;
  	gcm_c: out std_logic;
  	gcm_d: out std_logic;
  	gcm_e: out std_logic

  );
end entity;

architecture behavioral of gcm is
  	signal gcm_count: std_logic_vector(4 downto 0):="00001";

begin
  
  process(oscilator)
  begin  
    if(oscilator='1') then
      if(oscilator'event) then
        case gcm_count is
          when "00001" => gcm_count <= "00010";
          when "00010" => gcm_count <= "00100";
          when "00100" => gcm_count <= "01000";
          when "01000" => gcm_count <= "10000";
          when "10000" => gcm_count <= "00001";
          when others => gcm_count <= "00001";
        end case;
      end if;      
      gcm_a <= gcm_count(0);
      gcm_b <= gcm_count(1);
      gcm_c <= gcm_count(2);
      gcm_d <= gcm_count(3);
      gcm_e <= gcm_count(4);    
    else
      gcm_a <= '0';
      gcm_b <= '0';
      gcm_c <= '0';
      gcm_d <= '0';
      gcm_e <= '0';
    end if;
  end process;
end architecture;