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
static const char *ng0 = "G:/vhdl/thcomips/alu_forward.vhd";
extern char *WORK_P_0136478414;
extern char *IEEE_P_3620187407;



static void work_a_2169201272_3212880686_p_0(char *t0)
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
    t7 = (t0 + 1032U);
    t8 = *((char **)t7);
    t9 = *((int *)t8);
    t7 = ((WORK_P_0136478414) + 3568U);
    t10 = *((char **)t7);
    t11 = *((int *)t10);
    t12 = (t9 == t11);
    if (t12 == 1)
        goto LAB20;

LAB21:    t7 = (t0 + 1032U);
    t13 = *((char **)t7);
    t14 = *((int *)t13);
    t7 = ((WORK_P_0136478414) + 3688U);
    t15 = *((char **)t7);
    t16 = *((int *)t15);
    t17 = (t14 == t16);
    t6 = t17;

LAB22:    if (t6 == 1)
        goto LAB17;

LAB18:    t7 = (t0 + 1032U);
    t18 = *((char **)t7);
    t19 = *((int *)t18);
    t7 = ((WORK_P_0136478414) + 3808U);
    t20 = *((char **)t7);
    t21 = *((int *)t20);
    t22 = (t19 == t21);
    t5 = t22;

LAB19:    if (t5 == 1)
        goto LAB14;

LAB15:    t7 = (t0 + 1032U);
    t23 = *((char **)t7);
    t24 = *((int *)t23);
    t7 = ((WORK_P_0136478414) + 3928U);
    t25 = *((char **)t7);
    t26 = *((int *)t25);
    t27 = (t24 == t26);
    t4 = t27;

LAB16:    if (t4 == 1)
        goto LAB11;

LAB12:    t7 = (t0 + 1032U);
    t28 = *((char **)t7);
    t29 = *((int *)t28);
    t7 = ((WORK_P_0136478414) + 4048U);
    t30 = *((char **)t7);
    t31 = *((int *)t30);
    t32 = (t29 == t31);
    t3 = t32;

LAB13:    if (t3 == 1)
        goto LAB8;

LAB9:    t7 = (t0 + 1032U);
    t33 = *((char **)t7);
    t34 = *((int *)t33);
    t7 = ((WORK_P_0136478414) + 4168U);
    t35 = *((char **)t7);
    t36 = *((int *)t35);
    t37 = (t34 == t36);
    t2 = t37;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t7 = (t0 + 1032U);
    t38 = *((char **)t7);
    t39 = *((int *)t38);
    t7 = ((WORK_P_0136478414) + 4768U);
    t40 = *((char **)t7);
    t41 = *((int *)t40);
    t42 = (t39 == t41);
    t1 = t42;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB23:    t47 = (t0 + 4928);
    t48 = (t47 + 56U);
    t49 = *((char **)t48);
    t50 = (t49 + 56U);
    t51 = *((char **)t50);
    *((unsigned char *)t51) = (unsigned char)3;
    xsi_driver_first_trans_fast(t47);

LAB2:    t52 = (t0 + 4784);
    *((int *)t52) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 4928);
    t43 = (t7 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
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

static void work_a_2169201272_3212880686_p_1(char *t0)
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
    t3 = (t0 + 2152U);
    t4 = *((char **)t3);
    t5 = *((unsigned char *)t4);
    t6 = (t5 == (unsigned char)2);
    if (t6 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 1032U);
    t7 = *((char **)t3);
    t8 = *((int *)t7);
    t3 = ((WORK_P_0136478414) + 3328U);
    t9 = *((char **)t3);
    t10 = *((int *)t9);
    t11 = (t8 == t10);
    t2 = t11;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t3 = (t0 + 1032U);
    t12 = *((char **)t3);
    t13 = *((int *)t12);
    t3 = ((WORK_P_0136478414) + 3448U);
    t14 = *((char **)t3);
    t15 = *((int *)t14);
    t16 = (t13 == t15);
    t1 = t16;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB11:    t21 = (t0 + 4992);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    *((unsigned char *)t25) = (unsigned char)3;
    xsi_driver_first_trans_fast(t21);

LAB2:    t26 = (t0 + 4800);
    *((int *)t26) = 1;

LAB1:    return;
LAB3:    t3 = (t0 + 4992);
    t17 = (t3 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
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

static void work_a_2169201272_3212880686_p_2(char *t0)
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
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 7180U);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 7164U);
    t6 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t5, t4);
    if (t6 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t15 = (t0 + 5056);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t15);

