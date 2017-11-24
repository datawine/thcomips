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
static const char *ng0 = "C:/Users/leavan/Desktop/thcomips/test_register_controll.vhd";
extern char *IEEE_P_3499444699;

char *ieee_p_3499444699_sub_2213602152_3536714472(char *, char *, int , int );


static void work_a_1431471121_2372691052_p_0(char *t0)
{
    char t12[16];
    char *t1;
    char *t2;
    int64 t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    int t10;
    int t11;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;

LAB0:    t1 = (t0 + 3152U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(87, ng0);
    t3 = (100 * 1000LL);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, t3);

LAB6:    *((char **)t1) = &&LAB7;

LAB1:    return;
LAB4:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 6148);
    t5 = (t0 + 3536);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 16U);
    xsi_driver_first_trans_fast(t5);
    xsi_set_current_line(89, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, t3);

LAB10:    *((char **)t1) = &&LAB11;
    goto LAB1;

LAB5:    goto LAB4;

LAB7:    goto LAB5;

LAB8:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 6164);
    *((int *)t2) = 0;
    t4 = (t0 + 6168);
    *((int *)t4) = 10;
    t10 = 0;
    t11 = 10;

LAB12:    if (t10 <= t11)
        goto LAB13;

LAB15:    xsi_set_current_line(95, ng0);
    t2 = (t0 + 6172);
    *((int *)t2) = 0;
    t4 = (t0 + 6176);
    *((int *)t4) = 11;
    t10 = 0;
    t11 = 11;

LAB25:    if (t10 <= t11)
        goto LAB26;

LAB28:    xsi_set_current_line(102, ng0);

LAB40:    *((char **)t1) = &&LAB41;
    goto LAB1;

LAB9:    goto LAB8;

LAB11:    goto LAB9;

LAB13:    xsi_set_current_line(91, ng0);
    t5 = (t0 + 6164);
    t6 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t12, *((int *)t5), 16);
    t7 = (t12 + 12U);
    t13 = *((unsigned int *)t7);
    t13 = (t13 * 1U);
    t14 = (16U != t13);
    if (t14 == 1)
        goto LAB16;

LAB17:    t8 = (t0 + 3600);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 16U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(92, ng0);
    t2 = (t0 + 6164);
    t4 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t12, *((int *)t2), 4);
    t5 = (t12 + 12U);
    t13 = *((unsigned int *)t5);
    t13 = (t13 * 1U);
    t14 = (4U != t13);
    if (t14 == 1)
        goto LAB18;

LAB19:    t6 = (t0 + 3664);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    memcpy(t15, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(93, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, t3);

LAB22:    *((char **)t1) = &&LAB23;
    goto LAB1;

LAB14:    t2 = (t0 + 6164);
    t10 = *((int *)t2);
    t4 = (t0 + 6168);
    t11 = *((int *)t4);
    if (t10 == t11)
        goto LAB15;

LAB24:    t18 = (t10 + 1);
    t10 = t18;
    t5 = (t0 + 6164);
    *((int *)t5) = t10;
    goto LAB12;

LAB16:    xsi_size_not_matching(16U, t13, 0);
    goto LAB17;

LAB18:    xsi_size_not_matching(4U, t13, 0);
    goto LAB19;

LAB20:    goto LAB14;

LAB21:    goto LAB20;

LAB23:    goto LAB21;

LAB26:    xsi_set_current_line(96, ng0);
    t5 = (t0 + 6172);
    t6 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t12, *((int *)t5), 4);
    t7 = (t12 + 12U);
    t13 = *((unsigned int *)t7);
    t13 = (t13 * 1U);
    t14 = (4U != t13);
    if (t14 == 1)
        goto LAB29;

LAB30:    t8 = (t0 + 3728);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t6, 4U);
    xsi_driver_first_trans_fast(t8);
    xsi_set_current_line(97, ng0);
    t2 = (t0 + 6172);
    t4 = ieee_p_3499444699_sub_2213602152_3536714472(IEEE_P_3499444699, t12, *((int *)t2), 4);
    t5 = (t12 + 12U);
    t13 = *((unsigned int *)t5);
    t13 = (t13 * 1U);
    t14 = (4U != t13);
    if (t14 == 1)
        goto LAB31;

LAB32:    t6 = (t0 + 3792);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t9 = (t8 + 56U);
    t15 = *((char **)t9);
    memcpy(t15, t4, 4U);
    xsi_driver_first_trans_fast(t6);
    xsi_set_current_line(98, ng0);
    t3 = (20 * 1000LL);
    t2 = (t0 + 2960);
    xsi_process_wait(t2, t3);

LAB35:    *((char **)t1) = &&LAB36;
    goto LAB1;

LAB27:    t2 = (t0 + 6172);
    t10 = *((int *)t2);
    t4 = (t0 + 6176);
    t11 = *((int *)t4);
    if (t10 == t11)
        goto LAB28;

LAB37:    t18 = (t10 + 1);
    t10 = t18;
    t5 = (t0 + 6172);
    *((int *)t5) = t10;
    goto LAB25;

LAB29:    xsi_size_not_matching(4U, t13, 0);
    goto LAB30;

LAB31:    xsi_size_not_matching(4U, t13, 0);
    goto LAB32;

LAB33:    goto LAB27;

LAB34:    goto LAB33;

LAB36:    goto LAB34;

LAB38:    goto LAB2;

LAB39:    goto LAB38;

LAB41:    goto LAB39;

}


extern void work_a_1431471121_2372691052_init()
{
	static char *pe[] = {(void *)work_a_1431471121_2372691052_p_0};
	xsi_register_didat("work_a_1431471121_2372691052", "isim/test_register_controll_isim_beh.exe.sim/work/a_1431471121_2372691052.didat");
	xsi_register_executes(pe);
}
