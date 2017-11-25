----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    22:24:05 11/21/2017 
-- Design Name: 
-- Module Name:    pc - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity pc is
	Port(
		clk: in std_logic;
		pc_in: in std_logic_vector(15 downto 0);
		pc_staller: in std_logic;
		pc_out: out std_logic_vector(15 downto 0)
	);
end pc;

architecture Behavioral of pc is
	signal pc_register: std_logic_vector(15 downto 0) := "0000000000000000";
begin
	pc_out <= pc_register;
	
	change_pc_register: process(clk) is
	begin
		if (clk'event and clk = '1') then
--			if (pc_staller = '0') then
				pc_register <= pc_in;
--			else
--				pc_register <= unaffected;
--			end if;
		end if;
	end process;

end Behavioral;

