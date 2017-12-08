----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:11:40 12/07/2017 
-- Design Name: 
-- Module Name:    ram_2_write - Behavioral 
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

entity ram_2_write is
    port
    (
        CLK	            : in    std_logic;  -- 50MHz clock  
        ram2_mutex      : in    std_logic;
        ram2_ME         : out   std_logic := '0';
        ram2_addr       : out   std_logic_vector(17 downto 0);
        inout_ram2_data : inout std_logic_vector(15 downto 0)
    );
end ram_2_write;

architecture Behavioral of ram_2_write is

begin


end Behavioral;

