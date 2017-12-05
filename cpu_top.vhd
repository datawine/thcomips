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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity cpu_top is
	Port(
		sys_clk: in std_logic;
		press_clk: in std_logic;
		clk_switch: in std_logic;
		tbre, tsre, data_ready: in std_logic;
		inout_RAM1_DATA: inout std_logic_vector(15 downto 0);

		LED: out std_logic_vector(15 downto 0);
		digit, digit_2: out std_logic_vector(6 downto 0);
		output_RAM1: out std_logic_vector(17 downto 0);
		ram1OE, ram1WE, ram1EN: out std_logic;
		wrn, rdn: out std_logic
	);

	function encode_number(inputnum: in std_logic_vector(3 downto 0)) return std_logic_vector is
	begin
		case inputnum is
			when "0000" => return "1111110";
			when "0001" => return "0110000";
			when "0010" => return "1101101";
			when "0011" => return "1111001";
			when "0100" => return "0110011";
			when "0101" => return "1011011";
			when "0110" => return "0011111";
			when "0111" => return "1110000";
			when "1000" => return "1111111";
			when "1001" => return "1110011";
			when "1010" => return "1110111";
			when "1011" => return "0011111";
			when "1100" => return "1001110";
			when "1101" => return "0111101";
			when "1110" => return "1001111";
			when "1111" => return "1000111";
			when others => return "0000000";
		end case;
		return "0000000";
	end function encode_number;

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

component IM
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
		clk: in std_logic;
		pc_in : in std_logic_vector(15 downto 0);
		A_addr, B_addr, write_addr: in std_logic_vector(3 downto 0);
		write_content : in std_logic_vector(15 downto 0);
		
		R6_out : out std_logic_vector(15 downto 0);
		A, B : out std_logic_vector(15 downto 0)
	); 
end component;

component operand_analyse
	Port(
		instruct : in std_logic_vector(15 downto 0);
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
		alu_stall_request : in std_logic;
		alu_mem_addr : in std_logic_vector(15 downto 0);
		alu_op_type : in integer;
		bus_stall_request : in std_logic;
		
		pc_enable, ifid_hold, ifid_nop, idex_hold, idex_nop: out std_logic;
		jp_stall_enable : out std_logic;
		jp_stall_target : out std_logic_vector(15 downto 0)
	);
end component;

component IDEX
	Port(
		clk : in std_logic;
		operand_type_in : in integer;
		save_reg_addr_in : in std_logic_vector(3 downto 0);
		A_in, B_in, imm_in, pc_in : in std_logic_vector(15 downto 0);
		nop, hold : in std_logic;
		
		operand_type_out : out integer;
		save_reg_addr_out : out std_logic_vector(3 downto 0);
		A_out, B_out, imm_out, pc_out : out std_logic_vector(15 downto 0)
	);
end component;

component alu_forward
	port(
		operand: in integer;
		save_register_addr: in std_logic_vector(3 downto 0);
		rx_addr, ry_addr: in std_logic_vector(3 downto 0);
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
		save_register_addr: in std_logic_vector(3 downto 0);
		rx_addr, ry_addr: in std_logic_vector(3 downto 0);
		rx_mux_en, ry_mux_en: out std_logic
	);
end component;

component EXMEM
	Port(
		clk : in std_logic;
		operand_type_in : in integer;
		pc_in : in std_logic_vector(15 downto 0);
		save_reg_addr_in : in std_logic_vector(3 downto 0);
		A_in, B_in, C_in : in std_logic_vector(15 downto 0);
		nop, hold : in std_logic;
		
		operand_type_out : out integer;
		pc_out : out std_logic_vector(15 downto 0);
		save_reg_addr_out : out std_logic_vector(3 downto 0);
		A_out, B_out, C_out : out std_logic_vector(15 downto 0)
	);
end component;

