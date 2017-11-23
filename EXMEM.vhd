----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    14:42:10 11/23/2017 
-- Design Name: 
-- Module Name:    EXMEM - Behavioral 
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
Library work;
use work.cpuconstant.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity EXMEM is
	Port(
		operand_type_in : in integer;
		pc_in : in std_logic_vector(15 downto 0);
		save_reg_addr_in : in std_logic_vector(15 downto 0);
		A_in, B_in, C_in : in std_logic_vector(15 downto 0);
		nop, hold : in std_logic;
		
		operand_type_out : out integer;
		pc_out : out std_logic_vector(15 downto 0);
		save_reg_addr_in : in std_logic_vector(15 downto 0);
		A_out, B_out, C_out : out std_logic_vector(15 downto 0)
	);
end EXMEM;

architecture Behavioral of EXMEM is
	signal tmp_pc, tmp_reg_addr, tmp_a, tmp_b, tmp_c : std_logic_vector(15 downto 0);
	signal tmp_op : integer;
begin
	tmp_pc <= pc_in;
	tmp_reg_addr <= save_reg_addr_in;
	tmp_c <= C_in;
	tmp_op <= operand_type_in;
	
	transmit: process(clk) is
	begin
		if (clk'event and clk = '1') then
			if (nop = '1') then
				pc_out <= unaffected;
				A_out <= unaffected;
				B_out <= unaffected;
				C_out <= unaffected;
				save_reg_addr_out <= unaffected;
				operand_type_out <= NOP_OP;
			elsif (hold = '1') then
				pc_out <= unaffected;
				A_out <= unaffected;
				B_out <= unaffected;
				C_out <= unaffected;
				save_reg_addr_out <= unaffected;
				operand_type_out <= unaffected;
			else
				pc_out <= pc_tmp;
				A_out <= tmp_a;
				B_out <= tmp_b;
				C_out <= tmp_c;
				save_reg_addr_out <= tmp_reg_addr;
				operand_type_out <= tmp_op;
			end if;
		end if;
	end process;

end Behavioral;

