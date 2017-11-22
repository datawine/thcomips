--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   20:32:35 11/22/2017
-- Design Name:   
-- Module Name:   C:/Users/leavan/Desktop/thcomips/test_IDEX.vhd
-- Project Name:  thcomips
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: IDEX
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
 
ENTITY test_IDEX IS
END test_IDEX;
 
ARCHITECTURE behavior OF test_IDEX IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT IDEX
    PORT(
         clk : IN  std_logic;
         operand_type_in : IN  integer;
         save_reg_addr_in : IN  std_logic_vector(15 downto 0);
         A_in : IN  std_logic_vector(15 downto 0);
         B_in : IN  std_logic_vector(15 downto 0);
         imm_in : IN  std_logic_vector(15 downto 0);
         pc_in : IN  std_logic_vector(15 downto 0);
         nop : IN  std_logic;
         hold : IN  std_logic;
         operand_type_out : OUT  integer;
         save_reg_addr_out : OUT  std_logic_vector(15 downto 0);
         A_out : OUT  std_logic_vector(15 downto 0);
         B_out : OUT  std_logic_vector(15 downto 0);
         imm_out : OUT  std_logic_vector(15 downto 0);
         pc_out : OUT  std_logic_vector(15 downto 0)
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal operand_type_in : integer := 0;
   signal save_reg_addr_in : std_logic_vector(15 downto 0) := (others => '0');
   signal A_in : std_logic_vector(15 downto 0) := (others => '0');
   signal B_in : std_logic_vector(15 downto 0) := (others => '0');
   signal imm_in : std_logic_vector(15 downto 0) := (others => '0');
   signal pc_in : std_logic_vector(15 downto 0) := (others => '0');
   signal nop : std_logic := '0';
   signal hold : std_logic := '0';

 	--Outputs
   signal operand_type_out : integer;
   signal save_reg_addr_out : std_logic_vector(15 downto 0);
   signal A_out : std_logic_vector(15 downto 0);
   signal B_out : std_logic_vector(15 downto 0);
   signal imm_out : std_logic_vector(15 downto 0);
   signal pc_out : std_logic_vector(15 downto 0);

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: IDEX PORT MAP (
          clk => clk,
          operand_type_in => operand_type_in,
          save_reg_addr_in => save_reg_addr_in,
          A_in => A_in,
          B_in => B_in,
          imm_in => imm_in,
          pc_in => pc_in,
          nop => nop,
          hold => hold,
          operand_type_out => operand_type_out,
          save_reg_addr_out => save_reg_addr_out,
          A_out => A_out,
          B_out => B_out,
          imm_out => imm_out,
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

		operand_type_in <= 14;
		save_reg_addr_in <= "0101010101010101";
		A_in <= "0000001000000000";
		B_in <= "1111000000111111";
		imm_in <= "1010000000000000";
		pc_in <= "1010101011111111";
		nop <= '0';
		hold <= '0';
		
		wait for 20 ns;
		
		A_in <= "0000000000010101";
		hold <= '1';
		
		wait for 20 ns;
		
		hold <= '0';
		
		wait for 20 ns;
		
		nop <= '1';
		
		wait for 20 ns;
		
		nop <= '0';
		
		wait for 20 ns;

      -- insert stimulus here 

      wait;
   end process;

END;
