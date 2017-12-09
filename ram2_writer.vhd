----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    05:57:14 12/09/2017 
-- Design Name: 
-- Module Name:    ram2_writer - Behavioral 
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
use IEEE.std_logic_arith.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;






entity ram2_writer is
    port
    (
        CLK             : in std_logic;
        write_signal    : in std_logic;
        offset          : in std_logic_vector(15 downto 0);
        code            : in std_logic_vector(15 downto 0);
        
        ram2_write_flag : out std_logic;
        ram2_write_addr : out std_logic_vector(17 downto 0);
        ram2_write_data : out std_logic_vector(15 downto 0)
    );
end ram2_writer;






architecture Behavioral of ram2_writer is
    signal tmp_flag : std_logic := '0';
    signal tmp_addr : integer range 0 to 2399 := 0;
    signal tmp_data : std_logic_vector(15 downto 0) := (others => '0');
----------------------------------------------------------------------------------
begin
----------------------------------------------------------------------------------
    ram2_write_flag <= tmp_flag;
    ram2_write_addr <= conv_std_logic_vector(tmp_addr, 18);
    ram2_write_data <= tmp_data;
----------------------------------------------------------------------------------
    process (CLK)
    begin
        if (rising_edge(CLK)) then
            if (write_signal = '1') then
                tmp_addr <= conv_integer(unsigned(offset));
                tmp_data <= code;
                tmp_flag <= '1';
            else
                tmp_flag <= '0';
            end if;
        end if;
    end process;
end Behavioral;

