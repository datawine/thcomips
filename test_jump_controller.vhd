--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:16:29 11/22/2017
-- Design Name:   
-- Module Name:   C:/Users/leavan/Desktop/thcomips/test_jump_controller.vhd
-- Project Name:  thcomips
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: jump_controller
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
 
ENTITY test_jump_controller IS
END test_jump_controller;
 
ARCHITECTURE behavior OF test_jump_controller IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT jump_controller
    PORT(
         operand : IN  integer;
         pc_in : IN  std_logic_vector(15 downto 0);
         A : IN  std_logic_vector(15 downto 0);
         B : IN  std_logic_vector(15 downto 0);
         imm : IN  std_logic_vector(15 downto 0);
         jump_target : OUT  std_logic_vector(15 downto 0);
         jump_enable : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal operand : integer := 0;
   signal pc_in : std_logic_vector(15 downto 0) := (others => '0');
   signal A : std_logic_vector(15 downto 0) := (others => '0');
   signal B : std_logic_vector(15 downto 0) := (others => '0');
   signal imm : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal jump_target : std_logic_vector(15 downto 0);
   signal jump_enable : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: jump_controller PORT MAP (
          operand => operand,
          pc_in => pc_in,
          A => A,
          B => B,
          imm => imm,
          jump_target => jump_target,
          jump_enable => jump_enable
        );

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		pc_in <= "0000000000001111";
		A <= "0000000000000011";
		B <= "0000000000000111";
		imm <= "0000000000000001";
		operand <= 1;
		wait for 20 ns;

		operand <= 20;
		wait for 20 ns;
		
		operand <= 21;
		wait for 20 ns;
		
		operand <= 22;
		wait for 20 ns;
		
		operand <= 23;
		wait for 20 ns;
		
		A <= "0000000000000000";
		B <= "0000000000000000";
		operand <= 21;
		wait for 20 ns;
		
		operand <= 22;
		wait for 20 ns;
		
		operand <= 23;
		wait for 20 ns;
		
		operand <= 25;
		wait for 20 ns;
		
		A <= "0000000000000011";
		operand <= 24;
		wait for 20 ns;
		
		operand <= 25;
		wait for 20 ns;

      -- insert stimulus here 

      wait;
   end process;

END;
