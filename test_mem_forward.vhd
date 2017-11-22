--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:43:59 11/22/2017
-- Design Name:   
-- Module Name:   C:/Users/leavan/Desktop/thcomips/test_mem_forward.vhd
-- Project Name:  thcomips
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: mem_forward
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
Library work;
use work.cpuconstant.ALL;
 
-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--USE ieee.numeric_std.ALL;
 
ENTITY test_mem_forward IS
END test_mem_forward;
 
ARCHITECTURE behavior OF test_mem_forward IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT mem_forward
    PORT(
         operand : IN  integer;
         save_register_addr : IN  std_logic_vector(15 downto 0);
         rx_addr : IN  std_logic_vector(15 downto 0);
         ry_addr : IN  std_logic_vector(15 downto 0);
         rx_mux_en : OUT  std_logic;
         ry_mux_en : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal operand : integer := 0;
   signal save_register_addr : std_logic_vector(15 downto 0) := (others => '0');
   signal rx_addr : std_logic_vector(15 downto 0) := (others => '0');
   signal ry_addr : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
   signal rx_mux_en : std_logic;
   signal ry_mux_en : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: mem_forward PORT MAP (
          operand => operand,
          save_register_addr => save_register_addr,
          rx_addr => rx_addr,
          ry_addr => ry_addr,
          rx_mux_en => rx_mux_en,
          ry_mux_en => ry_mux_en
        );



   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;	

      -- insert stimulus here 
		operand <= 16;
		save_register_addr <= "0101010101010101";
		rx_addr <= "0111000001101000";
		ry_addr <= "1111000000000000";
		wait for 20 ns;
		
		rx_addr <= "0101010101010101";
		
		wait for 20 ns;
		
		rx_addr <= "0000010000000000";
		ry_addr <= "0101010101010101";
		
		
      wait;
   end process;

END;
