--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:26:22 11/22/2017
-- Design Name:   
-- Module Name:   C:/Users/leavan/Desktop/thcomips/test_MEMWB.vhd
-- Project Name:  thcomips
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: MEMWB
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
 
ENTITY test_MEMWB IS
END test_MEMWB;
 
ARCHITECTURE behavior OF test_MEMWB IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT MEMWB
    PORT(
         clk : IN  std_logic;
         nop : IN  std_logic;
         hold : IN  std_logic;
         pc_in : IN  std_logic_vector(15 downto 0);
         DM_in : IN  std_logic_vector(15 downto 0);
         save_register_addr_in : IN  std_logic_vector(15 downto 0);
         pc_out : OUT  std_logic_vector(15 downto 0);
         DM_out : OUT  std_logic_vector(15 downto 0);
         save_register_addr_out : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal nop : std_logic := '0';
   signal hold : std_logic := '0';
   signal pc_in : std_logic_vector(15 downto 0) := (others => '0');
   signal DM_in : std_logic_vector(15 downto 0) := (others => '0');
   signal save_register_addr_in : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal pc_out : std_logic_vector(15 downto 0);
   signal DM_out : std_logic_vector(15 downto 0);
   signal save_register_addr_out : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: MEMWB PORT MAP (
          clk => clk,
          nop => nop,
          hold => hold,
          pc_in => pc_in,
          DM_in => DM_in,
          save_register_addr_in => save_register_addr_in,
          pc_out => pc_out,
          DM_out => DM_out,
          save_register_addr_out => save_register_addr_out
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
		nop <= '0';
		hold <= '0';
		pc_in <= "0101010101010101";
		DM_in <= "1111111110000000";
		save_register_addr_in <= "1100000000011111";
		wait for 20 ns;

		DM_in <= "0101000000000000";
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
