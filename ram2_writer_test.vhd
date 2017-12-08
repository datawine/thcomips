----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:31:00 12/08/2017 
-- Design Name: 
-- Module Name:    ram2_writer_test - Behavioral 
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
use ieee.std_logic_arith.all;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity ram2_writer_test is
    port
    (
        CLK	            : in  std_logic;       
        CLK50           : in  std_logic; 
        ram2_write_flag : out std_logic;
        ram2_write_addr : out std_logic_vector(17 downto 0);
        ram2_write_data : out std_logic_vector(15 downto 0)
    );
end ram2_writer_test;

architecture Behavioral of ram2_writer_test is
    signal tmp_flag : std_logic := '0';
    signal tmp_addr : integer range 0 to 599 := 0;
    signal tmp_data : integer range 33 to 126 := 65;
----------------------------------------------------------------------------------
begin
----------------------------------------------------------------------------------
    ram2_write_flag <= tmp_flag;
    ram2_write_addr <= conv_std_logic_vector(tmp_addr, 18);
    ram2_write_data <= conv_std_logic_vector(tmp_data, 16);
----------------------------------------------------------------------------------    
    Gen_Write_Signal : process (CLK)
    begin
        if (rising_edge(CLK)) then
            if (tmp_flag = '0') then
                tmp_addr <= tmp_addr + 1;
            end if;
            
            tmp_flag <= not tmp_flag;
        end if;
    end process;
----------------------------------------------------------------------------------     
end Behavioral;

