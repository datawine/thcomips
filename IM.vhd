----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:54:55 11/23/2017 
-- Design Name: 
-- Module Name:    IM - Behavioral 
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

entity IM is
	Port(
		pc_in: in std_logic_vector(15 downto 0);
		bus_content: in std_logic_vector(15 downto 0);
		bus_addr: out std_logic_vector(15 downto 0);
		instruction: out std_logic_vector(15 downto 0)
	);
end IM;

architecture Behavioral of IM is

begin
	get_inst: process(pc_in, bus_content) is
	begin
		bus_addr <= pc_in;
		instruction <= bus_content;
	end process;

end Behavioral;

