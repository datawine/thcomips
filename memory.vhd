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
		cnt_clk : in std_logic;
		clk_2: in std_logic;
		input_addr, input_content: in std_logic_vector(15 downto 0);
		start: in std_logic;
		tbre, tsre, data_ready: in std_logic;
		operand_type: in std_logic_vector(1 downto 0);
		output_RAM1: out std_logic_vector(17 downto 0);
		inout_RAM1_DATA: inout std_logic_vector(15 downto 0);
		ram1OE, ram1WE, ram1EN: out std_logic;
		output_content : out std_logic_vector(15 downto 0);
		done: out std_logic;
		control_out: out std_logic;
		wrn, rdn: out std_logic
	);
end memory;

architecture Behavioral of memory is
	type states is (start_0, mem_write_1, mem_write_2, mem_read_1, mem_read_2, uart_read_1, uart_read_2, uart_read_3, uart_write_1, uart_write_2, uart_write_3, uart_write_4, done_state);
	shared variable current : states := start_0;
	signal state_signal, uart_out_signal: std_logic_vector(15 downto 0);
	signal uart_signal: std_logic_vector(15 downto 0);
	signal mem_signal: std_logic_vector(15 downto 0);
	
	signal control_signal: std_logic := '1';

begin
	process(clk_2) is
	begin
		if(clk_2'event and clk_2 = '0') then
			if(clk = '1') then
				control_signal <= '0';
			else
				control_signal <= '1';
			end if;
		end if;
	end process;

	done <= '1';
	control_out <= control_signal;

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

	with operand_type select
		inout_RAM1_DATA <=
			input_content when "01",
			input_content when "11",
			(others => 'Z') when others;
	
	output_RAM1(17 downto 16) <= "00";
	output_RAM1(15 downto 0) <= input_addr;
	
	with operand_type select
		wrn <=
			not control_signal when "01",
			'1' when others;
	
	with operand_type select
		ram1EN <=
			clk when "10",
			control_signal when "11",
			'1' when others;
	
	with operand_type select
		ram1WE <=
			control_signal when "11",
			'1' when others;
			
	with operand_type select
		ram1OE <=
			clk when "10",
			'1' when others;
	
	
	change_rdn: process(cnt_clk, clk_2) is
	begin
		if (clk_2 = '0' and cnt_clk = '1') then
			if (operand_type = "00") then -- read uart
				if (input_addr /= "1011111100000001") then	
					rdn <= '0';
				end if;
			end if;
		elsif (clk_2 = '0' and cnt_clk = '0') then
			rdn <= '1';
		end if;
	end process;

end Behavioral;
