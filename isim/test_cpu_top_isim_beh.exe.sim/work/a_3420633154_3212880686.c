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
static const char *ng0 = "C:/Users/cslab/Desktop/thcomips/register_controll.vhd";
extern char *IEEE_P_3620187407;

char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_3420633154_3212880686_p_0(char *t0)
{
    unsigned char t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    int t13;
    char *t14;
    int t16;
    char *t17;
    int t19;
    char *t20;
    int t22;
    char *t23;
    int t25;
    char *t26;
    int t28;
    char *t29;
    int t31;
    char *t32;
    int t34;
    char *t35;
    int t37;
    char *t38;
    int t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;

LAB0:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    t2 = (t0 + 3956);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(53, ng0);
    t4 = (t0 + 960U);
    t8 = *((char **)t4);
    t4 = (t0 + 7565);
    t10 = xsi_mem_cmp(t4, t8, 4U);
    if (t10 == 1)
        goto LAB9;

LAB21:    t11 = (t0 + 7569);
    t13 = xsi_mem_cmp(t11, t8, 4U);
    if (t13 == 1)
        goto LAB10;

LAB22:    t14 = (t0 + 7573);
    t16 = xsi_mem_cmp(t14, t8, 4U);
    if (t16 == 1)
        goto LAB11;

LAB23:    t17 = (t0 + 7577);
    t19 = xsi_mem_cmp(t17, t8, 4U);
    if (t19 == 1)
        goto LAB12;

LAB24:    t20 = (t0 + 7581);
    t22 = xsi_mem_cmp(t20, t8, 4U);
    if (t22 == 1)
        goto LAB13;

LAB25:    t23 = (t0 + 7585);
    t25 = xsi_mem_cmp(t23, t8, 4U);
    if (t25 == 1)
        goto LAB14;

LAB26:    t26 = (t0 + 7589);
    t28 = xsi_mem_cmp(t26, t8, 4U);
    if (t28 == 1)
        goto LAB15;

LAB27:    t29 = (t0 + 7593);
    t31 = xsi_mem_cmp(t29, t8, 4U);
    if (t31 == 1)
        goto LAB16;

LAB28:    t32 = (t0 + 7597);
    t34 = xsi_mem_cmp(t32, t8, 4U);
    if (t34 == 1)
        goto LAB17;

LAB29:    t35 = (t0 + 7601);
    t37 = xsi_mem_cmp(t35, t8, 4U);
    if (t37 == 1)
        goto LAB18;

LAB30:    t38 = (t0 + 7605);
    t40 = xsi_mem_cmp(t38, t8, 4U);
    if (t40 == 1)
        goto LAB19;

LAB31:
LAB20:
LAB8:    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)2);
    t1 = t7;
    goto LAB7;

LAB9:    xsi_set_current_line(55, ng0);
    t41 = (t0 + 1052U);
    t42 = *((char **)t41);
    t41 = (t0 + 4032);
    t43 = (t41 + 32U);
    t44 = *((char **)t43);
    t45 = (t44 + 40U);
    t46 = *((char **)t45);
    memcpy(t46, t42, 16U);
    xsi_driver_first_trans_fast(t41);
    goto LAB8;

LAB10:    xsi_set_current_line(57, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t2 = (t0 + 4068);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB11:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t2 = (t0 + 4104);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB12:    xsi_set_current_line(61, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t2 = (t0 + 4140);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB13:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t2 = (t0 + 4176);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB14:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t2 = (t0 + 4212);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB15:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t2 = (t0 + 4248);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB16:    xsi_set_current_line(69, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t2 = (t0 + 4284);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB17:    xsi_set_current_line(71, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t2 = (t0 + 4320);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB18:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t2 = (t0 + 4356);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB19:    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1052U);
    t4 = *((char **)t2);
    t2 = (t0 + 4392);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t11 = *((char **)t9);
    memcpy(t11, t4, 16U);
    xsi_driver_first_trans_fast(t2);
    goto LAB8;

LAB32:;
}

static void work_a_3420633154_3212880686_p_1(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(81, ng0);

LAB3:    t2 = (t0 + 684U);
    t3 = *((char **)t2);
    t2 = (t0 + 7144U);
    t4 = (t0 + 2524U);
    t5 = *((char **)t4);
    t4 = (t0 + 7288U);
    t6 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t1, t3, t2, t5, t4);
    t7 = (t1 + 12U);
    t8 = *((unsigned int *)t7);
    t9 = (1U * t8);
    t10 = (16U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 4428);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t6, 16U);
    xsi_driver_first_trans_fast(t11);

LAB2:    t16 = (t0 + 3964);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(16U, t9, 0);
    goto LAB6;

}

