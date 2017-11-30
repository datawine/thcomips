--------------------------------------------------------------------------------
-- Company: 
-- Engineer:
--
-- Create Date:   04:03:32 11/26/2017
-- Design Name:   
-- Module Name:   G:/vhdl/thcomips/test_cpu_top.vhd
-- Project Name:  thcomips
-- Target Device:  
-- Tool versions:  
-- Description:   
-- 
-- VHDL Test Bench Created by ISE for module: cpu_top
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
 
ENTITY test_cpu_top IS
END test_cpu_top;
 
ARCHITECTURE behavior OF test_cpu_top IS 
 
    -- Component Declaration for the Unit Under Test (UUT)
 
    COMPONENT cpu_top
    PORT(
         sys_clk : IN  std_logic;
         press_clk : IN  std_logic;
         tbre : IN  std_logic;
         tsre : IN  std_logic;
         data_ready : IN  std_logic;
			
			start_out : out std_logic;
			finish_out : out std_logic;
			
         inout_RAM1_DATA : INOUT  std_logic_vector(15 downto 0);
         LED : OUT  std_logic_vector(15 downto 0);
         digit : OUT  std_logic_vector(6 downto 0);
         output_RAM1 : OUT  std_logic_vector(17 downto 0);
         ram1OE : OUT  std_logic;
         ram1WE : OUT  std_logic;
         ram1EN : OUT  std_logic;
         wrn : OUT  std_logic;
         rdn : OUT  std_logic
        );
    END COMPONENT;
    

   --Inputs
   signal sys_clk : std_logic := '0';
   signal press_clk : std_logic := '0';
   signal tbre : std_logic := '0';
   signal tsre : std_logic := '0';
   signal data_ready : std_logic := '0';

	--BiDirs
   signal inout_RAM1_DATA : std_logic_vector(15 downto 0);

 	--Outputs
   signal LED : std_logic_vector(15 downto 0);
   signal digit : std_logic_vector(6 downto 0);
   signal output_RAM1 : std_logic_vector(17 downto 0);
   signal ram1OE : std_logic;
   signal ram1WE : std_logic;
   signal ram1EN : std_logic;
   signal wrn : std_logic;
   signal rdn : std_logic;
	signal start_out : std_logic;
	signal finish_out : std_logic;

   -- Clock period definitions
   constant sys_clk_period : time := 2 ns;
   constant press_clk_period : time := 20 ns;
 
BEGIN
 
	-- Instantiate the Unit Under Test (UUT)
   uut: cpu_top PORT MAP (
          sys_clk => sys_clk,
          press_clk => press_clk,
          tbre => tbre,
          tsre => tsre,
          data_ready => data_ready,
          inout_RAM1_DATA => inout_RAM1_DATA,
          LED => LED,
          digit => digit,
			 start_out => start_out,
			 finish_out => finish_out,
          output_RAM1 => output_RAM1,
          ram1OE => ram1OE,
          ram1WE => ram1WE,
          ram1EN => ram1EN,
          wrn => wrn,
          rdn => rdn
        );

   -- Clock process definitions
   sys_clk_process :process
   begin
		sys_clk <= '0';
		wait for sys_clk_period/2;
		sys_clk <= '1';
		wait for sys_clk_period/2;
   end process;
 
   press_clk_process :process
   begin
		press_clk <= '0';
		wait for press_clk_period/2;
		press_clk <= '1';
		wait for press_clk_period/2;
   end process;
 

   -- Stimulus process
   stim_proc: process
   begin		
      -- hold reset state for 100 ns.
      wait for 100 ns;
		wait for 10 ns;
		
		inout_ram1_data <= "0110111010111111";
		data_ready <= '1';
		
		wait for 20 ns;
		
		inout_ram1_data <= "0011011011000000";
		
		wait for 20 ns;
		
		inout_ram1_data <= "0100111000010000";
		
		wait for 20 ns;
		
		inout_ram1_data <= "0110100000000000";
		
		wait for 20 ns;
		
		inout_ram1_data <= "1101111000000000";
		
		wait for 20 ns;
		
		inout_ram1_data <= "1101111000000001";
		
		wait for 20 ns; 
		
		inout_ram1_data <= "1101111000000010";
		
		wait for 20 ns;
		
		inout_ram1_data <= "1101111000000011";
		
		wait for 80 ns;
		
		inout_ram1_data <= "1101111000000100";
		
		wait for 20 ns;
		
		inout_ram1_data <= "1101111000000101";
		
		wait for 20 ns;
		
		inout_ram1_data <= "1101111000000110";
		
		wait for 80 ns;
		
		inout_ram1_data <= "1101111000000111";
		
		wait for 20 ns;
		
		inout_ram1_data <= "0110111011001111";
		
		wait for 20 ns;
		
		inout_ram1_data <= "0011011011010000";
		
		wait for 40 ns;
		
		inout_ram1_data <= "0100111000000001";
		
		wait for 20 ns;
		
		inout_ram1_data <= "1001111000000000";
		
		wait for 20 ns;
		
		inout_ram1_data <= "0110111000000001";
		
		wait for 20 ns;
		
		inout_ram1_data <= "1110100011011101";
		
		wait for 40 ns;
		
		inout_ram1_data <= "0000100000000000";
      -- insert stimulus here 

      wait;
   end process;

END;
