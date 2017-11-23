----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:26:18 11/23/2017 
-- Design Name: 
-- Module Name:    mux_3 - Behavioral 
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

entity mux_3 is
	Port(
		mux1_EN, mux2_EN: in std_logic;
		src_1: in std_logic_vector(15 downto 0);
		src_2: in std_logic_vector(15 downto 0);
		src_3: in std_logic_vector(15 downto 0);
		output: out std_logic_vector(15 downto 0)
	);
end mux_3;

architecture Behavioral of mux_3 is
	signal mux_EN: std_logic_vector(1 downto 0);
begin
	-- src_1 is original
	-- src_2 is ALU
	-- src_3 is MEM
	-- mux(0) is ALU,
	-- mux(1) is MEM
	mux_EN(0) <= mux1_EN;
	mux_EN(1) <= mux2_EN;
	
	with mux_EN select
		output <= 
			src_1 when "00",
			src_2 when "10",
			src_2 when "11",
			src_3 when "01",
			"ZZZZZZZZZZZZZZZZ" when others;

end Behavioral;

