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

--  conta304_block: conta304 port map(oscilator, gcm_count);
--  dmux513_block: dmux513 port map(gcm_count,oscilator,gcm_a,gcm_b,gcm_c,gcm_d,gcm_e);
--  gcm_a <= '1' after 0 ns, '0' after 1 ns, '1' after 5 ns, '0' after 6 ns, '1' after 10 ns, '0' after 11 ns, '1' after 15 ns,  '0' after 16 ns, '1' after 20 ns, '0' after 21 ns, '1' after 25 ns, '0' after 26 ns;
--  gcm_b <= '0' after 0 ns, '1' after 1 ns, '0' after 2 ns, '1' after 6 ns, '0' after 7 ns, '1' after 11 ns,  '0' after 12 ns,  '1' after 16 ns, '0' after 17 ns, '1' after 21 ns, '0' after 22 ns;
--  gcm_c <= '0' after 0 ns, '1' after 2 ns, '0' after 3 ns, '1' after 7 ns, '0' after 8 ns, '1' after 12 ns, '0' after 13 ns,  '1' after 17 ns, '0' after 18 ns, '1' after 22 ns, '0' after 23 ns;
--  gcm_d <= '0' after 0 ns, '1' after 3 ns, '0' after 4 ns, '1' after 8 ns, '0' after 9 ns, '1' after 13 ns, '0' after 14 ns,  '1' after 18 ns, '0' after 19 ns, '1' after 23 ns, '0' after 24 ns;
--  gcm_e <= '0' after 0 ns, '1' after 4 ns, '0' after 5 ns, '1' after 9 ns, '0' after 10 ns, '1' after 14 ns, '0' after 15 ns,  '1' after 19 ns, '0' after 20 ns, '1' after 24 ns, '0' after 25 ns;
