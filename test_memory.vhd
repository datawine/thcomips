--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   22:07:51 11/22/2017
-- Design Name:   
-- Module Name:   C:/Users/leavan/Desktop/thcomips/test_memory.vhd
-- Project Name:  thcomips
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: memory
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
 
ENTITY test_memory IS
END test_memory;
 
ARCHITECTURE behavior OF test_memory IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT memory
    PORT(
         clk : IN  std_logic;
         input_addr : IN  std_logic_vector(15 downto 0);
         input_content : IN  std_logic_vector(15 downto 0);
         start : IN  std_logic;
         tbre : IN  std_logic;
         tsre : IN  std_logic;
         data_ready : IN  std_logic;
         operand_type : IN  std_logic_vector(1 downto 0);
         output_RAM1 : OUT  std_logic_vector(17 downto 0);
         inout_RAM1_DATA : INOUT  std_logic_vector(15 downto 0);
         ram1OE : OUT  std_logic;
         ram1WE : OUT  std_logic;
         ram1EN : OUT  std_logic;
         output_content : OUT  std_logic_vector(15 downto 0);
         done : OUT  std_logic;
         wrn : OUT  std_logic;
         rdn : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal clk : std_logic := '0';
   signal input_addr : std_logic_vector(15 downto 0) := (others => '0');
   signal input_content : std_logic_vector(15 downto 0) := (others => '0');
   signal start : std_logic := '0';
   signal tbre : std_logic := '0';
   signal tsre : std_logic := '0';
   signal data_ready : std_logic := '0';
   signal operand_type : std_logic_vector(1 downto 0) := (others => '0');

	--BiDirs
   signal inout_RAM1_DATA : std_logic_vector(15 downto 0);

 	--Outputs
   signal output_RAM1 : std_logic_vector(17 downto 0);
   signal ram1OE : std_logic;
   signal ram1WE : std_logic;
   signal ram1EN : std_logic;
   signal output_content : std_logic_vector(15 downto 0);
   signal done : std_logic;
   signal wrn : std_logic;
   signal rdn : std_logic;

   -- Clock period definitions
   constant clk_period : time := 10 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: memory PORT MAP (
          clk => clk,
          input_addr => input_addr,
          input_content => input_content,
          start => start,
          tbre => tbre,
          tsre => tsre,
          data_ready => data_ready,
          operand_type => operand_type,
          output_RAM1 => output_RAM1,
          inout_RAM1_DATA => inout_RAM1_DATA,
          ram1OE => ram1OE,
          ram1WE => ram1WE,
          ram1EN => ram1EN,
          output_content => output_content,
          done => done,
          wrn => wrn,
          rdn => rdn
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

      wait;
   end process;

END;
