----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:55:00 11/23/2017 
-- Design Name: 
-- Module Name:    mem_forward - Behavioral 
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

entity mem_forward is
	Port(
		operand: in integer;
		save_register_addr: in std_logic_vector(15 downto 0);
		rx_addr, ry_addr: in std_logic_vector(15 downto 0);
		rx_mux_en, ry_mux_en: out std_logic
	);
end mem_forward;

architecture Behavioral of mem_forward is
	signal alu_has_res, write_register: std_logic;
begin

	alu_has_res <= '0' when (operand = B_OP OR operand = BEQZ_OP OR operand = BNEZ_OP OR operand = BTEQZ_OP OR operand = JR_OP or operand = BTNEZ_OP or operand = NOP_OP) else '1';
	write_register <= '0' when (alu_has_res = '0' or operand = SW_OP or operand = SW_SP_OP) else '1';

	-- 0 register?
	rx_mux_en <= '1' when (rx_addr = save_register_addr and write_register = '1') else '0';
	ry_mux_en <= '1' when (ry_addr = save_register_addr and write_register = '1') else '0';
	
end Behavioral;

