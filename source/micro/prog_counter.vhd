library ieee;
use ieee.std_logic_1164.all;
use ieee.numeric_std.all;

entity prog_counter is port (
    
    in_reg_pc: in std_logic_vector(4 downto 0);
    out_reg_pc: out std_logic_vector(4 downto 0);
    in_enable: in std_logic;
    clk: in std_logic);

end entity;

architecture behavioral of prog_counter is 

signal q_tmp: std_logic_vector(4 downto 0):="00000";

begin
    process(clk)
    begin
        if clk='1' then
            if(q_tmp = "11111") then
                q_tmp <= "00000";
            else
                q_tmp(0)<=not (q_tmp(0));
                if q_tmp(0)='1' then
                    q_tmp(1)<=not(q_tmp(1));
                    if q_tmp(1)='1' then
                        q_tmp(2)<=not(q_tmp(2));
                        if q_tmp(2)='1' then
                            q_tmp(3)<=not(q_tmp(3));
                            if q_tmp(3)='1' then
                                q_tmp(4)<=not(q_tmp(4));
                            end if;
                        end if;     
                    end if;     
                end if;
            end if;
            if in_enable='0' then
                out_reg_pc<=q_tmp;
            else
                    out_reg_pc<=in_reg_pc;
                    q_tmp<=in_reg_pc;
            end if;
        end if;
    end process;
end architecture;
