----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    20:20:20 11/21/2017 
-- Design Name: 
-- Module Name:    cpu_top - Behavioral 
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

entity cpu_top is

end cpu_top;

architecture Behavioral of cpu_top is

component pc
	Port(
		clk: in std_logic;
		pc_in: in std_logic_vector(15 downto 0);
		pc_staller: in std_logic;
		pc_out: out std_logic_vector(15 downto 0)
	);
end component;

component im
	Port(
		pc_in: in std_logic_vector(15 downto 0);
		bus_content: in std_logic_vector(15 downto 0);
		bus_addr: out std_logic_vector(15 downto 0);
		instruction: out std_logic_vector(15 downto 0)
	);
end component;

component adder_1
	port(
		pc_in: in std_logic_vector(15 downto 0);
		pc_out: out std_logic_vector(15 downto 0)
	);
end component;

component mux_3
	Port(
		mux1_EN, mux2_EN: in std_logic;
		src_1: in std_logic_vector(15 downto 0);
		src_2: in std_logic_vector(15 downto 0);
		src_3: in std_logic_vector(15 downto 0);
		output: out std_logic_vector(15 downto 0)
	);
end component;

component IFID
	Port(
		clk: in std_logic;
		pc_in: in std_logic_vector(15 downto 0);
		hold, nop: in std_logic;
		instruction_in: in std_logic_vector(15 downto 0);
		instruction_out: out std_logic_vector(15 downto 0);
		pc_out: out std_logic_vector(15 downto 0)
	);
end component;

component register_controll
	Port(
		clk : in std_logic;
		pc : in std_logic_vector(15 downto 0);
		A_addr, B_addr, write_addr, write_content: in std_logic_vector(15 downto 0);
		
		A, B : out std_logic_vector(15 downto 0)
	); 
end component;

component operand_analyse
	Port(
		instuct : in std_logic_vector(15 downto 0);
		operand : out integer;
		A_addr, B_addr, save_addr: out std_logic_vector(3 downto 0);
		imm : out std_logic_vector(15 downto 0)
	);
end component;

component jump_controller
	Port(
		operand : in integer;
		pc_in : in std_logic_vector(15 downto 0);
		A, B, imm : in std_logic_vector(15 downto 0);
		jump_target : out std_logic_vector(15 downto 0);
		jump_enable : out std_logic
	);
end component;

component stall_controller
	Port(
		clk : in std_logic;
		pc_pc, pc_ifid: in std_logic_vector(15 downto 0);
		alu_stall_request : in std_logic_vector(15 downto 0);
		alu_mem_addr, alu_op_type : in std_logic_vector(15 downto 0);
		bus_stall_request : in std_logic_vector(15 downto 0);
		
		pc_enable, ifid_hold, ifid_nop, idex_hold, idex_nop: out std_logic_vector(15 downto 0);
		jp_stall_enable : out std_logic;
		jp_stall_targer : out std_logic_vector(15 downto 0)
	);
end component;

component IDEX
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
end component;

component alu_forward
	port(
		operand: in integer;
		save_register_addr: in std_logic_vector(15 downto 0);
		rx_addr, ry_addr: in std_logic_vector(15 downto 0);
		alu_stall_request: out std_logic;
		rx_mux_en, ry_mux_en: out std_logic
	); 
end component;

component alu
	Port(
		operand: in integer;
		A, B, imm: in std_logic_vector(15 downto 0);
		C: out std_logic_vector(15 downto 0)
	); 
end component;

component mem_forward
	Port(
		operand: in integer;
		save_register_addr: in std_logic_vector(15 downto 0);
		rx_addr, ry_addr: in std_logic_vector(15 downto 0);
		rx_mux_en, ry_mux_en: out std_logic
	);
end component;

component EXMEM
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
end component;

component MEMWB
	Port(
		pc_in, DM_in, save_register_addr_in : in std_logic_vector(15 downto 0);
		pc_out, DM_out, save_register_addr_out : out std_logic_vector(15 downto 0)
	); 
end component;

component bus_dispatcher
	Port(
		clk, rst : in std_logic;
		pc_in : in std_logic_vector(15 downto 0);
		dm_addr : in std_logic_vector(15 downto 0);
		mem_content : inout std_logic_vector(15 downto 0);
		mem_addr : out std_logic_vector(15 downto 0);
		oprand_type: in integer;
		dm_signal : in std_logic;
		sram_optype : out std_logic; --'0'read '1'write
		bus_stall_request : out std_logic
	);
end component;

component uart
end component;

component sram
end component;

begin


end Behavioral;

