--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:30:03 11/22/2017
-- Design Name:   
-- Module Name:   G:/vhdl/finalpro/test_alu.vhd
-- Project Name:  finalpro
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: alu
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
Library work;
use work.cpuconstant.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_alu IS
END test_alu;
 
ARCHITECTURE behavior OF test_alu IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT alu
    PORT(
         operand : IN  integer;
         A : IN  std_logic_vector(15 downto 0);
         B : IN  std_logic_vector(15 downto 0);
         imm : IN  std_logic_vector(15 downto 0);
         save_register_data : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
	signal clk : std_logic := '0';
   signal operand : integer := 0;
   signal A : std_logic_vector(15 downto 0) := (others => '0');
   signal B : std_logic_vector(15 downto 0) := (others => '0');
   signal imm : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal save_register_data : std_logic_vector(15 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: alu PORT MAP (
          operand => operand,
          A => A,
          B => B,
          imm => imm,
          save_register_data => save_register_data
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
		
		A <= "0000000000001010";
		B <= "0000000000001010";
		imm <= "0000000000100000";
		
		for i in 0 to 16 loop
			operand <= i;
			
			wait for 50 ns;
		
		end loop;


      wait;
   end process;

END;
