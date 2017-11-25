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
	type states is (start_0, mem_write_1, mem_write_2, mem_read_1, mem_read_2, uart_read_1, uart_read_2, uart_read_3, uart_write_1, uart_write_2, uart_write_3, uart_write_4);
	shared variable current : states := start_0;
begin
	--'00' uart read, '01' uart write, '10' mem read, '11' mem write
	change_states: process(clk) is
	begin
		if (clk'event and clk = '1') then
			case current is
				when start_0 =>
					done <= '0';
					if (start = '1') then
						if (operand_type = "00") then
							if (input_addr = "1011111100000001") then
								output_content(0) <= tsre and tbre;
								output_content(1) <= data_ready;
								output_content(15 downto 2) <= "00000000000000";
								done <= '1';
							else
								ram1OE <= '1';
								ram1WE <= '1';
								ram1EN <= '1';
								current := uart_read_1;
							end if;
						elsif (operand_type = "01") then
							rdn <= '1';
							wrn <= '1';
							ram1EN <= '1';
							ram1WE <= '1';
							ram1OE <= '0';
							current := uart_write_1;
						elsif (operand_type = "10") then
							rdn <= '1';
							wrn <= '1';
							ram1EN <= '0';
							ram1WE <= '1';
							ram1OE <= '0';
							inout_RAM1_DATA <= (others => 'Z');
							current := mem_read_1;
						elsif (operand_type = "11") then
							rdn <= '1';
							wrn <= '1';
							ram1EN <= '0';
							ram1WE <= '1';
							ram1OE <= '1';
							current := mem_write_1;
						end if;
					else
						current := start_0;
					end if;
				when mem_read_1 =>
					output_RAM1(17 downto 16) <= "00";
					output_RAM1(15 downto 0) <= input_addr;
					current := mem_read_2;
				when mem_read_2 =>
					output_content <= inout_RAM1_DATA;
					current := start_0;
					done <= '1';
				when mem_write_1 =>
					ram1WE <= '0';
					inout_RAM1_DATA <= input_content;
					output_RAM1(17 downto 16) <= "00";
					output_RAM1(15 downto 0) <= input_addr;
					current := mem_write_2;
				when mem_write_2 =>
					ram1WE <= '1';
					current := start_0;
					done <= '1';
				when uart_read_1 =>
					inout_RAM1_DATA <= (others => 'Z');
					rdn <= '1';
					current := uart_read_2;
				when uart_read_2 =>
					if (data_ready = '1') then
						current := uart_read_3;
						rdn <= '0';
					else
						current := uart_read_1;
					end if;
				when uart_read_3 =>
					output_content(7 downto 0) <= inout_RAM1_DATA(7 downto 0);
					output_content(15 downto 8) <= "00000000";
					current := start_0;
					done <= '1';
				when uart_write_1 =>  -- high 8 or low 8?
					inout_RAM1_DATA(15 downto 8) <= "00000000";
					inout_RAM1_DATA(7 downto 0) <= input_content(7 downto 0);
					wrn <= '0';
					current := uart_write_2;
				when uart_write_2 =>
					wrn <= '1';
					current := uart_write_3;
				when uart_write_3 =>
					if (tbre = '1') then
						current := uart_write_4;
					else
						current := uart_write_3;
					end if;
				when uart_write_4 =>
					if (tsre = '1') then
						current := start_0;
						done <= '1';
					else
						current := uart_write_4;
					end if;
				when others =>
					current := start_0;
			end case;
		end if;
	end process;

end Behavioral;
