----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    00:05:04 11/24/2017 
-- Design Name: 
-- Module Name:    memory - Behavioral 
-- Project Name: 
-- Target Devices: 
-- Tool versions: 
-- Description: 
--
-- Dependencies: 
--
-- Revision: 
-- Revision 0.01 - File Created
-- Additional Comments: 
--
----------------------------------------------------------------------------------
library IEEE;
use IEEE.STD_LOGIC_1164.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity memory is
	Port(
		clk: in std_logic;
		input_addr, input_content: in std_logic_vector(15 downto 0);
		start: in std_logic;
		tbre, tsre, data_ready: in std_logic;
		operand_type: in std_logic_vector(1 downto 0);
		output_RAM1: out std_logic_vector(17 downto 0);
		inout_RAM1_DATA: inout std_logic_vector(15 downto 0);
		ram1OE, ram1WE, ram1EN: out std_logic;
		output_content : out std_logic_vector(15 downto 0);
		done: out std_logic;
		wrn, rdn: out std_logic
	);
end memory;

architecture Behavioral of memory is
	type states is (start_0, mem_write_1, mem_write_2, mem_read_1, mem_read_2, uart_read_1, uart_read_2, uart_read_3, uart_write_1, uart_write_2, uart_write_3, uart_write_4, done_state);
	shared variable current : states := start_0;
	signal state_signal, uart_out_signal: std_logic_vector(15 downto 0);
	signal uart_signal: std_logic_vector(15 downto 0);
	signal mem_signal: std_logic_vector(15 downto 0);
begin
	done <= '1';

	state_signal(0) <= tsre and tbre;
	state_signal(1) <= data_ready;
	state_signal(15 downto 2) <= "00000000000000";
	
	uart_out_signal(7 downto 0) <= inout_RAM1_DATA(7 downto 0);
	uart_out_signal(15 downto 8) <= "00000000";

	with input_addr select
		uart_signal <=
			state_signal when "1011111100000001",
			uart_out_signal when others;
	
	mem_signal <= inout_RAM1_DATA;
	
	with operand_type select
		output_content <=
			uart_signal when "00",
			mem_signal when others;

	--'00' uart read, '01' uart write, '10' mem read, '11' mem write
	change_states: process(clk) is
	begin
		if (clk = '0') then
--			if (clk = '0') then
--				if (start = '1') then
				if (operand_type = "00") then -- read uart
					if (input_addr /= "1011111100000001") then	
						ram1EN <= '1';
						ram1WE <= '1';
						ram1OE <= '1';
					end if;
				elsif (operand_type = "01") then -- write uart
					rdn <= '1';
					wrn <= '0';
					ram1EN <= '1';
					ram1WE <= '1';
					ram1OE <= '0';
					inout_RAM1_DATA(15 downto 8) <= "00000000";
					inout_RAM1_DATA(7 downto 0) <= input_content(7 downto 0);
				elsif (operand_type = "10") then -- read memory
					rdn <= '1';
					wrn <= '1';
					ram1EN <= '0';
					ram1WE <= '1';
					ram1OE <= '0';
					inout_RAM1_DATA <= (others => 'Z');
					output_RAM1(17 downto 16) <= "00";
					output_RAM1(15 downto 0) <= input_addr;
				elsif (operand_type = "11") then -- write memory
					rdn <= '1';
					wrn <= '1';
					ram1EN <= '0';
					ram1OE <= '1';
					ram1WE <= '0';
					inout_RAM1_DATA <= input_content;
					output_RAM1(17 downto 16) <= "00";
					output_RAM1(15 downto 0) <= input_addr;
				end if;
				
--				end if;
		elsif (clk = '1') then
			done <= '1';
			rdn <= '1';
			wrn <= '1';
			ram1EN <= '1';
			ram1OE <= '1';
			ram1WE <= '1';
			inout_RAM1_DATA <= (others => 'Z');
		end if;	
	end process;

end Behavioral;
