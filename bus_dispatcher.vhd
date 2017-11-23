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
				clk, rst : in std_logic;
				pc_in : in std_logic_vector(15 downto 0);
				dm_addr : in std_logic_vector(15 downto 0);
				mem_content : inout std_logic_vector(15 downto 0);
				mem_addr : out std_logic_vector(15 downto 0);
				oprand_type: in integer;
				dm_signal : in std_logic;
				sram_optype : out std_logic; --'0'read '1'write
				bus_stall_request : out std_logic
		);
end bus_dispatcher;

architecture Behavioral of bus_dispatcher is

begin
		op_sram : process(clk) is
		begin
				if(clk'event and clk = '1') then
						if(dm_signal = '1') then
								bus_stall_request <= '1';
								case oprand_type is
										when LW_OP =>
												mem_addr <= dm_addr;
												sram_optype <= '0';
										when LW_SP_OP =>
												mem_addr <= dm_addr;
												sram_optype <= '0';
										when SW_OP =>
												mem_addr <= dm_addr;
												sram_optype <= '1';
										when SW_SP_OP =>
												mem_addr <= dm_addr;
												sram_optype <= '1';
										when others =>
												mem_addr <= pc_in;
												sram_optype <= '0';
								end case;
						else
								mem_addr <= pc_in;
								sram_optype <= '0';
						end if;
				end if;
		end process;

end Behavioral;

