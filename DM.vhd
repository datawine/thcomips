----------------------------------------------------------------------------------
-- Company: 
-- Engineer: 
-- 
-- Create Date:    18:21:44 11/23/2017 
-- Design Name: 
-- Module Name:    DM - Behavioral 
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
use IEEE.STD_LOGIC_ARITH.ALL;
use IEEE.STD_LOGIC_UNSIGNED.ALL;
Library work;
use work.cpuconstant.ALL;

-- Uncomment the following library declaration if using
-- arithmetic functions with Signed or Unsigned values
--use IEEE.NUMERIC_STD.ALL;

-- Uncomment the following library declaration if instantiating
-- any Xilinx primitives in this code.
--library UNISIM;
--use UNISIM.VComponents.all;

entity DM is
	Port(
		A, B, C : in std_logic_vector(15 downto 0);
		operand_type : in integer;
		bus_content_in : in std_logic_vector(15 downto 0);

		send_signal : out std_logic;
		bus_content_out : out std_logic_vector(15 downto 0);
		bus_addr : out std_logic_vector(15 downto 0);
		DM_out : out std_logic_vector(15 downto 0)
	);
end DM;

architecture Behavioral of DM is
	
begin
	get_dm_out: process(A, B, C, operand_type, bus_content_in) is
	begin
		bus_optype <= operand_type;
		case operand_type is
			when LW_OP =>
				bus_addr <= C;
				DM_out <= bus_content_in;
				send_signal <= '1';
			when LW_SP_OP =>
				bus_addr <= C;
				DM_out <= bus_content_in;
				send_signal <= '1';
			when SW_OP =>
				bus_addr <= C;
				bus_content_out <= B;
				send_signal <= '1';
			when SW_SP_OP =>
				bus_addr <= C;
				bus_content_out <= A;
				send_signal <= '1';
			when others =>
				DM_out <= C;
				send_signal <= '0';
		end case;
	end process;

end Behavioral;

