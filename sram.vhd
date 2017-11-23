----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    16:01:21 11/23/2017 
-- Design Name: 
-- Module Name:    sram - Behavioral 
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

entity sram is
	Port(
		clk, rst: in std_logic;
		input_switch: in std_logic_vector(15 downto 0);
		output_LED: out std_logic_vector(15 downto 0);
		output_RAM1: out std_logic_vector(17 downto 0);
		output_RAM2: out std_logic_vector(17 downto 0);
		inout_RAM_DATA: inout std_logic_vector(15 downto 0);
		inout_RAM2_DATA: inout std_logic_vector(15 downto 0);
		output_DIGIT: out std_logic_vector(6 downto 0);
		ram1OE: out std_logic;
		ram1WE: out std_logic;
		ram1EN: out std_logic;
		ram2OE: out std_logic;
		ram2WE: out std_logic;
		ram2EN: out std_logic;
		wrn, rdn: out std_logic
	);
end sram;

architecture Behavioral of sram is
	type states is (read_addr, read_content, write_ram_loop, read_ram_loop, write_ram2_loop, read_ram_loop_again, done);
	signal ramop_state: states := read_addr;
	shared variable tmp_addr: integer := 0;
	shared variable tmp_content: integer := 0;
	shared variable loop_num : integer := 0;
begin
	change_state: process(clk, rst) is
	variable temp: std_logic_vector(15 downto 0);
	begin
		rdn <= '1';
		wrn <= '1';
		if (rst = '0') then
			ramop_state <= read_addr;
			output_DIGIT <= encode_number(0);
			output_LED <= (others => '0');
		else
			if (clk'event and clk = '1') then
				case ramop_state is
				when read_addr=>
					ram1EN <= '0';
					ram2EN <= '0';
					tmp_addr := to_integer(unsigned(input_switch));

					output_LED <= input_switch;
					output_DIGIT <= encode_number(1);

					ramop_state <= read_content;
				when read_content=>
					tmp_content := to_integer(unsigned(input_switch));

					output_LED <= input_switch;
					output_DIGIT <= encode_number(2);
					loop_num := 0;

					ramop_state <= write_ram_loop;
				when write_ram_loop=>
					if (loop_num < 10) then
						ram1WE <= '0';
						ram1OE <= '1';

						output_RAM1 <= std_logic_vector(to_unsigned(tmp_addr, 18));
						inout_RAM_DATA <= std_logic_vector(to_unsigned(tmp_content, 16));
						output_LED(7 downto 0) <= std_logic_vector(to_unsigned(tmp_content, 8));
						output_LED(15 downto 8) <= std_logic_vector(to_unsigned(tmp_addr, 8));

						tmp_addr := tmp_addr + 1;
						tmp_content := tmp_content + 1;
						loop_num := loop_num + 1;
						output_DIGIT <= encode_number(loop_num);

						ramop_state <= write_ram_loop;
					else
						tmp_addr := tmp_addr - 10;
						tmp_content := tmp_content - 11;
						output_LED <= (others => '0');
						output_DIGIT <= encode_number(3);
						loop_num := 0;

						ram1WE <= '1';
						ram1OE <= '0';

						inout_RAM_DATA <= (others => 'Z');
						output_RAM1 <= std_logic_vector(to_unsigned(tmp_addr, 18));

						ramop_state <= read_ram_loop;
					end if;
				when read_ram_loop=>
					if (loop_num < 10) then
						ram1WE <= '1';
						ram1OE <= '0';

--						inout_RAM_DATA <= (others => 'Z');
--						output_RAM1 <= std_logic_vector(to_unsigned(tmp_addr, 18));
						output_LED(7 downto 0) <= inout_RAM_DATA(7 downto 0);
						output_LED(15 downto 8) <= std_logic_vector(to_unsigned(tmp_addr, 8));

						tmp_addr := tmp_addr + 1;
						loop_num := loop_num + 1;
						output_DIGIT <= encode_number(loop_num);

--						inout_RAM_DATA <= (others => 'Z');
						output_RAM1 <= std_logic_vector(to_unsigned(tmp_addr, 18));

						ramop_state <= read_ram_loop;
					else
						output_LED <= (others => '0');
						output_DIGIT <= encode_number(4);
						loop_num := 0;
						tmp_addr := tmp_addr - 10;

						ramop_state <= write_ram2_loop;
					end if;
				when write_ram2_loop=>
					if (loop_num < 10) then
						ram2WE <= '0';
						ram2OE <= '1';

						output_RAM2 <= std_logic_vector(to_unsigned(tmp_addr, 18));
						inout_RAM2_DATA <= std_logic_vector(to_unsigned(tmp_content, 16));
						output_LED(7 downto 0) <= std_logic_vector(to_unsigned(tmp_content, 8));
						output_LED(15 downto 8) <= std_logic_vector(to_unsigned(tmp_addr, 8));

						tmp_addr := tmp_addr + 1;
						tmp_content := tmp_content + 1;
						loop_num := loop_num + 1;
						output_DIGIT <= encode_number(loop_num);

						ramop_state <= write_ram2_loop;
					else
						tmp_addr := tmp_addr - 10;
						tmp_content := tmp_content - 10;
--						output_LED <= (others => '0');
						output_DIGIT <= encode_number(5);
						loop_num := 0;

						ram2WE <= '1';
						ram2OE <= '0';

						inout_RAM2_DATA <= (others => 'Z');
						output_RAM2 <= std_logic_vector(to_unsigned(tmp_addr, 18));

						ramop_state <= read_ram_loop_again;
					end if;
				when read_ram_loop_again=>
					if (loop_num < 10) then
						ram2WE <= '1';
						ram2OE <= '0';

--						inout_RAM_DATA <= (others => 'Z');
--						output_RAM1 <= std_logic_vector(to_unsigned(tmp_addr, 18));
--						temp(15 downto 8) := std_logic_vector(to_unsigned(tmp_addr, 8));
						
--						output_LED <= inout_RAM2_DATA;
						output_LED <= std_logic_vector(to_unsigned(tmp_addr, 16));
--						output_LED(7 downto 0) <= inout_RAM2_DATA(7 downto 0);
--						output_LED(15 downto 8) <= std_logic_vector(to_unsigned(tmp_addr, 18));

						tmp_addr := tmp_addr + 1;
						loop_num := loop_num + 1;
						output_DIGIT <= encode_number(loop_num);

--						inout_RAM_DATA <= (others => 'Z');
						output_RAM2 <= std_logic_vector(to_unsigned(tmp_addr, 18));

						ramop_state <= read_ram_loop_again;
					else
						output_DIGIT <= encode_number(6);

						ramop_state <= done;
					end if;
				when others=>
				end case;
			end if;
		end if;
	end process change_state;

end Behavioral;

