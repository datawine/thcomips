/**********************************************************************/
/*   ____  ____                                                       */
/*  /   /\/   /                                                       */
/* /___/  \  /                                                        */
/* \   \   \/                                                       */
/*  \   \        Copyright (c) 2003-2009 Xilinx, Inc.                */
/*  /   /          All Right Reserved.                                 */
/* /---/   /\                                                         */
/* \   \  /  \                                                      */
/*  \___\/\___\                                                    */
/***********************************************************************/

/* This file is designed for use with ISim build 0x7708f090 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "G:/vhdl/thcomips/memory.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_1605435078_503743352(char *, unsigned char , unsigned char );


static void work_a_3392787015_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    unsigned int t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t22;
    unsigned char t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned int t28;
    static char *nl0[] = {&&LAB9, &&LAB12, &&LAB13, &&LAB10, &&LAB11, &&LAB14, &&LAB15, &&LAB16, &&LAB17, &&LAB18, &&LAB19, &&LAB20};

LAB0:    xsi_set_current_line(55, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 5192);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(56, ng0);
    t4 = (t0 + 3888U);
    t8 = *((char **)t4);
    t9 = *((unsigned char *)t8);
    t4 = (char *)((nl0) + t9);
    goto **((char **)t4);

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    goto LAB3;

LAB9:    xsi_set_current_line(58, ng0);
    t10 = (t0 + 5272);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t10);
    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB22;

LAB24:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);

LAB23:    goto LAB8;

LAB10:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 8506);
    t1 = (2U != 2U);
    if (t1 == 1)
        goto LAB69;

LAB70:    t5 = (t0 + 5784);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 2U);
    xsi_driver_first_trans_delta(t5, 0U, 2U, 0LL);
    xsi_set_current_line(100, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 5784);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_delta(t2, 2U, 16U, 0LL);
    xsi_set_current_line(101, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)4;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);
    goto LAB8;

LAB11:    xsi_set_current_line(103, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t2 = (t0 + 5336);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(104, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);
    xsi_set_current_line(105, ng0);
    t2 = (t0 + 5272);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB8;

LAB12:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 5464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t2 = (t0 + 5720);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(109, ng0);
    t2 = (t0 + 8508);
    t1 = (2U != 2U);
    if (t1 == 1)
        goto LAB71;

LAB72:    t5 = (t0 + 5784);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 2U);
    xsi_driver_first_trans_delta(t5, 0U, 2U, 0LL);
    xsi_set_current_line(110, ng0);
    t2 = (t0 + 1192U);
    t4 = *((char **)t2);
    t2 = (t0 + 5784);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_delta(t2, 2U, 16U, 0LL);
    xsi_set_current_line(111, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)2;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);
    goto LAB8;

LAB13:    xsi_set_current_line(113, ng0);
    t2 = (t0 + 5464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(114, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 5272);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB8;

LAB14:    xsi_set_current_line(117, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    memset(t4, (unsigned char)4, 16U);
    t5 = (t0 + 5720);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 16U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(118, ng0);
    t2 = (t0 + 5592);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(119, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)6;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);
    goto LAB8;

LAB15:    xsi_set_current_line(121, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB73;

LAB75:    xsi_set_current_line(125, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)5;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);

LAB74:    goto LAB8;

LAB16:    xsi_set_current_line(128, ng0);
    t2 = (t0 + 2472U);
    t4 = *((char **)t2);
    t15 = (15 - 7);
    t16 = (t15 * 1U);
    t28 = (0 + t16);
    t2 = (t4 + t28);
    t5 = (t0 + 5336);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_delta(t5, 8U, 8U, 0LL);
    xsi_set_current_line(129, ng0);
    t2 = (t0 + 8510);
    t1 = (8U != 8U);
    if (t1 == 1)
        goto LAB76;

LAB77:    t5 = (t0 + 5336);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_delta(t5, 0U, 8U, 0LL);
    xsi_set_current_line(130, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);
    xsi_set_current_line(131, ng0);
    t2 = (t0 + 5272);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB8;

LAB17:    xsi_set_current_line(133, ng0);
    t2 = (t0 + 8518);
    t1 = (8U != 8U);
    if (t1 == 1)
        goto LAB78;

LAB79:    t5 = (t0 + 5720);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_delta(t5, 0U, 8U, 0LL);
    xsi_set_current_line(134, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t15 = (15 - 7);
    t16 = (t15 * 1U);
    t28 = (0 + t16);
    t2 = (t4 + t28);
    t5 = (t0 + 5720);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 8U);
    xsi_driver_first_trans_delta(t5, 8U, 8U, 0LL);
    xsi_set_current_line(135, ng0);
    t2 = (t0 + 5656);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(136, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)9;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);
    goto LAB8;

LAB18:    xsi_set_current_line(138, ng0);
    t2 = (t0 + 5656);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(139, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)10;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);
    goto LAB8;

LAB19:    xsi_set_current_line(141, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB80;

LAB82:    xsi_set_current_line(144, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)10;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);

LAB81:    goto LAB8;

LAB20:    xsi_set_current_line(147, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB83;

LAB85:    xsi_set_current_line(151, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)11;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);

LAB84:    goto LAB8;

LAB21:    xsi_set_current_line(154, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);
    goto LAB8;

LAB22:    xsi_set_current_line(60, ng0);
    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t2 = (t0 + 8468);
    t6 = 1;
    if (2U == 2U)
        goto LAB28;

LAB29:    t6 = 0;

LAB30:    if (t6 != 0)
        goto LAB25;

LAB27:    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 8500);
    t1 = 1;
    if (2U == 2U)
        goto LAB47;

LAB48:    t1 = 0;

LAB49:    if (t1 != 0)
        goto LAB45;

LAB46:    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 8502);
    t1 = 1;
    if (2U == 2U)
        goto LAB55;

LAB56:    t1 = 0;

LAB57:    if (t1 != 0)
        goto LAB53;

LAB54:    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t2 = (t0 + 8504);
    t1 = 1;
    if (2U == 2U)
        goto LAB63;

LAB64:    t1 = 0;

LAB65:    if (t1 != 0)
        goto LAB61;

LAB62:
LAB26:    goto LAB23;

LAB25:    xsi_set_current_line(61, ng0);
    t12 = (t0 + 1192U);
    t13 = *((char **)t12);
    t12 = (t0 + 8470);
    t7 = 1;
    if (16U == 16U)
        goto LAB37;

LAB38:    t7 = 0;

LAB39:    if (t7 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 5400);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(68, ng0);
    t2 = (t0 + 5464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(69, ng0);
    t2 = (t0 + 5528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)5;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);

LAB35:    goto LAB26;

LAB28:    t15 = 0;

LAB31:    if (t15 < 2U)
        goto LAB32;
    else
        goto LAB30;

LAB32:    t10 = (t5 + t15);
    t11 = (t2 + t15);
    if (*((unsigned char *)t10) != *((unsigned char *)t11))
        goto LAB29;

LAB33:    t15 = (t15 + 1);
    goto LAB31;

LAB34:    xsi_set_current_line(62, ng0);
    t19 = (t0 + 1832U);
    t20 = *((char **)t19);
    t9 = *((unsigned char *)t20);
    t19 = (t0 + 1672U);
    t21 = *((char **)t19);
    t22 = *((unsigned char *)t21);
    t23 = ieee_p_2592010699_sub_1605435078_503743352(IEEE_P_2592010699, t9, t22);
    t19 = (t0 + 5336);
    t24 = (t19 + 56U);
    t25 = *((char **)t24);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    *((unsigned char *)t27) = t23;
    xsi_driver_first_trans_delta(t19, 15U, 1, 0LL);
    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t2 = (t0 + 5336);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t1;
    xsi_driver_first_trans_delta(t2, 14U, 1, 0LL);
    xsi_set_current_line(64, ng0);
    t2 = (t0 + 8486);
    t1 = (14U != 14U);
    if (t1 == 1)
        goto LAB43;

LAB44:    t5 = (t0 + 5336);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 14U);
    xsi_driver_first_trans_delta(t5, 0U, 14U, 0LL);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 5272);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB35;

LAB37:    t16 = 0;

LAB40:    if (t16 < 16U)
        goto LAB41;
    else
        goto LAB39;

LAB41:    t17 = (t13 + t16);
    t18 = (t12 + t16);
    if (*((unsigned char *)t17) != *((unsigned char *)t18))
        goto LAB38;

LAB42:    t16 = (t16 + 1);
    goto LAB40;

LAB43:    xsi_size_not_matching(14U, 14U, 0);
    goto LAB44;

LAB45:    xsi_set_current_line(73, ng0);
    t11 = (t0 + 5592);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(74, ng0);
    t2 = (t0 + 5656);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 5528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(76, ng0);
    t2 = (t0 + 5464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(77, ng0);
    t2 = (t0 + 5400);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)8;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);
    goto LAB26;

LAB47:    t15 = 0;

LAB50:    if (t15 < 2U)
        goto LAB51;
    else
        goto LAB49;

LAB51:    t8 = (t4 + t15);
    t10 = (t2 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t10))
        goto LAB48;

LAB52:    t15 = (t15 + 1);
    goto LAB50;

LAB53:    xsi_set_current_line(80, ng0);
    t11 = (t0 + 5592);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(81, ng0);
    t2 = (t0 + 5656);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(82, ng0);
    t2 = (t0 + 5528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(83, ng0);
    t2 = (t0 + 5464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(84, ng0);
    t2 = (t0 + 5400);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(85, ng0);
    t2 = xsi_get_transient_memory(16U);
    memset(t2, 0, 16U);
    t4 = t2;
    memset(t4, (unsigned char)4, 16U);
    t5 = (t0 + 5720);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    memcpy(t12, t2, 16U);
    xsi_driver_first_trans_fast_port(t5);
    xsi_set_current_line(86, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)3;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);
    goto LAB26;

LAB55:    t15 = 0;

LAB58:    if (t15 < 2U)
        goto LAB59;
    else
        goto LAB57;

LAB59:    t8 = (t4 + t15);
    t10 = (t2 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t10))
        goto LAB56;

LAB60:    t15 = (t15 + 1);
    goto LAB58;

LAB61:    xsi_set_current_line(88, ng0);
    t11 = (t0 + 5592);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    t14 = (t13 + 56U);
    t17 = *((char **)t14);
    *((unsigned char *)t17) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t11);
    xsi_set_current_line(89, ng0);
    t2 = (t0 + 5656);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(90, ng0);
    t2 = (t0 + 5528);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(91, ng0);
    t2 = (t0 + 5464);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 5400);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(93, ng0);
    t2 = (t0 + 3888U);
    t4 = *((char **)t2);
    t2 = (t4 + 0);
    *((unsigned char *)t2) = (unsigned char)1;
    t5 = (t0 + 3832U);
    xsi_variable_act(t5);
    goto LAB26;

LAB63:    t15 = 0;

LAB66:    if (t15 < 2U)
        goto LAB67;
    else
        goto LAB65;

LAB67:    t8 = (t4 + t15);
    t10 = (t2 + t15);
    if (*((unsigned char *)t8) != *((unsigned char *)t10))
        goto LAB64;

LAB68:    t15 = (t15 + 1);
    goto LAB66;

LAB69:    xsi_size_not_matching(2U, 2U, 0);
    goto LAB70;

LAB71:    xsi_size_not_matching(2U, 2U, 0);
    goto LAB72;

LAB73:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 3888U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((unsigned char *)t2) = (unsigned char)7;
    t8 = (t0 + 3832U);
    xsi_variable_act(t8);
    xsi_set_current_line(123, ng0);
    t2 = (t0 + 5592);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB74;

LAB76:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB77;

LAB78:    xsi_size_not_matching(8U, 8U, 0);
    goto LAB79;

LAB80:    xsi_set_current_line(142, ng0);
    t2 = (t0 + 3888U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((unsigned char *)t2) = (unsigned char)11;
    t8 = (t0 + 3832U);
    xsi_variable_act(t8);
    goto LAB81;

LAB83:    xsi_set_current_line(148, ng0);
    t2 = (t0 + 3888U);
    t5 = *((char **)t2);
    t2 = (t5 + 0);
    *((unsigned char *)t2) = (unsigned char)0;
    t8 = (t0 + 3832U);
    xsi_variable_act(t8);
    xsi_set_current_line(149, ng0);
    t2 = (t0 + 5272);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB84;

}


extern void work_a_3392787015_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3392787015_3212880686_p_0};
	xsi_register_didat("work_a_3392787015_3212880686", "isim/test_cpu_top_isim_beh.exe.sim/work/a_3392787015_3212880686.didat");
	xsi_register_executes(pe);
}