component DM
	Port(
		A, B, C : in std_logic_vector(15 downto 0);
		operand_type : in integer;
		bus_content_in : in std_logic_vector(15 downto 0);

		send_signal : out std_logic;
		bus_content_out : out std_logic_vector(15 downto 0);
		bus_addr : out std_logic_vector(15 downto 0);
		DM_out : out std_logic_vector(15 downto 0)
	);
end component;

component MEMWB
	Port(
		clk, nop, hold : in std_logic;
		pc_in, DM_in : in std_logic_vector(15 downto 0);
		save_register_addr_in : in std_logic_vector(3 downto 0);
		pc_out, DM_out : out std_logic_vector(15 downto 0);
		save_register_addr_out : out std_logic_vector(3 downto 0)
	); 
end component;

component bus_dispatcher
	Port(
		-- inputs
		clk, rst : in std_logic;
		operand_type: in integer;
		pc_in, dm_addr : in std_logic_vector(15 downto 0);
		dm_content_in : in std_logic_vector(15 downto 0);
		mem_content_in : in std_logic_vector(15 downto 0);
		dm_signal : in std_logic;
				
		-- outputs
		im_content_out : out std_logic_vector(15 downto 0);
		dm_content_out : out std_logic_vector(15 downto 0);
		mem_addr, mem_content : out std_logic_vector(15 downto 0);
		mem_optype : out std_logic_vector(1 downto 0); --'00' uart read, '01' uart write, '10' mem read, '11' mem write
		bus_stall_request : out std_logic
	);
end component;

component memory
	Port(
		clk: in std_logic;
		clk_2: in std_logic;
		cnt_clk : in std_logic;
		input_addr, input_content: in std_logic_vector(15 downto 0);
		tbre, tsre, data_ready: in std_logic;
		operand_type: in std_logic_vector(1 downto 0);
		output_RAM1: out std_logic_vector(17 downto 0);
		control_out: out std_logic;
		inout_RAM1_DATA: inout std_logic_vector(15 downto 0);
		ram1OE, ram1WE, ram1EN: out std_logic;
		output_content : out std_logic_vector(15 downto 0);
		wrn, rdn: out std_logic
	);
