----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    13:52:36 11/23/2017 
-- Design Name: 
-- Module Name:    IDEX - Behavioral 
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

entity IDEX is
	Port(
		clk : in std_logic;
		operand_type_in : in integer;
		save_reg_addr_in : in std_logic_vector(15 downto 0);
		A_in, B_in, imm_in, pc_in : in std_logic_vector(15 downto 0);
		nop, hold : in std_logic;
		
		operand_type_out : out integer;
		save_reg_addr_out : out std_logic_vector(15 downto 0);
		A_out, B_out, imm_out, pc_out : out std_logic_vector(15 downto 0)
	);
end IDEX;

architecture Behavioral of IDEX is
	signal A_tmp, B_tmp, imm_tmp, save_tmp, pc_tmp : std_logic_vector(15 downto 0);
	signal op_tmp : integer;
begin
	pc_tmp <= pc_in;
	A_tmp <= A_in;
	B_tmp <= B_in;
	imm_tmp <= imm_in;
	save_tmp <= save_reg_addr_in;
	op_tmp <= operand_type_in;
	
	transmit: process(clk) is
	begin
		if (clk'event and clk = '1') then
			if (nop = '1') then
				operand_type_out <= NOP_OP;
			elsif (hold = '1') then
			else
				pc_out <= pc_tmp;
				A_out <= A_tmp;
				B_out <= B_tmp;
				imm_out <= imm_tmp;
				save_reg_addr_out <= save_tmp;
				operand_type_out <= op_tmp;
			end if;
		end if;
	end process;

end Behavioral;

