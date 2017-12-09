----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:23:52 12/04/2017 
-- Design Name: 
-- Module Name:    Keyboard - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity keyboard is
    Port 
    ( 
        fclk        : in  std_logic;  -- 50MHz Clock
        reading     : in  std_logic;
        ps2clk      : in  std_logic;  -- Keyboard clk
        ps2data     : in  std_logic;  -- Keyboard data
        dataReady   : out std_logic_vector(15 downto 0);
        output      : out std_logic_vector(15 downto 0)
    );
end keyboard;

architecture Behavioral of keyboard is
    type Signal_State is (delay, start, s0, s1, s2, s3, s4, s5, s6, s7, parity, stop, finish);
    signal clk, clk1, clk2, fok_signal, data, odd_check : std_logic;
    signal code         : std_logic_vector(7 downto 0);
    signal prepared_out : std_logic_vector(7 downto 0);
    signal stage        : std_logic := '0';
    signal state        : Signal_State;
    
    signal keyboard_blocked : std_logic := '0';
    
    signal data_ready_inner : std_logic_vector(15 downto 0) := x"0000";
begin
    dataReady <= data_ready_inner;

    clk1 <= ps2clk when rising_edge(fclk);
    clk2 <= clk1 when rising_edge(fclk);
    clk <= (not clk1) and clk2;
    data <= ps2data when rising_edge(fclk);

    odd_check <= code(0) xor code(1) xor code(2) xor code(3) xor code(4) xor code(5) xor code(6) xor code(7);
    prepared_out <= code when fok_signal = '1';

    process (fclk)
    begin
        if rising_edge(fclk) then  
            fok_signal <= '0';
            
            if (reading = '0' and data_ready_inner = x"0001") then
                data_ready_inner <= x"0000";
            end if;
            
            case state is
                when delay =>
                    state <= start;
                when start =>
                    if clk = '1' then
                        if data = '0' then
                            state <= s0;
                        else
                            state <= delay;
                        end if;
                    end if;
                when s0 =>
                    if clk = '1' then
                        code(0) <= data;
                        state <= s1;
                    end if;
                when s1 =>
                    if clk = '1' then
                        code(1) <= data;
                        state <= s2;
                    end if;  
                when s2 =>
                    if clk = '1' then
                        code(2) <= data;
                        state <= s3;
                    end if; 
                when s3 =>
                    if clk = '1' then
                        code(3) <= data;
                        state <= s4;
                    end if; 
                when s4 =>
                    if clk = '1' then
                        code(4) <= data;
                        state <= s5;
                    end if; 
                when s5 =>
                    if clk = '1' then
                        code(5) <= data;
                        state <= s6;
                    end if; 
                when s6 =>
                    if clk = '1' then
                        code(6) <= data;
                        state <= s7;
                    end if;
                when s7 =>
                    if clk = '1' then
                        code(7) <= data;
                        state <= parity;
                    end if;            
                when parity =>
                    if clk = '1' then
                        if (data xor odd_check) = '1' then
                            state <= stop;
                        else
                            state <= delay;
                        end if;
                    end if;     
                when stop =>
                    if clk = '1' then
                        if data = '1' then
                            state <= finish;
                        else
                            state <= delay;
                        end if;
                    end if;
                when finish =>
                    state <= delay;
                    fok_signal <= '1';
                when others =>
                    state <= delay;
            end case;
            
            if prepared_out = x"F0" then
                stage <= '1';
            else
                case stage is
                    when '1' =>
                        data_ready_inner <= x"0001";
                        
                        case (prepared_out) is
                            when x"1C" => 
                                output <= x"0041";  -- A
                            when x"32" =>
                                output <= x"0042";  -- B
                            when x"21" =>
                                output <= x"0043";  -- C
                            when x"23" =>
                                output <= x"0044";  -- D
                            when x"24" =>
                                output <= x"0045";  -- E
                            when x"2B" =>
                                output <= x"0046";  -- F
                            when x"34" =>
                                output <= x"0047";  -- G
                            when x"33" =>
                                output <= x"0048";  -- H
                            when x"43" =>
                                output <= x"0049";  -- I
                            when x"3B" =>
                                output <= x"004A";  -- J
                            when x"42" =>
                                output <= x"004B";  -- K
                            when x"4B" =>
                                output <= x"004C";  -- L
                            when x"3A" =>
                                output <= x"004D";  -- M
                            when x"31" =>
                                output <= x"004E";  -- N
                            when x"44" =>
                                output <= x"004F";  -- O
                            when x"4D" =>
                                output <= x"0050";  -- P
                            when x"15" =>
                                output <= x"0051";  -- Q  
                            when x"2D" =>
                                output <= x"0052";  -- R
                            when x"1B" =>
                                output <= x"0053";  -- S
                            when x"2C" =>
                                output <= x"0054";  -- T
                            when x"3C" =>
                                output <= x"0055";  -- U
                            when x"2A" =>
                                output <= x"0056";  -- V
                            when x"1D" =>
                                output <= x"0057";  -- W
                            when x"22" =>
                                output <= x"0058";  -- X
                            when x"35" =>
                                output <= x"0059";  -- Y
                            when x"1A" =>
                                output <= x"005A";  -- Z
                            when x"45" =>
                                output <= x"0030";  -- 0
                            when x"16" =>
                                output <= x"0031";  -- 1
                            when x"1E" =>
                                output <= x"0032";  -- 2
                            when x"26" =>
                                output <= x"0033";  -- 3
                            when x"25" =>
                                output <= x"0034";  -- 4
                            when x"2E" =>
                                output <= x"0035";  -- 5
                            when x"36" =>
                                output <= x"0036";  -- 6
                            when x"3D" =>
                                output <= x"0037";  -- 7
                            when x"3E" =>
                                output <= x"0038";  -- 8
                            when x"46" =>
                                output <= x"0039";  -- 9
                            when x"4E" =>
                                output <= x"002D";  -- -
                            when x"55" =>
                                output <= x"003D";  -- =
                            when x"5D" =>
                                output <= x"005C";  -- \
                            when x"66" =>
                                output <= x"0008";  -- BACKSPACE
                            when x"29" =>
                                output <= x"0020";  -- SPACE
                            when x"0D" =>
                                output <= x"0009";  -- TAB
                            when x"5A" =>
                                output <= x"000A";  -- ENTER
                            when x"54" =>
                                output <= x"005B";  -- [
                            when x"5B" =>
                                output <= x"005D";  -- ]
                            when x"4C" =>
                                output <= x"003B";  -- ;
                            when x"52" =>
                                output <= x"0027";  -- '
                            when x"41" =>
                                output <= x"002C";  -- ,
                            when x"49" =>
                                output <= x"002E";  -- .
                            when x"4A" =>
                                output <= x"002F";  -- /
                            when others =>
                                output <= x"0000";
                        end case;
                        
                        stage <= '0';
                    when others =>
                        stage <= '0';
                end case;
            end if;
        end if;
    end process;
end Behavioral;