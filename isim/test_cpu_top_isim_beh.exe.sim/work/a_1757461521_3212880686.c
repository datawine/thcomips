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

/* This file is designed for use with ISim build 0x8ef4fb42 */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "C:/Users/cslab/Desktop/thcomips/mem_forward.vhd";
extern char *WORK_P_0136478414;
extern char *IEEE_P_3620187407;



static void work_a_1757461521_3212880686_p_0(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    int t11;
    unsigned char t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    unsigned char t17;
    char *t18;
    int t19;
    char *t20;
    int t21;
    unsigned char t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    unsigned char t27;
    char *t28;
    int t29;
    char *t30;
    int t31;
    unsigned char t32;
    char *t33;
    int t34;
    char *t35;
    int t36;
    unsigned char t37;
    char *t38;
    int t39;
    char *t40;
    int t41;
    unsigned char t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    char *t50;
    char *t51;
    char *t52;

LAB0:    xsi_set_current_line(49, ng0);
    t7 = (t0 + 592U);
    t8 = *((char **)t7);
    t9 = *((int *)t8);
    t7 = ((WORK_P_0136478414) + 2032U);
    t10 = *((char **)t7);
    t11 = *((int *)t10);
    t12 = (t9 == t11);
    if (t12 == 1)
        goto LAB20;

LAB21:    t7 = (t0 + 592U);
    t13 = *((char **)t7);
    t14 = *((int *)t13);
    t7 = ((WORK_P_0136478414) + 2100U);
    t15 = *((char **)t7);
    t16 = *((int *)t15);
    t17 = (t14 == t16);
    t6 = t17;

LAB22:    if (t6 == 1)
        goto LAB17;

LAB18:    t7 = (t0 + 592U);
    t18 = *((char **)t7);
    t19 = *((int *)t18);
    t7 = ((WORK_P_0136478414) + 2168U);
    t20 = *((char **)t7);
    t21 = *((int *)t20);
    t22 = (t19 == t21);
    t5 = t22;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t7 = (t0 + 592U);
    t23 = *((char **)t7);
    t24 = *((int *)t23);
    t7 = ((WORK_P_0136478414) + 2236U);
    t25 = *((char **)t7);
    t26 = *((int *)t25);
    t27 = (t24 == t26);
    t4 = t27;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t7 = (t0 + 592U);
    t28 = *((char **)t7);
    t29 = *((int *)t28);
    t7 = ((WORK_P_0136478414) + 2304U);
    t30 = *((char **)t7);
    t31 = *((int *)t30);
    t32 = (t29 == t31);
    t3 = t32;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t7 = (t0 + 592U);
    t33 = *((char **)t7);
    t34 = *((int *)t33);
    t7 = ((WORK_P_0136478414) + 2372U);
    t35 = *((char **)t7);
    t36 = *((int *)t35);
    t37 = (t34 == t36);
    t2 = t37;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 592U);
    t38 = *((char **)t7);
    t39 = *((int *)t38);
    t7 = ((WORK_P_0136478414) + 2712U);
    t40 = *((char **)t7);
    t41 = *((int *)t40);
    t42 = (t39 == t41);
    t1 = t42;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB23:    t47 = (t0 + 2592);
    t48 = (t47 + 32U);
    t49 = *((char **)t48);
    t50 = (t49 + 40U);
    t51 = *((char **)t50);
    *((unsigned char *)t51) = (unsigned char)3;
    xsi_driver_first_trans_fast(t47);

LAB2:    t52 = (t0 + 2524);
    *((int *)t52) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 2592);
    t43 = (t7 + 32U);
    t44 = *((char **)t43);
    t45 = (t44 + 40U);
    t46 = *((char **)t45);
    *((unsigned char *)t46) = (unsigned char)2;
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t3 = (unsigned char)1;
    goto LAB13;

LAB14:    t4 = (unsigned char)1;
    goto LAB16;

LAB17:    t5 = (unsigned char)1;
    goto LAB19;

LAB20:    t6 = (unsigned char)1;
    goto LAB22;

LAB24:    goto LAB2;

}

static void work_a_1757461521_3212880686_p_1(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    unsigned char t5;
    unsigned char t6;
    char *t7;
    int t8;
    char *t9;
    int t10;
    unsigned char t11;
    char *t12;
    int t13;
    char *t14;
    int t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    char *t26;

LAB0:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 1144U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 592U);
    t7 = *((char **)t3);
    t8 = *((int *)t7);
    t3 = ((WORK_P_0136478414) + 1896U);
    t9 = *((char **)t3);
    t10 = *((int *)t9);
    t11 = (t8 == t10);
    t2 = t11;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t3 = (t0 + 592U);
    t12 = *((char **)t3);
    t13 = *((int *)t12);
    t3 = ((WORK_P_0136478414) + 1964U);
    t14 = *((char **)t3);
    t15 = *((int *)t14);
    t16 = (t13 == t15);
    t1 = t16;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t21 = (t0 + 2628);
    t22 = (t21 + 32U);
    t23 = *((char **)t22);
    t24 = (t23 + 40U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_fast(t21);

LAB2:    t26 = (t0 + 2532);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 2628);
    t17 = (t3 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = (unsigned char)2;
    xsi_driver_first_trans_fast(t3);
    goto LAB2;

LAB5:    t1 = (unsigned char)1;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB12:    goto LAB2;

}

static void work_a_1757461521_3212880686_p_2(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(53, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t2 = (t0 + 4352U);
    t4 = (t0 + 684U);
    t5 = *((char **)t4);
    t4 = (t0 + 4336U);
    t6 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t5, t4);
    if (t6 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t15 = (t0 + 2664);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t15);

LAB2:    t20 = (t0 + 2540);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 2664);
    t11 = (t7 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB5:    t7 = (t0 + 1236U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t1 = t10;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_1757461521_3212880686_p_3(char *t0)
{
    unsigned char t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t8;
    unsigned char t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;

LAB0:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 868U);
    t3 = *((char **)t2);
    t2 = (t0 + 4368U);
    t4 = (t0 + 684U);
    t5 = *((char **)t4);
    t4 = (t0 + 4336U);
    t6 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t5, t4);
    if (t6 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t15 = (t0 + 2700);
    t16 = (t15 + 32U);
    t17 = *((char **)t16);
    t18 = (t17 + 40U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t15);

LAB2:    t20 = (t0 + 2548);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 2700);
    t11 = (t7 + 32U);
    t12 = *((char **)t11);
    t13 = (t12 + 40U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB5:    t7 = (t0 + 1236U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t1 = t10;
    goto LAB7;

LAB9:    goto LAB2;

}


extern void work_a_1757461521_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1757461521_3212880686_p_0,(void *)work_a_1757461521_3212880686_p_1,(void *)work_a_1757461521_3212880686_p_2,(void *)work_a_1757461521_3212880686_p_3};
	xsi_register_didat("work_a_1757461521_3212880686", "isim/test_cpu_top_isim_beh.exe.sim/work/a_1757461521_3212880686.didat");
	xsi_register_executes(pe);
}
