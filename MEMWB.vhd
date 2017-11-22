----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:12:05 11/23/2017 
-- Design Name: 
-- Module Name:    MEMWB - Behavioral 
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

entity MEMWB is
	Port(
		clk, nop, hold : in std_logic;
		pc_in, DM_in, save_register_addr_in : in std_logic_vector(15 downto 0);
		pc_out, DM_out, save_register_addr_out : out std_logic_vector(15 downto 0)
	);
end MEMWB;

architecture Behavioral of MEMWB is
	signal tmp_pc, tmp_dm, tmp_addr : std_logic_vector(15 downto 0);
begin
	tmp_dm <= DM_in;
	tmp_addr <= save_register_addr_in;
	tmp_pc <= pc_in;

	transmit: process(clk) is
	begin
		if (clk'event and clk = '1') then
			if (nop = '1' or hold = '1') then
			else
				pc_out <= tmp_pc;
				DM_out <= tmp_dm;
				save_register_addr_out <= tmp_addr;
			end if;
		end if;
	end process;
	
end Behavioral;

