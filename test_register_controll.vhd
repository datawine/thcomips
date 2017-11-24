--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   12:40:40 11/22/2017
-- Design Name:   
-- Module Name:   C:/Users/leavan/Desktop/thcomips/test_register_controll.vhd
-- Project Name:  thcomips
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: register_controll
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
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_register_controll IS
END test_register_controll;
 
ARCHITECTURE behavior OF test_register_controll IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT register_controll 
    PORT(
         pc_in : IN  std_logic_vector(15 downto 0);
         A_addr : IN  std_logic_vector(3 downto 0);
         B_addr : IN  std_logic_vector(3 downto 0);
         write_addr : IN  std_logic_vector(3 downto 0);
         write_content : IN  std_logic_vector(15 downto 0);
         A : OUT  std_logic_vector(15 downto 0);
         B : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal pc_in : std_logic_vector(15 downto 0) := (others => '0');
   signal A_addr : std_logic_vector(3 downto 0) := (others => '0');
   signal B_addr : std_logic_vector(3 downto 0) := (others => '0');
   signal write_addr : std_logic_vector(3 downto 0) := (others => '0');
   signal write_content : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal A : std_logic_vector(15 downto 0);
   signal B : std_logic_vector(15 downto 0);

 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: register_controll PORT MAP (
          pc_in => pc_in,
          A_addr => A_addr,
          B_addr => B_addr,
          write_addr => write_addr,
          write_content => write_content,
          A => A,
          B => B
        );


   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	
		pc_in <= "0101010101010101";
		wait for 20 ns;
		for addr in 0 to 10 loop
			write_content <= conv_std_logic_vector(addr, 16);
			write_addr <= conv_std_logic_vector(addr, 4);
			wait for 20 ns;
		end loop;
		for addr in 0 to 11 loop
			A_addr <= conv_std_logic_vector(addr, 4);
			B_addr <= conv_std_logic_vector(addr, 4);
			wait for 20 ns;
		end loop;
      -- insert stimulus here 

      wait;
   end process;

END;
