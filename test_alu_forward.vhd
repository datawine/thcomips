--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   18:15:19 11/22/2017
-- Design Name:   
-- Module Name:   G:/vhdl/finalpro/test_alu_forward.vhd
-- Project Name:  finalpro
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: alu_forward
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
 
ENTITY test_alu_forward IS
END test_alu_forward;
 
ARCHITECTURE behavior OF test_alu_forward IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT alu_forward
    PORT(
         operand : IN  integer;
         save_register_addr : IN  std_logic_vector(15 downto 0);
         rx_addr : IN  std_logic_vector(15 downto 0);
         ry_addr : IN  std_logic_vector(15 downto 0);
			alu_stall_request: OUT std_logic;
         rx_mux_en : OUT  std_logic;
         ry_mux_en : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
	signal clk : std_logic := '0';
   signal operand : integer := 0;
   signal save_register_addr : std_logic_vector(15 downto 0) := (others => '0');
   signal rx_addr : std_logic_vector(15 downto 0) := (others => '0');
   signal ry_addr : std_logic_vector(15 downto 0) := (others => '0');

 	--Outputs
	signal alu_stall_request: std_logic;
   signal rx_mux_en : std_logic;
   signal ry_mux_en : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: alu_forward PORT MAP (
          operand => operand,
          save_register_addr => save_register_addr,
          rx_addr => rx_addr,
          ry_addr => ry_addr,
			 alu_stall_request => alu_stall_request,
          rx_mux_en => rx_mux_en,
          ry_mux_en => ry_mux_en
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
		
		rx_addr <= "0000000000000001";
		ry_addr <= "0000000000000111";
		
		save_register_addr <= "0000000000000000";

		operand <= B_OP;
		
		wait for 20 ns;

		operand <= BTEQZ_OP;
		
		wait for 20 ns;

		operand <= SW_OP;
		
		wait for 20 ns;

		operand <= ADDSP3_OP;
		
		wait for 20 ns;

		save_register_addr <= "0000000000000001";
		
		wait for 20 ns;
		
		save_register_addr <= "0000000000000111";


      wait;
   end process;

END;