end component;

	-- IF
	signal next_pc: std_logic_vector(15 downto 0) := "0000000000000000";
	signal pc_pc_out: std_logic_vector(15 downto 0) := "0000000000000000"; 
	signal bus_content_bus_im, bus_addr_im_bus: std_logic_vector(15 downto 0) := "0000000000000000";
	signal inst_im_ifid: std_logic_vector(15 downto 0) := "0000000000000000";
	
	signal added_pc: std_logic_vector(15 downto 0) := "0000000000000000";
	
	signal jump_enable, jump_stall_enable: std_logic := '0';
	signal jump_target, jump_stall_target: std_logic_vector(15 downto 0) := "0000000000000000";
	
	-- ID
	signal inst_ifid: std_logic_vector(15 downto 0) := "0000000000000000";
	signal inst_ifid_out: std_logic_vector(15 downto 0) := "0000000000000000";
	signal pc_ifid_out: std_logic_vector(15 downto 0) := "0000000000000000";
	
	signal A_addr_operand_analyse_register_controll: std_logic_vector(3 downto 0) := "0000";
	signal B_addr_operand_analyse_register_controll: std_logic_vector(3 downto 0) := "0000";
	signal A_register_controll_out: std_logic_vector(15 downto 0) := "0000000000000000";
	signal B_register_controll_out: std_logic_vector(15 downto 0) := "0000000000000000";
	
	signal A_mux_alu_enable, B_mux_alu_enable, A_mux_dm_enable, B_mux_dm_enable: std_logic := '0';
	
	signal A_mux_out, B_mux_out: std_logic_vector(15 downto 0) := "0000000000000000";
	
	signal operand_operand_analyse_out: integer := 0;	
	signal save_register_addr_operand_analyse_IEDX: std_logic_vector(3 downto 0) := "0000";
	signal imm_operand_analyse_out: std_logic_vector(15 downto 0) := "0000000000000000";
	
	
	-- EXE
	signal operand_idex_out: integer := 0;
	signal pc_idex_out: std_logic_vector(15 downto 0) := "0000000000000000";
	signal A_idex_out, B_idex_out, imm_idex_out: std_logic_vector(15 downto 0) := "0000000000000000";
	signal save_register_addr_idex_out: std_logic_vector(3 downto 0) := "0000";
	signal C_alu_out: std_logic_vector(15 downto 0) := "0000000000000000";

	signal alu_stall_request: std_logic := '0';
	signal alu_mem_addr: std_logic_vector(15 downto 0) := "0000000000000000"; 
	
	-- MEM
	signal operand_exmem_out: integer := 0;
	signal pc_exmem_out: std_logic_vector(15 downto 0) := "0000000000000000";
	signal A_exmem_out, B_exmem_out, C_exmem_out: std_logic_vector(15 downto 0) := "0000000000000000";
	signal save_register_addr_exmem_out: std_logic_vector(3 downto 0) := "0000";
	
	signal bus_stall_request: std_logic := '0';
	signal bus_content_dm_bus, bus_addr_dm_bus: std_logic_vector(15 downto 0) := "0000000000000000";
	signal bus_addr_dm: std_logic_vector(15 downto 0) := "0000000000000000";
	signal dm_signal: std_logic := '0';
	signal dm_dm_out: std_logic_vector(15 downto 0) := "0000000000000000";
	
	signal bus_content_bus_dm, bus_addr_bus_dm: std_logic_vector(15 downto 0) := "0000000000000000";
	signal mem_addr_bus_mem, mem_content_bus_mem: std_logic_vector(15 downto 0) := "0000000000000000";
	signal mem_content_copy: std_logic_vector(15 downto 0) := "0000000000000000";
	signal mem_optype: std_logic_vector(1 downto 0) := "00";
	signal mem_content_mem_bus: std_logic_vector(15 downto 0) := "0000000000000000";

	signal bus_content_mem_bus: std_logic_vector(15 downto 0) := "0000000000000000";

	-- WB
	signal pc_memwb_out: std_logic_vector(15 downto 0) := "0000000000000000";
	signal save_register_addr_memwb_out: std_logic_vector(3 downto 0) := "0000";
	signal dm_memwb_out: std_logic_vector(15 downto 0) := "0000000000000000";

	--stall control
	signal pc_staller, ifid_hold, ifid_nop, idex_hold, idex_nop: std_logic := '0';
	
	--jump branch
	
	signal test_R6: std_logic_vector(15 downto 0) := "0000000000000000";
	signal cpu_clk: std_logic;
	signal tmp_wrn, tmp_rdn: std_logic;
	signal half_press_clk: std_logic;
	signal half_sys_clk: std_logic;
	
	signal cnt_clk : std_logic := '0';
	signal cnt_sys_clk : std_logic := '0';
	signal cpu_2_clk: std_logic := '0';
	
	signal final_clk: std_logic := '0';
	
	signal control_out: std_logic;
