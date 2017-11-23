--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   13:53:48 11/22/2017
-- Design Name:   
-- Module Name:   G:/vhdl/finalpro/test_adder_1.vhd
-- Project Name:  finalpro
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: adder_1
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
use ieee.numeric_std.all;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_adder_1 IS
END test_adder_1;
 
ARCHITECTURE behavior OF test_adder_1 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT adder_1
    PORT(
         pc_in : IN  std_logic_vector(15 downto 0);
         pc_out : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
	signal CLK : std_logic;
   signal pc_in : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal pc_out : std_logic_vector(15 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant CLK_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: adder_1 PORT MAP (
          pc_in => pc_in,
          pc_out => pc_out
        );

   -- Clock process definitions
   CLK_process :process
   begin
		CLK <= '0';
		wait for CLK_period/2;
		CLK <= '1';
		wait for CLK_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      wait for CLK_period*10;

      -- insert stimulus here 
		for i in 0 to 7 loop
			pc_in <= std_logic_vector(to_signed(i, 16));
			wait for CLK_period*10;
		end loop;

      wait;
   end process;

END;
