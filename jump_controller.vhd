----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    01:13:59 11/23/2017 
-- Design Name: 
-- Module Name:    jump_controller - Behavioral 
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

entity jump_controller is
	Port(
		operand : in integer;
		pc_in : in std_logic_vector(15 downto 0);
		A, B, imm : in std_logic_vector(15 downto 0);
		jump_target : out std_logic_vector(15 downto 0);
		jump_enable : out std_logic
	);
end jump_controller;

architecture Behavioral of jump_controller is
	signal jp_op : std_logic;
begin
	
	jp_op <= '1' when (operand = B_OP or operand = BEQZ_OP or operand = BNEZ_OP or operand = BTEQZ_OP or operand = BTNEZ_OP or operand = JR_OP) else '0';

	make_jp : process(jp_op, operand, A, B, imm, pc_in) is		
	begin
		if (jp_op = '1') then
			case operand is
				when B_OP =>
					jump_target <= pc_in + imm;
					jump_enable <= '1';
				when BEQZ_OP =>
					if (A = "0000000000000000") then
						jump_target <= pc_in + imm;
						jump_enable <= '1';
					else
						jump_enable <= '0';
					end if;
				when BNEZ_OP =>
					if (A /= "0000000000000000") then
						jump_target <= pc_in + imm;
						jump_enable <= '1';
					else
						jump_enable <= '0';
					end if;
				when BTEQZ_OP =>
					if (A = "0000000000000000") then
						jump_target <= pc_in + imm;
						jump_enable <= '1';
					else
						jump_enable <= '0';
					end if;
				when BTNEZ_OP =>
					if (A /= "0000000000000000") then
						jump_target <= pc_in + imm;
						jump_enable <= '1';
					else
						jump_enable <= '0';
					end if;
				when JR_OP =>
					jump_target <= A;
					jump_enable <= '1';
				when others =>
					jump_enable <= '0';	
			end case;
		else
			jump_enable <= '0';
		end if;
	end process;

end Behavioral;