LAB2:    t20 = (t0 + 4816);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 5056);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB5:    t7 = (t0 + 2312U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t1 = t10;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_2169201272_3212880686_p_3(char *t0)
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
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 7196U);
    t4 = (t0 + 1192U);
    t5 = *((char **)t4);
    t4 = (t0 + 7164U);
    t6 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t3, t2, t5, t4);
    if (t6 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB8:    t15 = (t0 + 5120);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t15);

LAB2:    t20 = (t0 + 4832);
    *((int *)t20) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 5120);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((unsigned char *)t14) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t7);
    goto LAB2;

LAB5:    t7 = (t0 + 2312U);
    t8 = *((char **)t7);
    t9 = *((unsigned char *)t8);
    t10 = (t9 == (unsigned char)3);
    t1 = t10;
    goto LAB7;

LAB9:    goto LAB2;

}

static void work_a_2169201272_3212880686_p_4(char *t0)
{
    unsigned char t1;
    unsigned char t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    int t7;
    unsigned char t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    unsigned char t13;
    unsigned char t14;
    unsigned char t15;
    char *t16;
    char *t17;
    char *t18;
    unsigned char t19;
    char *t20;
    char *t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    char *t25;
    char *t26;
    char *t27;
    unsigned char t28;
    char *t29;
    char *t30;
    unsigned char t31;
    unsigned char t32;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;

LAB0:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 1032U);
    t4 = *((char **)t3);
    t5 = *((int *)t4);
    t3 = ((WORK_P_0136478414) + 3088U);
    t6 = *((char **)t3);
    t7 = *((int *)t6);
    t8 = (t5 == t7);
    if (t8 == 1)
        goto LAB8;

LAB9:    t3 = (t0 + 1032U);
    t9 = *((char **)t3);
    t10 = *((int *)t9);
    t3 = ((WORK_P_0136478414) + 3208U);
    t11 = *((char **)t3);
    t12 = *((int *)t11);
    t13 = (t10 == t12);
    t2 = t13;

LAB10:    if (t2 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB3;

LAB4:
LAB20:    t37 = (t0 + 5184);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    *((unsigned char *)t41) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t37);

LAB2:    t42 = (t0 + 4848);
    *((int *)t42) = 1;

LAB1:    return;
LAB3:    t29 = (t0 + 5184);
    t33 = (t29 + 56U);
    t34 = *((char **)t33);
    t35 = (t34 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t29);
    goto LAB2;

LAB5:    t3 = (t0 + 1352U);
    t16 = *((char **)t3);
    t3 = (t0 + 7180U);
    t17 = (t0 + 1192U);
    t18 = *((char **)t17);
    t17 = (t0 + 7164U);
    t19 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t16, t3, t18, t17);
    if (t19 == 1)
        goto LAB14;

LAB15:    t15 = (unsigned char)0;

LAB16:    if (t15 == 1)
        goto LAB11;

LAB12:    t20 = (t0 + 1512U);
    t25 = *((char **)t20);
    t20 = (t0 + 7196U);
    t26 = (t0 + 1192U);
    t27 = *((char **)t26);
    t26 = (t0 + 7164U);
    t28 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t25, t20, t27, t26);
    if (t28 == 1)
        goto LAB17;

LAB18:    t24 = (unsigned char)0;

LAB19:    t14 = t24;

LAB13:    t1 = t14;
    goto LAB7;

LAB8:    t2 = (unsigned char)1;
    goto LAB10;

LAB11:    t14 = (unsigned char)1;
    goto LAB13;

LAB14:    t20 = (t0 + 2312U);
    t21 = *((char **)t20);
    t22 = *((unsigned char *)t21);
    t23 = (t22 == (unsigned char)3);
    t15 = t23;
    goto LAB16;

LAB17:    t29 = (t0 + 2312U);
    t30 = *((char **)t29);
    t31 = *((unsigned char *)t30);
    t32 = (t31 == (unsigned char)3);
    t24 = t32;
    goto LAB19;

LAB21:    goto LAB2;

}


extern void work_a_2169201272_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2169201272_3212880686_p_0,(void *)work_a_2169201272_3212880686_p_1,(void *)work_a_2169201272_3212880686_p_2,(void *)work_a_2169201272_3212880686_p_3,(void *)work_a_2169201272_3212880686_p_4};
	xsi_register_didat("work_a_2169201272_3212880686", "isim/cpu_top_isim_beh.exe.sim/work/a_2169201272_3212880686.didat");
	xsi_register_executes(pe);
}
