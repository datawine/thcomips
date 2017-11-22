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
static const char *ng0 = "C:/Users/leavan/Desktop/thcomips/stall_controller.vhd";
extern char *WORK_P_0136478414;
extern char *IEEE_P_3620187407;



static void work_a_3612765511_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    unsigned char t7;
    char *t8;
    int t9;
    char *t10;
    int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;

LAB0:    xsi_set_current_line(58, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ((WORK_P_0136478414) + 3328U);
    t5 = *((char **)t2);
    t6 = *((int *)t5);
    t7 = (t4 == t6);
    if (t7 == 1)
        goto LAB5;

LAB6:    t2 = (t0 + 1992U);
    t8 = *((char **)t2);
    t9 = *((int *)t8);
    t2 = ((WORK_P_0136478414) + 3448U);
    t10 = *((char **)t2);
    t11 = *((int *)t10);
    t12 = (t9 == t11);
    t1 = t12;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(68, ng0);
    t2 = (t0 + 1672U);
    t3 = *((char **)t2);
    t12 = *((unsigned char *)t3);
    t16 = (t12 == (unsigned char)3);
    if (t16 == 1)
        goto LAB19;

LAB20:    t2 = (t0 + 2152U);
    t5 = *((char **)t2);
    t22 = *((unsigned char *)t5);
    t23 = (t22 == (unsigned char)3);
    t7 = t23;

LAB21:    if (t7 == 1)
        goto LAB16;

LAB17:    t1 = (unsigned char)0;

LAB18:    if (t1 != 0)
        goto LAB13;

LAB15:
LAB14:    t2 = (t0 + 5320);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1832U);
    t13 = *((char **)t2);
    t2 = (t0 + 8676U);
    t14 = (t0 + 1192U);
    t15 = *((char **)t14);
    t14 = (t0 + 8628U);
    t16 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t13, t2, t15, t14);
    if (t16 != 0)
        goto LAB8;

LAB10:    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 8676U);
    t5 = (t0 + 1352U);
    t8 = *((char **)t5);
    t5 = (t0 + 8644U);
    t1 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t8, t5);
    if (t1 != 0)
        goto LAB11;

LAB12:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 5416);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t2);

LAB9:    goto LAB3;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    xsi_set_current_line(60, ng0);
    t17 = (t0 + 5416);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    *((int *)t21) = 2;
    xsi_driver_first_trans_fast(t17);
    goto LAB9;

LAB11:    xsi_set_current_line(62, ng0);
    t10 = (t0 + 5416);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    *((int *)t17) = 3;
    xsi_driver_first_trans_fast(t10);
    goto LAB9;

LAB13:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1672U);
    t10 = *((char **)t2);
    t25 = *((unsigned char *)t10);
    t26 = (t25 == (unsigned char)3);
    if (t26 != 0)
        goto LAB22;

LAB24:    t2 = (t0 + 2152U);
    t3 = *((char **)t2);
    t1 = *((unsigned char *)t3);
    t7 = (t1 == (unsigned char)3);
    if (t7 != 0)
        goto LAB25;

LAB26:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 5480);
    t3 = (t2 + 56U);
    t5 = *((char **)t3);
    t8 = (t5 + 56U);
    t10 = *((char **)t8);
    *((int *)t10) = 0;
    xsi_driver_first_trans_fast(t2);

LAB23:    goto LAB14;

LAB16:    t2 = (t0 + 3432U);
    t8 = *((char **)t2);
    t4 = *((int *)t8);
    t24 = (t4 == 0);
    t1 = t24;
    goto LAB18;

LAB19:    t7 = (unsigned char)1;
    goto LAB21;

LAB22:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 5480);
    t13 = (t2 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t17 = *((char **)t15);
    *((int *)t17) = 3;
    xsi_driver_first_trans_fast(t2);
    goto LAB23;

LAB25:    xsi_set_current_line(72, ng0);
    t2 = (t0 + 5480);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t10 = (t8 + 56U);
    t13 = *((char **)t10);
    *((int *)t13) = 2;
    xsi_driver_first_trans_fast(t2);
    goto LAB23;

}

static void work_a_3612765511_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned char t4;
    char *t5;
    int t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;

LAB0:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 3432U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 != 0);
    if (t4 != 0)
        goto LAB2;

LAB4:    t1 = (t0 + 3592U);
    t2 = *((char **)t1);
    t3 = *((int *)t2);
    t4 = (t3 != 0);
    if (t4 != 0)
        goto LAB12;

LAB13:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 5672);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(110, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(111, ng0);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 5336);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(83, ng0);
    t1 = (t0 + 3432U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    if (t6 == 3)
        goto LAB6;

LAB9:    if (t6 == 2)
        goto LAB7;

LAB10:
LAB8:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 5672);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 5544);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5608);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 5672);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(88, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB7:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 5544);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 5608);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(92, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB11:;
LAB12:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 3592U);
    t5 = *((char **)t1);
    t6 = *((int *)t5);
    if (t6 == 3)
        goto LAB15;

LAB18:    if (t6 == 2)
        goto LAB16;

LAB19:
LAB17:
LAB14:    goto LAB3;

LAB15:    xsi_set_current_line(100, ng0);
    t1 = (t0 + 5672);
    t7 = (t1 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(101, ng0);
    t1 = (t0 + 5800);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(102, ng0);
    t1 = (t0 + 5864);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB14;

LAB16:    xsi_set_current_line(104, ng0);
    t1 = (t0 + 5736);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 5864);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB14;

LAB20:;
}


extern void work_a_3612765511_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3612765511_3212880686_p_0,(void *)work_a_3612765511_3212880686_p_1};
	xsi_register_didat("work_a_3612765511_3212880686", "isim/test_stall_controller_isim_beh.exe.sim/work/a_3612765511_3212880686.didat");
	xsi_register_executes(pe);
}
