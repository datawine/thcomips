--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:06:52 11/21/2017
-- Design Name:   
-- Module Name:   C:/Users/leavan/Desktop/thcomips/test_operand_analyse.vhd
-- Project Name:  thcomips
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: operand_analyse
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
 
ENTITY test_operand_analyse IS
END test_operand_analyse;
 
ARCHITECTURE behavior OF test_operand_analyse IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT operand_analyse
    PORT(
         instruct : IN  std_logic_vector(15 downto 0);
         operand : OUT  integer;
         A_addr : OUT  std_logic_vector(3 downto 0);
         B_addr : OUT  std_logic_vector(3 downto 0);
         save_addr : OUT  std_logic_vector(3 downto 0);
         imm : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;


   --Inputs
   signal instruct : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
	signal clock : std_logic := '0';
   signal operand : integer;
   signal A_addr : std_logic_vector(3 downto 0);
   signal B_addr : std_logic_vector(3 downto 0);
   signal save_addr : std_logic_vector(3 downto 0);
   signal imm : std_logic_vector(15 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: operand_analyse PORT MAP (
          instruct => instruct,
          operand => operand,
          A_addr => A_addr,
          B_addr => B_addr,
          save_addr => save_addr,
          imm => imm
        );

   -- Clock process definitions
   clock_process :process
   begin
		clock <= '0';
		wait for clock_period/2;
		clock <= '1';
		wait for clock_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for clock_period*10;
		
		instruct <= "0100100100000010";
		
		wait for 20 ns;
		
		instruct <= "0100000110000010";
		
		wait for 20 ns;
		
		instruct <= "0000000100000010";
		
		wait for 20 ns;
		
		instruct <= "0110001100000010";
		
		wait for 20 ns;
		
		instruct <= "1110000110001101";
		
		wait for 20 ns;
		
		instruct <= "1110100110001100";
		
		wait for 20 ns;
		
		instruct <= "0001000000000010";
		
		wait for 20 ns;
		
		instruct <= "0010000100000010";
		
		wait for 20 ns;
		
		instruct <= "0010100100000010";
		
		wait for 20 ns;
		
		instruct <= "0110000000000010";
		 
		wait for 20 ns;
		
		instruct <= "0110000100000010";
		
		wait for 20 ns;
		
		instruct <= "1110100110001010";
		
		wait for 20 ns;
		
		instruct <= "1110100100000000";
		
		wait for 20 ns;
		
		instruct <= "0110100100000010";
		
		wait for 20 ns;
		
		instruct <= "1001100110000010";
		
		wait for 20 ns;
		
		instruct <= "1001000100000010";
		
		wait for 20 ns;
		
		instruct <= "1111000100000000";
		
		wait for 20 ns;
		
		instruct <= "1110100101000000";
		
		wait for 20 ns;
		
		instruct <= "1111000100000001";
		
		wait for 20 ns;
		
		instruct <= "0110010000100000";
		
		wait for 20 ns;
		
		instruct <= "1110100110001111";
		
		wait for 20 ns;
		
		instruct <= "0000100000000000";
		
		wait for 20 ns;
		
		instruct <= "1110100110001101";
		
		wait for 20 ns;
		
		instruct <= "0011000110001000";
		
		wait for 20 ns;
		
		instruct <= "1110100110000100";
		
		wait for 20 ns;
		
		instruct <= "0101000100000010";
		
		wait for 20 ns;
		
		instruct <= "0011000110001011";
		
		wait for 20 ns;
		
		instruct <= "1110000110001111";
		
		wait for 20 ns;
		
		instruct <= "1101100110000010";
		
		wait for 20 ns;
		
		instruct <= "1101000100000010";
		
		wait for 20 ns;

      -- insert stimulus here 

      wait;
   end process;

END;
