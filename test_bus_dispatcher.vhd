--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   15:34:46 11/22/2017
-- Design Name:   
-- Module Name:   C:/Users/leavan/Desktop/thcomips/test_bus_dispatcher.vhd
-- Project Name:  thcomips
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: bus_dispatcher
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
 
ENTITY test_bus_dispatcher IS
END test_bus_dispatcher;
 
ARCHITECTURE behavior OF test_bus_dispatcher IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT bus_dispatcher
    PORT(
         clk : IN  std_logic;
         rst : IN  std_logic;
         operand_type : IN  integer;
         pc_in : IN  std_logic_vector(15 downto 0);
         dm_addr : IN  std_logic_vector(15 downto 0);
         dm_content_in : IN  std_logic_vector(15 downto 0);
         mem_content_in : IN  std_logic_vector(15 downto 0);
         dm_signal : IN  std_logic;
         finish_signal : IN  std_logic;
         mem_start : OUT  std_logic;
         im_content_out : OUT  std_logic_vector(15 downto 0);
         dm_content_out : OUT  std_logic_vector(15 downto 0); 
         mem_addr : OUT  std_logic_vector(15 downto 0);
         mem_content : OUT  std_logic_vector(15 downto 0);
         mem_optype : OUT  std_logic_vector(1 downto 0);
         bus_stall_request : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal rst : std_logic := '0';
   signal operand_type : integer := 0;
   signal pc_in : std_logic_vector(15 downto 0) := (others => '0');
   signal dm_addr : std_logic_vector(15 downto 0) := (others => '0');
   signal dm_content_in : std_logic_vector(15 downto 0) := (others => '0');
   signal mem_content_in : std_logic_vector(15 downto 0) := (others => '0');
   signal dm_signal : std_logic := '0';
   signal finish_signal : std_logic := '0';

 	--Outputs
   signal mem_start : std_logic;
   signal im_content_out : std_logic_vector(15 downto 0);
   signal dm_content_out : std_logic_vector(15 downto 0);
   signal mem_addr : std_logic_vector(15 downto 0);
   signal mem_content : std_logic_vector(15 downto 0);
   signal mem_optype : std_logic_vector(1 downto 0);
   signal bus_stall_request : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: bus_dispatcher PORT MAP (
          clk => clk,
          rst => rst,
          operand_type => operand_type,
          pc_in => pc_in,
          dm_addr => dm_addr,
          dm_content_in => dm_content_in,
          mem_content_in => mem_content_in,
          dm_signal => dm_signal,
          finish_signal => finish_signal,
          mem_start => mem_start,
          im_content_out => im_content_out,
          dm_content_out => dm_content_out,
          mem_addr => mem_addr,
          mem_content => mem_content,
          mem_optype => mem_optype,
          bus_stall_request => bus_stall_request
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
		operand_type <= 16;
		wait for 20 ns;
		pc_in <= "1010101010101010";
		wait for 20 ns;
		dm_addr <= "0000000000000000";
		wait for 20 ns;
		dm_signal <= '0';
		wait for 20 ns;
		mem_content_in <= "0000001000000000";
		wait for 20 ns;
		dm_content_in <= "0111111111111110";
		
		wait for 5 ns;
		 
		finish_signal <= '1';
		
		wait for 15 ns;
		
		finish_signal <= '0';
		
		wait for 20 ns;
		
		dm_addr <= "1111111000000000";
		dm_signal <= '1';
		mem_content_in <= "0000000011111111";
		
		wait for 5 ns;
		
		finish_signal <= '1';
		
		wait for 15 ns;
		
		finish_signal <= '0'; 
		
		wait for 20 ns;
		
		operand_type <= 17;
		
		wait for 5 ns;
		
		finish_signal <= '1';
		
		wait for 15 ns;
		
		finish_signal <= '0';
		
		wait for 20 ns;
		
		operand_type <= 18;
		
		wait for 5 ns;
		
		finish_signal <= '1';
		
		wait for 15 ns;
		
		finish_signal <= '0';
		
		wait for 20 ns;
		
		operand_type <= 19;
		
		wait for 5 ns;
		
		finish_signal <= '1';
		
		wait for 15 ns;
		
		finish_signal <= '0';

      wait;
   end process;

END;