begin

	split_clk: process(press_clk) is
	begin
		if(press_clk'event and press_clk = '1') then
			if(cnt_clk = '0') then
				cnt_clk <= '1';
				half_press_clk <= '1';
			else
				cnt_clk <= '0';
				half_press_clk <= '0';
			end if;
		end if;
	end process;
	
	split_sys_clk: process(sys_clk) is
	begin
		if(sys_clk'event and sys_clk = '1') then
			if(cnt_sys_clk = '0') then
				cnt_sys_clk <= '1';
				half_sys_clk <= '1';
			else
				cnt_sys_clk <= '0';
				half_sys_clk <= '0';
			end if;
		end if;
	end process;
	
	digit <= encode_number(pc_pc_out(7 downto 4));
	digit_2 <= encode_number(pc_pc_out(3 downto 0));

	mem_content_copy <= bus_content_dm_bus;
	
--	LED <= pc_exmem_out;
--	cpu_clk <= half_clk;
--	cpu_2_clk <= press_clk;
	cpu_clk <= (clk_switch and half_press_clk) or (not clk_switch and half_sys_clk);
	cpu_2_clk <= (clk_switch and press_clk) or (not clk_switch and sys_clk);
	
	LED <= "0000000000000000";
	
--	LED(15 downto 2) <= mem_content_mem_bus(15 downto 2);
--	LED(1 downto 0) <= mem_optype;


--	record_cpu: process(cpu_clk) is
--	begin
--		if (cpu_clk'event and cpu_clk = '1') then
--			if (pc_exmem_out = "0000000010000100") then
--				LED(12 downto 0) <= mem_content_copy(12 downto 0);
--			end if;
--		end if;
		
--	end process; 

	pc_1: pc port map(
		clk => cpu_clk,
		pc_in => next_pc,
		pc_staller => pc_staller,
		pc_out => pc_pc_out
	);

	im_1: im port map(	
		pc_in => pc_pc_out,
		bus_content => bus_content_bus_im,
		bus_addr => bus_addr_im_bus,
		instruction => inst_im_ifid
	);
	
--	LED <= inst_im_ifid;
	
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

	IFID_1: IFID port map(
		clk => cpu_clk,
		pc_in => pc_pc_out,
		hold => ifid_hold, 
		nop => ifid_nop,
		instruction_in => inst_im_ifid,
		instruction_out => inst_ifid_out,
		pc_out => pc_ifid_out
	);
 
	register_controller: register_controll port map(
		clk => cpu_clk,
		pc_in => pc_ifid_out,
		A_addr => A_addr_operand_analyse_register_controll,
		B_addr => B_addr_operand_analyse_register_controll, 
		write_addr => save_register_addr_memwb_out, 	
		write_content => DM_memwb_out,

		R6_out => test_R6,
		A => A_register_controll_out,
		B => B_register_controll_out
	); 

	mux_A: mux_3 port map(
		mux1_EN => A_mux_alu_enable, 
		mux2_EN => A_mux_dm_enable,
		src_1 => A_register_controll_out,
		src_2 => C_alu_out,
		src_3 => dm_dm_out,
		output => A_mux_out
	);

	mux_B: mux_3 port map(
		mux1_EN => B_mux_alu_enable, 
		mux2_EN => B_mux_dm_enable,
		src_1 => B_register_controll_out,
		src_2 => C_alu_out,
		src_3 => dm_dm_out,
		output => B_mux_out
	);
	
	op: operand_analyse port map(
		instruct => inst_ifid_out,
		operand => operand_operand_analyse_out,
		A_addr => A_addr_operand_analyse_register_controll, 
		B_addr => B_addr_operand_analyse_register_controll, 
		save_addr => save_register_addr_operand_analyse_IEDX,
		imm => imm_operand_analyse_out
	);

	jc: jump_controller port map(
		operand => operand_operand_analyse_out,
		pc_in => pc_ifid_out,
		A => A_mux_out, 
		B => B_mux_out, 
		imm => imm_operand_analyse_out,
		jump_target => jump_target,
		jump_enable => jump_enable
	);

	sc: stall_controller port map(
		clk => cpu_clk,
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

	IDEX_1: IDEX port map(
		clk => cpu_clk,
		operand_type_in => operand_operand_analyse_out,
		save_reg_addr_in => save_register_addr_operand_analyse_IEDX,
		A_in => A_mux_out, 
		B_in => B_mux_out, 
		imm_in => imm_operand_analyse_out, 
		pc_in => pc_ifid_out,
		nop => idex_nop, 
		hold => idex_hold,
		
		operand_type_out => operand_idex_out,
		save_reg_addr_out => save_register_addr_idex_out,
		A_out => A_idex_out, 
		B_out => B_idex_out, 
		imm_out => imm_idex_out, 
		pc_out => pc_idex_out
	);

	af: alu_forward port map(
		operand => operand_idex_out,
		save_register_addr => save_register_addr_idex_out,
		rx_addr => A_addr_operand_analyse_register_controll, 
		ry_addr => B_addr_operand_analyse_register_controll,
		alu_stall_request => alu_stall_request,
		rx_mux_en => A_mux_alu_enable, 
		ry_mux_en => B_mux_alu_enable
	); 

	alu_1: alu port map(
		operand => operand_idex_out,
		A => A_idex_out, 
		B => B_idex_out, 
		imm => imm_idex_out,
		C => C_alu_out
	); 
	
	EXMEM_1: EXMEM port map(
		clk => cpu_clk,
		operand_type_in => operand_idex_out,
		pc_in => pc_idex_out,
		save_reg_addr_in => save_register_addr_idex_out,
		A_in => A_idex_out, 
		B_in => B_idex_out, 
		C_in => C_alu_out,
		nop => '0', 
		hold => '0',
		
		operand_type_out => operand_exmem_out,
		pc_out => pc_exmem_out,
		save_reg_addr_out => save_register_addr_exmem_out,
		A_out => A_exmem_out, 
		B_out => B_exmem_out, 
		C_out => C_exmem_out
	);

	mf: mem_forward port map(
		operand => operand_exmem_out,
		save_register_addr => save_register_addr_exmem_out,
		rx_addr => A_addr_operand_analyse_register_controll, 
		ry_addr => B_addr_operand_analyse_register_controll,
		rx_mux_en => A_mux_dm_enable, 
		ry_mux_en => B_mux_dm_enable
	);

	DM_1: DM port map(
		A => A_exmem_out, 
		B => B_exmem_out, 
		C => C_exmem_out,
		operand_type => operand_exmem_out,
		bus_content_in => bus_content_bus_dm,
		
		send_signal => dm_signal,
		bus_content_out => bus_content_dm_bus,
		bus_addr => bus_addr_dm,
		DM_out => dm_dm_out
	);

	bd: bus_dispatcher port map(
		clk => cpu_clk,
		rst => '0',
		operand_type => operand_exmem_out,
		pc_in => bus_addr_im_bus, 
		dm_addr => bus_addr_dm,
		dm_content_in => bus_content_dm_bus,
		mem_content_in => mem_content_mem_bus,
		dm_signal => dm_signal,
		
		im_content_out => bus_content_bus_im, 
		dm_content_out => bus_content_bus_dm,
		mem_addr => mem_addr_bus_mem, 
		mem_content => mem_content_bus_mem,
		mem_optype => mem_optype,
		bus_stall_request => bus_stall_request
	);

	MEMWB_1: MEMWB port map(
		clk => cpu_clk,
		nop => '0', 
		hold => '0',
		pc_in => pc_exmem_out, 
		DM_in => dm_dm_out, 
		save_register_addr_in => save_register_addr_exmem_out,
		pc_out => pc_memwb_out, 
		DM_out => dm_memwb_out, 
		save_register_addr_out => save_register_addr_memwb_out
	); 
	
	memory_1: memory port map(
		clk => cpu_clk,
		clk_2 => cpu_2_clk,
		cnt_clk => cnt_clk,
		input_addr => mem_addr_bus_mem, 
		input_content => mem_content_bus_mem,
		tbre => tbre, 
		tsre => tsre, 
		data_ready => data_ready,
		control_out => control_out,
		operand_type => mem_optype,
		output_RAM1 => output_RAM1,
		inout_RAM1_DATA => inout_RAM1_DATA,
		ram1OE => ram1OE, 
		ram1WE => ram1WE, 
		ram1EN => ram1EN,
		output_content => mem_content_mem_bus,
		wrn => tmp_wrn, 
		rdn => tmp_rdn
	);
	
	wrn <= tmp_wrn;
	rdn <= tmp_rdn;
	

end Behavioral;

