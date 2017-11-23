--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:49:41 11/22/2017
-- Design Name:   
-- Module Name:   G:/vhdl/finalpro/test_mux_2.vhd
-- Project Name:  finalpro
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mux_2
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
 
ENTITY test_mux_2 IS
END test_mux_2;
 
ARCHITECTURE behavior OF test_mux_2 IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mux_2
    PORT(
         mux_EN : IN  std_logic;
         src_1 : IN  std_logic_vector(15 downto 0);
         src_2 : IN  std_logic_vector(15 downto 0);
         output : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
	signal clk : std_logic := '0';
   signal mux_EN : std_logic := '0';
   signal src_1 : std_logic_vector(15 downto 0) := (others => '0');
   signal src_2 : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal output : std_logic_vector(15 downto 0);
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mux_2 PORT MAP (
          mux_EN => mux_EN,
          src_1 => src_1,
          src_2 => src_2,
          output => output
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
		src_1 <= "1111111111111111";
		src_2 <= "0000000000000000";
		
		mux_EN <= '1';
		
		wait for 200 ns;
		
		mux_EN <= '0';
		
		wait for 200 ns;
		mux_EN <= '1';

      wait;
   end process;

END;
