----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    11:40:58 11/21/2017 
-- Design Name: 
-- Module Name:    bus_dispatcher - Behavioral 
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
library work;
use work.cpuconstant.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity bus_dispatcher is
		Port(
				-- inputs
				clk, rst : in std_logic;
				operand_type: in integer;
				pc_in, dm_addr : in std_logic_vector(15 downto 0);
				dm_content_in : in std_logic_vector(15 downto 0);
				mem_content_in : in std_logic_vector(15 downto 0);
				dm_signal : in std_logic;
				finish_signal : in std_logic;
				
				-- outputs
				mem_start : out std_logic;
				im_content_out : out std_logic_vector(15 downto 0);
				dm_content_out : out std_logic_vector(15 downto 0);
				mem_addr, mem_content : out std_logic_vector(15 downto 0);
				mem_optype : out std_logic_vector(1 downto 0); --'00' uart read, '01' uart write, '10' mem read, '11' mem write
				bus_stall_request : out std_logic
		);
end bus_dispatcher;

architecture Behavioral of bus_dispatcher is
begin
--	mem_content <= dm_content_in;
	gen_data: process(dm_signal, operand_type, pc_in, dm_addr, dm_content_in) is
	begin
		if(dm_signal = '1') then
			bus_stall_request <= '1';
			case operand_type is
				when LW_OP =>
					if (dm_addr = "1011111100000000" or dm_addr = "1011111100000001") then
						mem_optype <= "00";
					else
						mem_optype <= "10";
					end if;
					mem_addr <= dm_addr;
				when LW_SP_OP =>
					if (dm_addr = "1011111100000000" or dm_addr = "1011111100000001") then
						mem_optype <= "00";
					else
						mem_optype <= "10";
					end if;
					mem_addr <= dm_addr;
				when SW_OP =>
					if (dm_addr = "1011111100000000") then
						mem_optype <= "01";
					else
						mem_optype <= "11";
					end if;
					mem_addr <= dm_addr;
					mem_content <= dm_content_in;
				when SW_SP_OP =>
					if (dm_addr = "1011111100000000") then
						mem_optype <= "01";
					else
						mem_optype <= "11";
					end if;
					mem_addr <= dm_addr;
					mem_content <= dm_content_in;
				when others =>
			end case;
		else
			bus_stall_request <= '0';
			if (pc_in = "1011111100000000") then
				mem_optype <= "00"; 
			else
				mem_optype <= "10"; 
			end if;
			mem_addr <= pc_in;
		end if;
	end process;

	gen_output: process(mem_content_in) is
	begin
		if (dm_signal = '1') then
			if (operand_type = LW_OP or operand_type = LW_SP_OP or operand_type = SW_OP or operand_type = SW_SP_OP) then
					dm_content_out <= mem_content_in;
			end if;
		else
			im_content_out <= mem_content_in;
		end if;
	end process;

	op_sram_uart : process(clk, finish_signal) is
	begin
		if (clk'event and clk = '1') then
			mem_start <= '1';
		end if;
		
		if (finish_signal = '1') then
			mem_start <= '0';
		end if;
	end process;

end Behavioral;

