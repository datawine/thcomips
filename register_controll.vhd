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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity register_controll is
	Port(
		clk: in std_logic;
		pc_in : in std_logic_vector(15 downto 0);
		A_addr, B_addr, write_addr: in std_logic_vector(3 downto 0);
		write_content : in std_logic_vector(15 downto 0);
		
		R6_out : out std_logic_vector(15 downto 0);
		A, B : out std_logic_vector(15 downto 0)
	);
end register_controll;

architecture Behavioral of register_controll is
	signal R0, R1, R2, R3, R4, R5, R6, R7, T, SP, PC, IH: std_logic_vector(15 downto 0) := "0000000000000000";
	signal num1 : std_logic_vector(15 downto 0) := "0000000000000001";
begin

	R6_out <= R7;

	write_ram: process(clk) is
	begin
		if (clk'event and clk = '0') then
			case write_addr is
				when "0000" =>
					R0 <= write_content;
				when "0001" =>
					R1 <= write_content;
				when "0010" =>
					R2 <= write_content;
				when "0011" =>
					R3 <= write_content;
				when "0100" =>
					R4 <= write_content;
				when "0101" =>
					R5 <= write_content;
				when "0110" =>
					R6 <= write_content;
				when "0111" =>
					R7 <= write_content;
				when "1000" =>
					SP <= write_content;
				when "1001" =>
					T <= write_content;
				when "1010" =>
					IH <= write_content;
				when others =>
			end case;
		end if;
	end process;

	PC <= pc_in + num1;

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
			
end Behavioral;

