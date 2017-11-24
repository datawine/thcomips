----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    19:08:22 11/23/2017 
-- Design Name: 
-- Module Name:    stall_controller - Behavioral 
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

entity stall_controller is
	Port(
		clk : in std_logic;
		pc_pc, pc_ifid: in std_logic_vector(15 downto 0);
		alu_stall_request : in std_logic_vector(15 downto 0);
		alu_mem_addr, alu_op_type : in std_logic_vector(15 downto 0);
		bus_stall_request : in std_logic_vector(15 downto 0);
		
		pc_enable, ifid_hold, ifid_nop, idex_hold, idex_nop: out std_logic_vector(15 downto 0);
		jp_stall_enable : out std_logic;
		jp_stall_target : out std_logic_vector(15 downto 0)
	);
end stall_controller;

architecture Behavioral of stall_controller is
	signal reset, nop: integer;
	-- 1 for pc, 2 for ifid, 3 for idex, 4 for exmem, 0 for nothing
begin
	gen_stall: process(pc_pc, pc_ifid, pc_idex, alu_stall_request, alu_mem_addr, alu_op_type) is
	begin
		if (alu_op_type = SW_OP or alu_op_type = SW_SP_OP) then
			if (alu_mem_addr = pc_pc) then
				reset <= 2;
			elsif (alu_mem_addr = pc_ifid) then
				reset <= 3;
			else
				reset <= 0;
			end if;
		end if;
		
		if ((alu_stall_request = '1' or bus_stall_request = '1') and reset = 0) then
			if (alu_stall_request = '1') then
				nop <= 3;
			elsif (bus_stall_request = '1') then
				nop <= 2;
			else
				nop <= 0;
			end if;
		else
		end if;
	end process;
	
	make_stall: process(reset, nop) is
	begin
		if (reset /= 0) then
			case reset is
				when 3 =>
					jp_stall_enable <= '1';
					jp_stall_target <= pc_ifid;
					idex_nop <= '1';
					ifid_nop <= '1';
				when 2 =>
					jp_stall_enable <= '1';
					jp_stall_target <= pc_pc;
					ifid_nop <= '1';
				when others =>
					idex_nop <= '0';
					ifid_nop <= '0';
			end case;
		elsif (nop /= 0) then
			case nop is
				when 3 =>
					idex_nop <= '1';
					ifid_hold <= '1';
					pc_enable <= '0';					
				when 2 =>
					ifid_nop <= '1';
					pc_enabel <= '0';
				when others =>
			end case;
		else
			idex_nop <= '0';
			ifid_nop <= '0';
			jp_stall_enable <= '0';
		end if;
	end process;

end Behavioral;

