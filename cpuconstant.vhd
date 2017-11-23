--
--	Package File Template
--
--	Purpose: This package defines supplemental types, subtypes, 
--		 constants, and functions 
--
--   To use any of the example code shown below, uncomment the lines and modify as necessary
--

library IEEE;
use IEEE.STD_LOGIC_1164.all;

package cpuconstant is

-- type <new_type> is
--  record
--    <type_name>        : std_logic_vector( 7 downto 0);
--    <type_name>        : std_logic;
-- end record;
--
-- Declare constants
--
-- constant <constant_name>		: time := <time_unit> ns;
-- constant <constant_name>		: integer := <value;
--

-- default value
	constant HIGHRES: std_logic_vector(15 downto 0) := "ZZZZZZZZZZZZZZZZ";

-- operand num
	constant NOT_OP: integer := 1;
	constant ADDSP3_OP: integer := 2;
	constant ADDIU_OP: integer := 3;
	constant ADDSP_OP: integer := 4;
	constant SLL_OP: integer := 5;
	constant SRA_OP: integer := 6;
	constant ADDIU3_OP: integer := 7;
	constant AND_OP: integer := 8;
	constant OR_OP: integer := 9;
	constant SLLV_OP: integer := 10;
	constant ADDU_OP: integer := 11;
	constant SUBU_OP: integer := 12;
	constant CMP_OP: integer := 13;
	constant SLTI_OP: integer := 14;
	constant LI_OP: integer := 15;
	constant LW_OP: integer := 16;
	constant LW_SP_OP: integer := 17;
	constant SW_OP: integer := 18;
	constant SW_SP_OP: integer := 19;
	constant B_OP: integer := 20;
	constant BEQZ_OP: integer := 21;
	constant BNEZ_OP: integer := 22;
	constant BTEQZ_OP: integer := 23;
	constant JR_OP: integer := 24;
	constant BTNEZ_OP: integer := 25;
	constant MFIH_OP: integer := 26;
	constant MFPC_OP: integer := 27;
	constant MTIH_OP: integer := 28;
	constant MTSP_OP: integer := 29;
	constant NOP_OP: integer := 30;
	
	constant SLL_SRA_OP: integer := 31;
	constant ADDSP_BTEQZ_BTNEZ_MTSP_OP: integer := 32;
	constant ADDU_SUBU_OP: integer := 33;
	constant AND_CMP_JR_NOT_OR_MFPC_SLLV_OP: integer := 34;
	constant MFPC_SLLV_OP: integer := 35;
	constant MFIH_MTIH_OP: integer := 36;
	
	
	constant ERROR_OP: integer := 37;



-- Declare functions and procedure
--
-- function <function_name>  (signal <signal_name> : in <type_declaration>) return <type_declaration>;
-- procedure <procedure_name> (<type_declaration> <constant_name>	: in <type_declaration>);
--

end cpuconstant;

package body cpuconstant is

---- Example 1
--  function <function_name>  (signal <signal_name> : in <type_declaration>  ) return <type_declaration> is
--    variable <variable_name>     : <type_declaration>;
--  begin
--    <variable_name> := <signal_name> xor <signal_name>;
--    return <variable_name>; 
--  end <function_name>;

---- Example 2
--  function <function_name>  (signal <signal_name> : in <type_declaration>;
--                         signal <signal_name>   : in <type_declaration>  ) return <type_declaration> is
--  begin
--    if (<signal_name> = '1') then
--      return <signal_name>;
--    else
--      return 'Z';
--    end if;
--  end <function_name>;

---- Procedure Example
--  procedure <procedure_name>  (<type_declaration> <constant_name>  : in <type_declaration>) is
--    
--  begin
--    
--  end <procedure_name>;
 
end cpuconstant;
