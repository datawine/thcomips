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
		pc_in, dm_addr : in std_logic_vector(15 downto 0);
		im_content_in, dm_content_in : in std_logic_vector(15 downto 0);
		mem_content_in : in std_logic_vector(15 downto 0);
		oprand_type: in integer;
		dm_signal : in std_logic;
		finish_signal : in std_logic;
		mem_start : out std_logic;
		im_content_out, dm_content_out : out std_logic_vector(15 downto 0);
		mem_addr, mem_content : out std_logic_vector(15 downto 0);
		mem_optype : out std_logic_vector(1 downto 0); --'00' uart read, '01' uart write, '10' mem read, '11' mem write
		bus_stall_request : out std_logic
	);
end component;

component memory
	Port(
		clk: in std_logic;
		input_addr, input_content: in std_logic_vector(15 downto 0);
		start: in std_logic;
		tbre, tsre, data_ready: in std_logic;
		operand_type: in std_logic_vector(1 downto 0);
		output_RAM1: out std_logic_vector(17 downto 0);
		inout_RAM1_DATA: inout std_logic_vector(15 downto 0);
		ram1OE, ram1WE, ram1EN: out std_logic;
		output_content : out std_logic_vector(15 downto 0);
		done: out std_logic;
		wrn, rdn: out std_logic
	);
end component;

	-- IF
	signal sys_clk: std_logic;
	signal next_pc, pc_pc_out: std_logic_vector(15 downto 0); 
	signal bus_content_bus_im, bus_addr_im_bus: std_logic_vector(15 downto 0);
	signal inst_im_ifid: std_logic_vector(15 downto 0);
	
	signal added_pc: std_logic_vector(15 downto 0);
	
	signal jump_enable, jump_stall_enable: std_logic;
	signal jump_target, jump_stall_target: std_logic;
	
	-- ID
	signal inst_ifid_out: std_logic_vector(15 downto 0);
	signal pc_ifid_out: std_logic_vector(15 downto 0);
	signal inst_ifid_out: std_logic_vector(15 downto 0);
	
	signal A_addr_operand_analyse_register_controll: std_logic_vector(15 downto 0);
	signal B_addr_operand_analyse_register_controll: std_logic_vector(15 downto 0);
	signal save_register_addr_MEMWB_register_controll: std_logic_vector(15 downto 0);
	signal save_register_content_MEMWB_register_controll: std_logic_vector(15 downto 0);
	signal A_register_controll_out: std_logic_vector(15 downto 0);
	signal B_register_controll_out: std_logic_vector(15 downto 0);
	
	signal A_mux_alu_enable, B_mux_alu_enable, A_mux_dm_enable, B_mux_dm_enable: std_logic_vector(15 downto 0);
	
	signal alu_forward, dm_forward: std_logic_vector(15 downto 0);
	
	signal A_mux_out, B_mux_out: std_logic_vector(15 downto 0);
	
	signal operand_operand_analyse_out: std_logic_vector(15 downto 0);	
	signal save_register_addr_operand_analyse_IEDX: std_logic_vector(15 downto 0);
	signal imm_operand_analyse_out: std_logic_vector(15 downto 0);
	
	signal jump_target : std_logic_vector(15 downto 0);
	signal jump_enable : std_logic;
	
	-- EXE
	signal operand_idex_out: std_logic_vector(15 downto 0);

	signal alu_stall_request: std_logic_vector(15 downto 0);
	signal alu_mem_addr: std_logic_vector(15 downto 0); 
	
	-- MEM
	
	-- WB

	--stall control
	signal pc_staller, ifid_hold, ifid_nop, idex_hold, idex_nop: std_logic = '0';
	
	--jump branch
