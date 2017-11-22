--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:40:24 11/22/2017
-- Design Name:   
-- Module Name:   C:/Users/leavan/Desktop/thcomips/test_stall_controller.vhd
-- Project Name:  thcomips
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: stall_controller
-- 
-- Dependencies:
-- 
-- Revision:
-- Revision 0.01 - File Created
-- Additional Comments:
--
-- Notes: 
-- This testbench has been automatically generated using types std_logic and
-- std_logic_vector for the ports of the unit under test.  Xilinx recommends
-- that these types always be used for the top-level I/O of a design in order
-- to guarantee that the testbench will bind correctly to the post-implementation 
-- simulation model.
--------------------------------------------------------------------------------
LIBRARY ieee;
USE ieee.std_logic_1164.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_stall_controller IS
END test_stall_controller;
 
ARCHITECTURE behavior OF test_stall_controller IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT stall_controller
    PORT(
         clk : IN  std_logic;
         pc_pc : IN  std_logic_vector(15 downto 0);
         pc_ifid : IN  std_logic_vector(15 downto 0);
			pc_idex : IN std_logic_vector(15 downto 0);
         alu_stall_request : IN  std_logic;
         alu_mem_addr : IN  std_logic_vector(15 downto 0);
         alu_op_type : IN  integer;
         bus_stall_request : IN  std_logic;
         pc_enable : OUT  std_logic;
         ifid_hold : OUT  std_logic;
         ifid_nop : OUT  std_logic;
         idex_hold : OUT  std_logic;
         idex_nop : OUT  std_logic;
         jp_stall_enable : OUT  std_logic;
         jp_stall_target : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal pc_pc : std_logic_vector(15 downto 0) := (others => '0');
   signal pc_ifid : std_logic_vector(15 downto 0) := (others => '0');
	signal pc_idex : std_logic_vector(15 downto 0) := (others => '0');
   signal alu_stall_request : std_logic := '0';
   signal alu_mem_addr : std_logic_vector(15 downto 0) := (others => '0');
   signal alu_op_type : integer := 0;
   signal bus_stall_request : std_logic := '0';

 	--Outputs
   signal pc_enable : std_logic;
   signal ifid_hold : std_logic;
   signal ifid_nop : std_logic;
   signal idex_hold : std_logic;
   signal idex_nop : std_logic;
   signal jp_stall_enable : std_logic;
   signal jp_stall_target : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: stall_controller PORT MAP (
          clk => clk,
          pc_pc => pc_pc,
          pc_ifid => pc_ifid,
			 pc_idex => pc_idex,
          alu_stall_request => alu_stall_request,
          alu_mem_addr => alu_mem_addr,
          alu_op_type => alu_op_type,
          bus_stall_request => bus_stall_request,
          pc_enable => pc_enable,
          ifid_hold => ifid_hold,
          ifid_nop => ifid_nop,
          idex_hold => idex_hold,
          idex_nop => idex_nop,
          jp_stall_enable => jp_stall_enable,
          jp_stall_target => jp_stall_target
        );

   -- Clock process definitions
   clk_process :process
   begin
		clk <= '0';
		wait for clk_period/2;
		clk <= '1';
		wait for clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clk_period*10;
      -- insert stimulus here 
		
		--bus stall request test
		bus_stall_request <= '1';
		wait for 20 ns;
		
		bus_stall_request <= '0';
		wait for 20 ns;
		
		bus_stall_request <= '1';
		wait for 20 ns;
		
		bus_stall_request <= '0';
		wait for 20 ns;
		
		alu_mem_addr <= "1111111111111111";
		pc_pc <= "1111111111111111"; 
		alu_op_type <= 18;
		wait for 20 ns;
		
		pc_pc <= "0000000000000000";
		
		wait for 20 ns;
		
		pc_ifid <= "1111111111111111";
		
		wait for 20 ns;
		
		pc_ifid <= "0000000000000000";
		
		wait for 20 ns;
		
		pc_idex <= "1111111111111111";
		
		wait for 20 ns;
		
		pc_idex <= "0000000000000000";
		
		wait for 20 ns;
		
		alu_stall_request <= '1';
		
		wait for 20 ns;
		
		alu_stall_request <= '0';
		
		wait for 20 ns;
 
		
      wait;
   end process;

END;
