--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   21:09:18 11/22/2017
-- Design Name:   
-- Module Name:   C:/Users/leavan/Desktop/thcomips/test_EXMEM.vhd
-- Project Name:  thcomips
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: EXMEM
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
 
ENTITY test_EXMEM IS
END test_EXMEM;
 
ARCHITECTURE behavior OF test_EXMEM IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT EXMEM
    PORT(
         clk : IN  std_logic;
         operand_type_in : IN  integer;
         pc_in : IN  std_logic_vector(15 downto 0);
         save_reg_addr_in : IN  std_logic_vector(15 downto 0);
         A_in : IN  std_logic_vector(15 downto 0);
         B_in : IN  std_logic_vector(15 downto 0);
         C_in : IN  std_logic_vector(15 downto 0);
         nop : IN  std_logic;
         hold : IN  std_logic;
         operand_type_out : OUT  integer;
         pc_out : OUT  std_logic_vector(15 downto 0);
         save_reg_addr_out : OUT  std_logic_vector(15 downto 0);
         A_out : OUT  std_logic_vector(15 downto 0);
         B_out : OUT  std_logic_vector(15 downto 0);
         C_out : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal operand_type_in : integer := 0;
   signal pc_in : std_logic_vector(15 downto 0) := (others => '0');
   signal save_reg_addr_in : std_logic_vector(15 downto 0) := (others => '0');
   signal A_in : std_logic_vector(15 downto 0) := (others => '0');
   signal B_in : std_logic_vector(15 downto 0) := (others => '0');
   signal C_in : std_logic_vector(15 downto 0) := (others => '0');
   signal nop : std_logic := '0';
   signal hold : std_logic := '0';

 	--Outputs
   signal operand_type_out : integer := 0;
   signal pc_out : std_logic_vector(15 downto 0);
   signal save_reg_addr_out : std_logic_vector(15 downto 0);
   signal A_out : std_logic_vector(15 downto 0);
   signal B_out : std_logic_vector(15 downto 0);
   signal C_out : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: EXMEM PORT MAP (
          clk => clk,
          operand_type_in => operand_type_in,
          pc_in => pc_in,
          save_reg_addr_in => save_reg_addr_in,
          A_in => A_in,
          B_in => B_in,
          C_in => C_in,
          nop => nop,
          hold => hold,
          operand_type_out => operand_type_out,
          pc_out => pc_out,
          save_reg_addr_out => save_reg_addr_out,
          A_out => A_out,
          B_out => B_out,
          C_out => C_out
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
		operand_type_in <= 16;
		pc_in <= "0000010000100000";
		save_reg_addr_in <= "0101010101010101";
		A_in <= "1000000000000000";
		B_in <= "0000000010000000";
		C_in <= "0000000000000001";
		nop <= '0';
		hold <= '0';
		
		wait for 20 ns;
		
		C_in <= "0101000000000000";
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
