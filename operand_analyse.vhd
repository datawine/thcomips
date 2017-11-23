----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:36:02 11/22/2017 
-- Design Name: 
-- Module Name:    operand_analyse - Behavioral 
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

entity operand_analyse is
	Port(
		instuct : in std_logic_vector(15 downto 0);
		operand : out integer;
		A_addr, B_addr, save_addr: out std_logic_vector(3 downto 0);
		imm : out std_logic_vector(15 downto 0)
	);
end operand_analyse;

architecture Behavioral of operand_analyse is
	
	signal inst_15_11: std_logic_vector(4 downto 0);
	signal inst_10_8, inst_7_5, inst_4_2: std_logic_vector(2 downto 0);
	signal inst_3_0: std_logic_vector(3 downto 0);
	signal inst_1_0: std_logic_vector(1 downto 0);
	signal inst_4_0: std_logic_vector(4 downto 0);
	signal inst_10_0: std_logic_vector(10 downto 0);
	
	signal optype_origin, optype: integer;
	signal ss_op_type, abbm_op_type, as_op_type, acjno_op_type, ms_op_type, mm_op_type: integer;
	signal tmp_imm: integer;
begin
	inst_15_11 <= instuct(15 downto 11);
	inst_10_8 <= instuct(10 downto 8);
	inst_7_5 <= instuct(7 downto 5);
	inst_3_0 <= instuct(3 downto 0);
	inst_1_0 <= instuct(1 downto 0);
	inst_4_0 <= instuct(4 downto 0);
	inst_10_0 <= instuct(10 downto 0);
	inst_4_2 <= instruct(4 downto 2);
	
	with inst_15_11 select
		optype_origin <=
			ADDSP3_OP when "00000",
			NOP_OP when "00001",
			B_OP when "00010",
			BEQZ_OP when "00100",
			BNEZ_OP when "00101",
			SLL_SRA_OP when "00110",
			ADDIU3_OP when "01000",
			ADDIU_OP when "01001",
			SLTI_OP when "01010",
			ADDSP_BTEQZ_BTNEZ_MTSP_OP when "01100",
			LI_OP when "01101",
			LW_SP_OP when "10010",
			LW_OP when "10011",
			SW_SP_OP when "11010",
			SW_OP when "11011",
			ADDU_SUBU_OP when "11100",
			AND_CMP_JR_NOT_OR_OP when "11101",
			MFPC_SLLV_OP when "11101",
			MFIH_MTIH_OP when "11110",
			ERROR_OP when others;

	with inst_1_0 select
		ss_op_type <=
			SLL_OP when "00",
			SRA_OP when "11",
			ERROR_OP when others;
			
	with inst_10_8 select
		abbm_op_type <=
			ADDSP_OP when "011",
			BTEQZ_OP when "000",
			BTNEZ_OP when "001",
			MTSP_OP when "100",
			ERROR_OP when others;

	with inst_1_0 select
		as_op_type <=
			ADDU_OP when "01",
			SUBU_OP when "11",
			ERROR_OP when others;		

	with inst_4_0 select --11101
		acjno_op_type <=
			AND_OP when "01100",
			CMP_OP when "01010",
			JR_OP when "00000",
			NOT_OP when "01111",
			OR_OP when "01101",
			ERROR_OP when others;		

	with inst_4_0 select
		ms_op_type <=
			MFPC_OP when "00000",
			SLLV_OP when "00100",
			ERROR_OP when others;
			
	with inst_4_0 select
		mm_op_type <=
			MFIH when "00000",
			MTIH when "00001",
			ERROR_OP when others;
	
	with optype_origin select
		optype <=
			ss_op_type when SLL_SRA_OP,
			abbm_op_type when ADDSP_BTEQZ_BTNEZ_MTSP_OP,
			as_op_type when ADDU_SUBU_OP,
			acjno_op_type when AND_CMP_JR_NOT_OR_OP,
			ms_op_type when MFPC_SLLV_OP,
			mm_op_type when MFIH_MTIH_OP,
			unaffected when others;
	
	with optype select
		A_addr(3 downto 0) <=
			"1111" when NOT_OP,
			"1111" when ADDSP3_OP,
			"1000" when ADDSP_OP,
			"1111" when SLL_OP,
			"1111" when SRA_OP,
			"1111" when LI_OP,
			"1111" when LW_SP_OP,
			"1111" when B_OP,
			"1001" when BTEQZ_OP,
			"1001" when BTNEZ_OP,
			"1111" when MFIH_OP,
			"1111" when MFPC_OP,
			"1111" when NOP_OP,
			conv_std_logic_vector(conv_integer(inst_7_5), 4) when MTSP_OP,
			conv_std_logic_vector(conv_integer(inst_10_8), 4) when others;
	
	with optype select
		B_addr(3 downto 0) <=
			"1000" when ADDSP3_OP,
			"1111" when ADDIU_OP,
			"1111" when ADDSP_OP,
			"1111" when ADDIU3_OP,
			"1111" when SLTI_OP,
			"1111" when LI_OP,
			"1111" when LW_OP,
			"1000" when LW_SP_OP,
			"1000" when SW_SP_OP,
			"1111" when B_OP,
			"1111" when BEQZ_OP,
			"1111" when BNEZ_OP,
			"1111" when BTEQZ_OP,
			"1111" when JR_OP,
			"1111" when BTNEZ_OP,
			"1010" when MFIH_OP,
			"1011" when MFPC_OP,
			"1111" when MTIH_OP,
			"1111" when MTSP_OP,
			"1111" when NOP_OP,
			conv_std_logic_vector(conv_integer(inst_7_5), 4) when others;
	
	with optype select
		save_addr(3 downto 0) <=
			conv_std_logic_vector(conv_integer(inst_10_8), 4) when NOT_OP,
			conv_std_logic_vector(conv_integer(inst_10_8), 4) when ADDSP3_OP,
			conv_std_logic_vector(conv_integer(inst_10_8), 4) when ADDIU_OP,
			conv_std_logic_vector(conv_integer(inst_10_8), 4) when SLL_OP,
			conv_std_logic_vector(conv_integer(inst_10_8), 4) when SRA_OP,
			conv_std_logic_vector(conv_integer(inst_10_8), 4) when AND_OP,
			conv_std_logic_vector(conv_integer(inst_10_8), 4) when OR_OP,
			conv_std_logic_vector(conv_integer(inst_10_8), 4) when LI_OP,
			conv_std_logic_vector(conv_integer(inst_10_8), 4) when LW_SP_OP,
			conv_std_logic_vector(conv_integer(inst_10_8), 4) when MFIH_OP,
			conv_std_logic_vector(conv_integer(inst_10_8), 4) when MFPC_OP,
			conv_std_logic_vector(conv_integer(inst_7_5), 4) when ADDIU3_OP,
			conv_std_logic_vector(conv_integer(inst_7_5), 4) when SLLV_OP,
			conv_std_logic_vector(conv_integer(inst_7_5), 4) when LW_OP,
			conv_std_logic_vector(conv_integer(inst_4_2), 4) when ADDU_OP,
			conv_std_logic_vector(conv_integer(inst_4_2), 4) when SUBU_OP,
			"1000" when ADDSP_OP,
			"1001" when CMP_OP,
			"1001" when SLTI_OP,
			"1110" when SW_OP,
			"1110" when SW_SP_OP,
			"1110" when B_OP,
			"1110" when BEQZ_OP,
			"1110" when BNEZ_OP,
			"1110" when BTEQZ_OP,
			"1110" when JR_OP,
			"1110" when BTNEZ_OP,
			"1010" when MTIH_OP,
			"1000" when MTSP_OP,
			"1110" when NOP_OP,
			"1110" when others;
	
	with optype select
		tmp_imm <=
			to_integer(signed(inst_7_0)) when ADDIU_OP,
			to_integer(signed(inst_3_0)) when ADDIU3_OP,
			to_integer(signed(inst_7_0)) when ADDSP3_OP,
			to_integer(signed(inst_7_0)) when ADDSP_OP,
			to_integer(signed(inst_10_0)) when B_OP,
			to_integer(signed(inst_7_0)) when BEQZ_OP,
			to_integer(signed(inst_7_0)) when BNEZ_OP,
			to_integer(signed(inst_7_0)) when BTEQZ_OP,
			to_integer(signed(inst_7_0)) when BTNEZ_OP,
			to_integer(unsigned(inst_7_0)) when LI_OP,
			to_integer(signed(inst_4_0)) when LW_OP,
			to_integer(signed(inst_7_0)) when LW_SP_OP,
			to_integer(signed(inst_4_2)) when SLL_OP,
			to_integer(signed(inst_7_0)) when SLTI_OP,
			to_integer(signed(inst_4_2)) when SRA_OP,
			to_integer(signed(inst_4_0)) when SW_OP,
			to_integer(signed(inst_7_0)) when SW_SP_OP,
			0 when others;
		
end Behavioral;