static void work_a_3420633154_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    int t14;
    char *t15;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    int t26;
    char *t27;
    int t29;
    char *t30;
    int t32;
    char *t33;
    int t35;
    char *t36;
    int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 3472U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(83, ng0);
    t2 = (t0 + 776U);
    t3 = *((char **)t2);
    t2 = (t0 + 7609);
    t5 = xsi_mem_cmp(t2, t3, 4U);
    if (t5 == 1)
        goto LAB5;

LAB18:    t6 = (t0 + 7613);
    t8 = xsi_mem_cmp(t6, t3, 4U);
    if (t8 == 1)
        goto LAB6;

LAB19:    t9 = (t0 + 7617);
    t11 = xsi_mem_cmp(t9, t3, 4U);
    if (t11 == 1)
        goto LAB7;

LAB20:    t12 = (t0 + 7621);
    t14 = xsi_mem_cmp(t12, t3, 4U);
    if (t14 == 1)
        goto LAB8;

LAB21:    t15 = (t0 + 7625);
    t17 = xsi_mem_cmp(t15, t3, 4U);
    if (t17 == 1)
        goto LAB9;

LAB22:    t18 = (t0 + 7629);
    t20 = xsi_mem_cmp(t18, t3, 4U);
    if (t20 == 1)
        goto LAB10;

LAB23:    t21 = (t0 + 7633);
    t23 = xsi_mem_cmp(t21, t3, 4U);
    if (t23 == 1)
        goto LAB11;

LAB24:    t24 = (t0 + 7637);
    t26 = xsi_mem_cmp(t24, t3, 4U);
    if (t26 == 1)
        goto LAB12;

LAB25:    t27 = (t0 + 7641);
    t29 = xsi_mem_cmp(t27, t3, 4U);
    if (t29 == 1)
        goto LAB13;

LAB26:    t30 = (t0 + 7645);
    t32 = xsi_mem_cmp(t30, t3, 4U);
    if (t32 == 1)
        goto LAB14;

LAB27:    t33 = (t0 + 7649);
    t35 = xsi_mem_cmp(t33, t3, 4U);
    if (t35 == 1)
        goto LAB15;

LAB28:    t36 = (t0 + 7653);
    t38 = xsi_mem_cmp(t36, t3, 4U);
    if (t38 == 1)
        goto LAB16;

LAB29:
LAB17:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 7657);
    t4 = (t0 + 4464);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(83, ng0);

LAB33:    t2 = (t0 + 3972);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB34;

LAB1:    return;
LAB5:    xsi_set_current_line(85, ng0);
    t39 = (t0 + 1420U);
    t40 = *((char **)t39);
    t39 = (t0 + 4464);
    t41 = (t39 + 32U);
    t42 = *((char **)t41);
    t43 = (t42 + 40U);
    t44 = *((char **)t43);
    memcpy(t44, t40, 16U);
    xsi_driver_first_trans_fast_port(t39);
    goto LAB4;

LAB6:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 4464);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB7:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1604U);
    t3 = *((char **)t2);
    t2 = (t0 + 4464);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB8:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1696U);
    t3 = *((char **)t2);
    t2 = (t0 + 4464);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB9:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1788U);
    t3 = *((char **)t2);
    t2 = (t0 + 4464);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB10:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1880U);
    t3 = *((char **)t2);
    t2 = (t0 + 4464);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB11:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1972U);
    t3 = *((char **)t2);
    t2 = (t0 + 4464);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB12:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2064U);
    t3 = *((char **)t2);
    t2 = (t0 + 4464);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB13:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t2 = (t0 + 4464);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB14:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t2 = (t0 + 4464);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB15:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2432U);
    t3 = *((char **)t2);
    t2 = (t0 + 4464);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB16:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 2340U);
    t3 = *((char **)t2);
    t2 = (t0 + 4464);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB30:;
LAB31:    t3 = (t0 + 3972);
    *((int *)t3) = 0;
    goto LAB2;

LAB32:    goto LAB31;

LAB34:    goto LAB32;

}

static void work_a_3420633154_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    int t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    int t11;
    char *t12;
    int t14;
    char *t15;
    int t17;
    char *t18;
    int t20;
    char *t21;
    int t23;
    char *t24;
    int t26;
    char *t27;
    int t29;
    char *t30;
    int t32;
    char *t33;
    int t35;
    char *t36;
    int t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    char *t43;
    char *t44;

