--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   11:49:48 11/22/2017
-- Design Name:   
-- Module Name:   C:/Users/leavan/Desktop/thcomips/test_DM.vhd
-- Project Name:  thcomips
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: DM
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
 
ENTITY test_DM IS
END test_DM;
 
ARCHITECTURE behavior OF test_DM IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT DM
    PORT(
         A : IN  std_logic_vector(15 downto 0);
         B : IN  std_logic_vector(15 downto 0);
         C : IN  std_logic_vector(15 downto 0);
         operand_type : IN  integer;
         bus_optype : OUT  integer;
         bus_content_in : IN  std_logic_vector(15 downto 0);
			bus_content_out : out std_logic_vector(15 downto 0);
         send_signal : OUT  std_logic;
         bus_addr : OUT  std_logic_vector(15 downto 0);
         DM_out : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal A : std_logic_vector(15 downto 0) := (others => '0');
   signal B : std_logic_vector(15 downto 0) := (others => '0');
   signal C : std_logic_vector(15 downto 0) := (others => '0');
   signal operand_type : integer := 0;

	--BiDirs
   signal bus_content_in : std_logic_vector(15 downto 0);
	signal bus_content_out : std_logic_vector(15 downto 0);

 	--Outputs
   signal bus_optype : integer;
   signal send_signal : std_logic;
   signal bus_addr : std_logic_vector(15 downto 0);
   signal DM_out : std_logic_vector(15 downto 0);
	signal clock : std_logic;
   -- No clocks detected in port list. Replace <clock> below with 
   -- appropriate port name 
 
   constant clock_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: DM PORT MAP (
          A => A,
          B => B,
          C => C,
          operand_type => operand_type,
          bus_optype => bus_optype,
          bus_content_in => bus_content_in,
			 bus_content_out => bus_content_out,
          send_signal => send_signal,
          bus_addr => bus_addr,
          DM_out => DM_out
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
      -- insert stimulus here 
		operand_type <= 16;
		A <= "0000000000000001";
		B <= "1010101010101010";
		C <= "0000000010000000";
		bus_content_in <= "1010101010101010";
		
		wait for 20 ns;
		
		operand_type <= 17;
		
		wait for 20 ns;
		
		operand_type <= 18;
		
		wait for 20 ns;
		
		operand_type <= 19;
		
      wait;
   end process;

END;
