----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    15:44:12 11/23/2017 
-- Design Name: 
-- Module Name:    uart - Behavioral 
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

entity uart is
	Port(
		clk, rst: in std_logic;
		access_type: in std_logic; -- 0 for read, 1 for write
		input: in std_logic_vector(7 downto 0);
		tbre, tsre, data_ready: in std_logic;
		inout_RAM_DATA: inout std_logic_vector(7 downto 0);
		ram1OE, ram1WE, ram1EN: out std_logic;
		wrn, rdn: out std_logic
	);
end uart;

architecture Behavioral of uart is
	type states is (read_0, read_1, read_2, read_3, write_0, write_1, write_2, write_3, write_4, done);
	shared variable uart_state : states := read_0;
begin
	change_state: process(clk, rst, tbre, tsre, data_ready) is
	variable num: integer;
	variable tmp_tsre, tmp_tbre, tmp_data_ready: std_logic;
	begin
		ram1EN <= '1';
		if (rst = '0') then
			uart_state := read_0;
		else
			if (clk'event and clk = '1') then
				case uart_state is
				when read_0=>
					ram1OE <= '1';
					ram1WE <= '1';
					output_LED <= (others => '0');
					uart_state := read_1;
				when read_1=>
					inout_RAM_DATA <= (others => 'Z');
					rdn <= '1';
					uart_state := read_2;
				when read_2=>
					if (data_ready = '1') then
						uart_state := read_3;
						rdn <= '0';
					else
						uart_state := read_1;
					end if;
				when read_3=>
					num := to_integer(unsigned(inout_RAM_DATA));
					output_LED <= std_logic_vector(to_unsigned(num, 8));
					uart_state := write_0;
					rdn <= '1';
				when write_0=>
					wrn <= '1';
					ram1OE <= '1';
					ram1WE <= '0';
					uart_state := write_1;
				when write_1=>
					num := num + 1;
					inout_RAM_DATA <= std_logic_vector(to_unsigned(num, 8));
					wrn <= '0';
--					inout_RAM_DATA <= input;
					uart_state := write_2; 
				when write_2=>
					wrn <= '1';
					uart_state := write_3;
				when write_3=>
					if (tbre = '1') then
						uart_state := write_4;
					else
						uart_state := write_3;
					end if;
				when write_4=>
					if (tsre = '1') then
						uart_state := read_0;
					else
						uart_state := write_4;
					end if;
				when others=>
				end case;
			end if;
		end if;
	end process change_state;
	
end Behavioral;

