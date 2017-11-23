----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    21:23:37 11/21/2017 
-- Design Name: 
-- Module Name:    mux_2 - Behavioral 
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

entity mux_2 is
	Port(
		mux_EN: in std_logic;
		src_1: in std_logic_vector(15 downto 0);
		src_2: in std_logic_vector(15 downto 0);
		output: out std_logic_vector(15 downto 0)
	);
end mux_2;

architecture Behavioral of mux_2 is

begin

	with mux_EN select
		output <= 
			src_1 when '0',
			src_2 when '1',
			"ZZZZZZZZZZZZZZZZ" when others;

end Behavioral;

