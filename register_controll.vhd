----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:00:52 11/23/2017 
-- Design Name: 
-- Module Name:    register_controll - Behavioral 
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

entity register_controll is
	Port(
		clk : in std_logic;
		pc : in std_logic_vector(15 downto 0);
		A_addr, B_addr, write_addr, write_content: in std_logic_vector(15 downto 0);
		
		A, B : out std_logic_vector(15 downto 0)
	);
end register_controll;

architecture Behavioral of register_controll is
	signal R0, R1, R2, R3, R4, R5, R6, R7, T, SP, PC, IH: std_logic_vector(15 downto 0) := "0000000000000000";
begin
	with A_addr select
		A <=
			R0 when "0000",
			R1 when "0001",
			R2 when "0010",
			R3 when "0011",
			R4 when "0100",
			R5 when "0101",
			R6 when "0110",
			R7 when "0111",
			SP when "1000",
			T when "1001",
			IH when "1010",
			pc when "1011",
			"ZZZZZZZZZZZZZZZZ" when others;

	with B_addr select
		B <=
			R0 when "0000",
			R1 when "0001",
			R2 when "0010",
			R3 when "0011",
			R4 when "0100",
			R5 when "0101",
			R6 when "0110",
			R7 when "0111",
			SP when "1000",
			T when "1001",
			IH when "1010",
			pc when "1011",
			"ZZZZZZZZZZZZZZZZ" when others;
	
	R0 <= write_content when (write_addr = "0000") else unaffected;
	R1 <= write_content when (write_addr = "0001") else unaffected;
	R2 <= write_content when (write_addr = "0010") else unaffected;
	R3 <= write_content when (write_addr = "0011") else unaffected;
	R4 <= write_content when (write_addr = "0100") else unaffected;
	R5 <= write_content when (write_addr = "0101") else unaffected;
	R6 <= write_content when (write_addr = "0110") else unaffected;
	R7 <= write_content when (write_addr = "0111") else unaffected;
	SP <= write_content when (write_addr = "1000") else unaffected;
	T <= write_content when (write_addr = "1001") else unaffected;
	IH <= write_content when (write_addr = "1010") else unaffected;

end Behavioral;

