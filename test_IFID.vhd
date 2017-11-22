--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:53:37 11/22/2017
-- Design Name:   
-- Module Name:   C:/Users/leavan/Desktop/thcomips/test_IFID.vhd
-- Project Name:  thcomips
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: IFID
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
 
ENTITY test_IFID IS
END test_IFID;
 
ARCHITECTURE behavior OF test_IFID IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT IFID
    PORT(
         clk : IN  std_logic;
         pc_in : IN  std_logic_vector(15 downto 0);
         hold : IN  std_logic;
         nop : IN  std_logic;
         instruction_in : IN  std_logic_vector(15 downto 0);
         instruction_out : OUT  std_logic_vector(15 downto 0);
         pc_out : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal pc_in : std_logic_vector(15 downto 0) := (others => '0');
   signal hold : std_logic := '0';
   signal nop : std_logic := '0';
   signal instruction_in : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal instruction_out : std_logic_vector(15 downto 0);
   signal pc_out : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: IFID PORT MAP (
          clk => clk,
          pc_in => pc_in,
          hold => hold,
          nop => nop,
          instruction_in => instruction_in,
          instruction_out => instruction_out,
          pc_out => pc_out
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
		instruction_in <= "0000001000000000";
		pc_in <= "1010101011111111";
		nop <= '0';
		hold <= '0';
		
		wait for 20 ns;
		
		instruction_in <= "0101000000000000";
		hold <= '1';
		
		wait for 20 ns;
		
		hold <= '0';
		
		wait for 20 ns;
		
		nop <= '1';
		
		wait for 20 ns;
		
		nop <= '0';
		
		wait for 20 ns;

      wait;
   end process;

END;