begin

	pc: pc port map(
		clk => sys_clk,
		pc_in => next_pc,
		pc_staller => pc_staller,
		pc_out => pc_pc_out
	);

	im: im port map(	
		pc_in => pc_pc_out,
		bus_content => bus_content_bus_im,
		bus_addr => bus_addr_im_bus,
		instruction => inst_im_ifid
	);
	
	adder: adder_1 port map(
		pc_in => pc_pc_out,
		pc_out => added_pc
	);

	mux_new_pc: mux_3 port map(
		mux1_EN => jump_stall_enable, 
		mux2_EN => jump_enable,
		src_1 => added_pc,
		src_2 => jump_stall_target,
		src_3 => jump_target,
		output => next_pc
	);

	IFID: IFID port map(
		clk => sys_clk,
		pc_in => pc_pc_out,
		hold => ifid_hold, 
		nop => ifid_nop,
		instruction_in => inst_im_ifid;
		instruction_out => inst_ifid_out,
		pc_out => inst_ifid
	);

	rc: register_controll port map(
		A_addr => A_addr_operand_analyse_register_controll,
		B_addr => B_addr_operand_analyse_register_controll, 
		write_addr => save_register_addr_MEMWB_register_controll, 	
		write_content => save_register_content_MEMWB_register_controll,
		
		A => A_register_controll_out,
		B => B_register_controll_out
	); 

	mux_A: mux_3 port map(
		mux1_EN => A_mux_alu_enable, 
		mux2_EN => A_mux_dm_enable,
		src_1 => A_register_controll_out,
		src_2 => alu_forward,
		src_3 => dm_forward,
		output => A_mux_out
	);

	mux_B: mux_3 port map(
		mux1_EN => B_mux_alu_enable, 
		mux2_EN => B_mux_dm_enable,
		src_1 => B_register_controll_out,
		src_2 => alu_forward,
		src_3 => dm_forward,
		output => B_mux_out
	);
	
	op: operand_analyse port map(
		instuct => inst_ifid_out,
		operand => operand_operand_analyse_out,
		A_addr => A_addr_operand_analyse_register_controll, 
		B_addr => B_addr_operand_analyse_register_controll, 
		save_addr => save_register_addr_operand_analyse_IEDX,
		imm => imm_operand_analyse_out
	);

	jc: jump_controller port map(
		operand => operand_operand_analyse_out,
		pc_in => inst_ifid_out,
		A => A_mux_out, 
		B => B_mux_out, 
		imm => imm_operand_analyse_out,
		jump_target => jump_target,
		jump_enable => jump_enable
	);

	sc: stall_controller port map(
		clk => sys_clk,
		pc_pc => pc_pc_out, 
		pc_ifid => pc_ifid_out,
		alu_stall_request => alu_stall_request,
		alu_mem_addr => alu_mem_addr,
		alu_op_type => operand_idex_out,
		bus_stall_request => bus_stall_request,
		
		pc_enable => pc_staller, 
		ifid_hold => ifid_hold, 
		ifid_nop => ifid_nop, 
		idex_hold => idex_hold, 
		idex_nop => idex_nop,
		jp_stall_enable => jump_stall_enable,
		jp_stall_target => jump_stall_target
	);

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
		pc_in, dm_addr : in std_logic_vector(15 downto 0);
		im_content_in, dm_content_in : in std_logic_vector(15 downto 0);
		mem_content_in : in std_logic_vector(15 downto 0);
		oprand_type: in integer;
		dm_signal : in std_logic;
		finish_signal : in std_logic;
		mem_start : out std_logic;
		im_content_out, dm_content_out : out std_logic_vector(15 downto 0);
		mem_addr, mem_content : out std_logic_vector(15 downto 0);
		mem_optype : out std_logic_vector(1 downto 0); --'00' uart read, '01' uart write, '10' mem read, '11' mem write
		bus_stall_request : out std_logic
	);
end component;

component memory
	Port(
		clk: in std_logic;
		input_addr, input_content: in std_logic_vector(15 downto 0);
		start: in std_logic;
		tbre, tsre, data_ready: in std_logic;
		operand_type: in std_logic_vector(1 downto 0);
		output_RAM1: out std_logic_vector(17 downto 0);
		inout_RAM1_DATA: inout std_logic_vector(15 downto 0);
		ram1OE, ram1WE, ram1EN: out std_logic;
		output_content : out std_logic_vector(15 downto 0);
		done: out std_logic;
		wrn, rdn: out std_logic
	);
end component;

end Behavioral;

