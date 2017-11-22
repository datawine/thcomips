----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    23:05:49 11/21/2017 
-- Design Name: 
-- Module Name:    alu - Behavioral 
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
Library work;
use work.cpuconstant.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity alu is
	Port(
		operand: in integer;
		A, B, imm: in std_logic_vector(15 downto 0);
		C: out std_logic_vector(15 downto 0)
	);
end alu;

architecture Behavioral of alu is
	signal neql, lss: std_logic_vector(15 downto 0);
	signal s_imm: integer;
begin
	neql <= (0 => '1', others => '0') when (A /= B) else (others => '0');
	lss <= (0 => '1', others => '0') when (A < B) else (others => '0');
	s_imm <= (8) when (imm = "0000000000000000") else conv_integer(imm);

	with operand select
		C <=
			not B when NOT_OP,
			B + imm when ADDSP3_OP,
			A + imm when ADDIU_OP,
			A + imm when ADDSP_OP,
			to_stdlogicvector(to_bitvector(B) sll s_imm) when SLL_OP,
			to_stdlogicvector(to_bitvector(B) sra s_imm) when SRA_OP,
			A + imm when ADDIU3_OP,
			A and B when AND_OP,
			A or B when OR_OP,
			to_stdlogicvector(to_bitvector(B) sll conv_integer(A)) when SLLV_OP,
			A + B when ADDU_OP,
			A - B when SUBU_OP,
			neql when CMP_OP,
			lss when SLTI_OP,
			imm when LI_OP,
			A + imm when LW_OP,
			B + imm when LW_SP_OP,
			A + imm when SW_OP,
			B + imm when SW_SP_OP,
			B when MFIH_OP,
			B when MFPC_OP,
			A when MTIH_OP,
			A when MTSP_OP,
			"ZZZZZZZZZZZZZZZZ" when others;
end Behavioral;

