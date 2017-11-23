--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   16:04:01 11/22/2017
-- Design Name:   
-- Module Name:   G:/vhdl/finalpro/test_pc.vhd
-- Project Name:  finalpro
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: pc
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
 
ENTITY test_pc IS
END test_pc;
 
ARCHITECTURE behavior OF test_pc IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT pc
    PORT(
         clk : IN  std_logic;
         pc_in : IN  std_logic_vector(15 downto 0);
         pc_staller : IN  std_logic;
         pc_out : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal pc_in : std_logic_vector(15 downto 0) := "0000000000000000";
   signal pc_staller : std_logic := '0';
   signal pc_out : std_logic_vector(15 downto 0) := "0000000000000000";

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: pc PORT MAP (
          clk => clk,
          pc_in => pc_in,
          pc_staller => pc_staller,
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
		for i in 0 to 7 loop
			if (i = 4) then
				pc_staller <= '1';
			else
				pc_staller <= '0';
			end if;
			pc_in <= std_logic_vector(to_signed(i, 16));
			wait for CLK_period*10;
		end loop;

      wait;
   end process;

END;
