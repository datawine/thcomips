----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    17:18:54 11/22/2017 
-- Design Name: 
-- Module Name:    IFID - Behavioral 
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

entity IFID is
	Port(
		clk: in std_logic;
		pc_in: in std_logic_vector(15 downto 0);
		hold, nop: in std_logic;
		instruction_in: in std_logic_vector(15 downto 0);
		instruction_out: out std_logic_vector(15 downto 0);
		pc_out: out std_logic_vector(15 downto 0)
	);
end IFID;

architecture Behavioral of IFID is
	signal temp_pc, temp_instruct: std_logic_vector(15 downto 0);
begin
	temp_pc <= pc_in;
	temp_instruct <= instruction_in;
	
	transmit: process(clk) is
	begin
		if (clk'event and clk = '1') then
			if (nop = '1') then
				instruction_out <= "0000100000000000";
			elsif (hold = '1') then
			else
				instruction_out <= temp_instruct;
				pc_out <= temp_pc;
			end if;
		end if;
	end process;

end Behavioral;