LAB0:    t1 = (t0 + 3616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(99, ng0);
    t2 = (t0 + 868U);
    t3 = *((char **)t2);
    t2 = (t0 + 7673);
    t5 = xsi_mem_cmp(t2, t3, 4U);
    if (t5 == 1)
        goto LAB5;

LAB18:    t6 = (t0 + 7677);
    t8 = xsi_mem_cmp(t6, t3, 4U);
    if (t8 == 1)
        goto LAB6;

LAB19:    t9 = (t0 + 7681);
    t11 = xsi_mem_cmp(t9, t3, 4U);
    if (t11 == 1)
        goto LAB7;

LAB20:    t12 = (t0 + 7685);
    t14 = xsi_mem_cmp(t12, t3, 4U);
    if (t14 == 1)
        goto LAB8;

LAB21:    t15 = (t0 + 7689);
    t17 = xsi_mem_cmp(t15, t3, 4U);
    if (t17 == 1)
        goto LAB9;

LAB22:    t18 = (t0 + 7693);
    t20 = xsi_mem_cmp(t18, t3, 4U);
    if (t20 == 1)
        goto LAB10;

LAB23:    t21 = (t0 + 7697);
    t23 = xsi_mem_cmp(t21, t3, 4U);
    if (t23 == 1)
        goto LAB11;

LAB24:    t24 = (t0 + 7701);
    t26 = xsi_mem_cmp(t24, t3, 4U);
    if (t26 == 1)
        goto LAB12;

LAB25:    t27 = (t0 + 7705);
    t29 = xsi_mem_cmp(t27, t3, 4U);
    if (t29 == 1)
        goto LAB13;

LAB26:    t30 = (t0 + 7709);
    t32 = xsi_mem_cmp(t30, t3, 4U);
    if (t32 == 1)
        goto LAB14;

LAB27:    t33 = (t0 + 7713);
    t35 = xsi_mem_cmp(t33, t3, 4U);
    if (t35 == 1)
        goto LAB15;

LAB28:    t36 = (t0 + 7717);
    t38 = xsi_mem_cmp(t36, t3, 4U);
    if (t38 == 1)
        goto LAB16;

LAB29:
LAB17:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 7721);
    t4 = (t0 + 4500);
    t6 = (t4 + 32U);
    t7 = *((char **)t6);
    t9 = (t7 + 40U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 16U);
    xsi_driver_first_trans_fast_port(t4);

LAB4:    xsi_set_current_line(99, ng0);

LAB33:    t2 = (t0 + 3980);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB34;

LAB1:    return;
LAB5:    xsi_set_current_line(101, ng0);
    t39 = (t0 + 1420U);
    t40 = *((char **)t39);
    t39 = (t0 + 4500);
    t41 = (t39 + 32U);
    t42 = *((char **)t41);
    t43 = (t42 + 40U);
    t44 = *((char **)t43);
    memcpy(t44, t40, 16U);
    xsi_driver_first_trans_fast_port(t39);
    goto LAB4;

LAB6:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 4500);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB7:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1604U);
    t3 = *((char **)t2);
    t2 = (t0 + 4500);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB8:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1696U);
    t3 = *((char **)t2);
    t2 = (t0 + 4500);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB9:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1788U);
    t3 = *((char **)t2);
    t2 = (t0 + 4500);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB10:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1880U);
    t3 = *((char **)t2);
    t2 = (t0 + 4500);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB11:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 1972U);
    t3 = *((char **)t2);
    t2 = (t0 + 4500);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB12:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2064U);
    t3 = *((char **)t2);
    t2 = (t0 + 4500);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB13:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t2 = (t0 + 4500);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB14:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2156U);
    t3 = *((char **)t2);
    t2 = (t0 + 4500);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB15:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2432U);
    t3 = *((char **)t2);
    t2 = (t0 + 4500);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB16:    xsi_set_current_line(101, ng0);
    t2 = (t0 + 2340U);
    t3 = *((char **)t2);
    t2 = (t0 + 4500);
    t4 = (t2 + 32U);
    t6 = *((char **)t4);
    t7 = (t6 + 40U);
    t9 = *((char **)t7);
    memcpy(t9, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB30:;
LAB31:    t3 = (t0 + 3980);
    *((int *)t3) = 0;
    goto LAB2;

LAB32:    goto LAB31;

LAB34:    goto LAB32;

}

static void work_a_3420633154_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(115, ng0);

LAB3:    t1 = (t0 + 1972U);
    t2 = *((char **)t1);
    t1 = (t0 + 4536);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3988);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3420633154_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3420633154_3212880686_p_0,(void *)work_a_3420633154_3212880686_p_1,(void *)work_a_3420633154_3212880686_p_2,(void *)work_a_3420633154_3212880686_p_3,(void *)work_a_3420633154_3212880686_p_4};
	xsi_register_didat("work_a_3420633154_3212880686", "isim/test_cpu_top_isim_beh.exe.sim/work/a_3420633154_3212880686.didat");
	xsi_register_executes(pe);
}
