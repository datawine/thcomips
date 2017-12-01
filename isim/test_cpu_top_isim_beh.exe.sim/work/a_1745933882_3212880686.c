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
static const char *ng0 = "C:/Users/cslab/Desktop/thcomips/cpu_top.vhd";



char *work_a_1745933882_sub_4278409659_91794841(char *t1, char *t2, char *t3)
{
    char t5[16];
    char t6[16];
    char *t0;
    char *t7;
    char *t8;
    int t9;
    unsigned int t10;
    unsigned char t11;
    char *t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    int t18;
    char *t19;
    int t21;
    char *t22;
    int t24;
    char *t25;
    int t27;
    char *t28;
    int t30;
    char *t31;
    int t33;
    char *t34;
    int t36;
    char *t37;
    int t39;
    char *t40;
    int t42;
    char *t43;
    int t45;
    char *t46;
    int t48;
    char *t49;
    int t51;
    char *t52;
    int t54;
    char *t55;
    int t57;
    char *t58;
    int t60;
    char *t61;
    char *t63;
    char *t64;
    int t65;

LAB0:    t7 = (t6 + 0U);
    t8 = (t7 + 0U);
    *((int *)t8) = 3;
    t8 = (t7 + 4U);
    *((int *)t8) = 0;
    t8 = (t7 + 8U);
    *((int *)t8) = -1;
    t9 = (0 - 3);
    t10 = (t9 * -1);
    t10 = (t10 + 1);
    t8 = (t7 + 12U);
    *((unsigned int *)t8) = t10;
    t8 = (t5 + 4U);
    t11 = (t3 != 0);
    if (t11 == 1)
        goto LAB3;

LAB2:    t12 = (t5 + 8U);
    *((char **)t12) = t6;
    t13 = (t1 + 22037);
    t15 = xsi_mem_cmp(t13, t3, 4U);
    if (t15 == 1)
        goto LAB5;

LAB22:    t16 = (t1 + 22041);
    t18 = xsi_mem_cmp(t16, t3, 4U);
    if (t18 == 1)
        goto LAB6;

LAB23:    t19 = (t1 + 22045);
    t21 = xsi_mem_cmp(t19, t3, 4U);
    if (t21 == 1)
        goto LAB7;

LAB24:    t22 = (t1 + 22049);
    t24 = xsi_mem_cmp(t22, t3, 4U);
    if (t24 == 1)
        goto LAB8;

LAB25:    t25 = (t1 + 22053);
    t27 = xsi_mem_cmp(t25, t3, 4U);
    if (t27 == 1)
        goto LAB9;

LAB26:    t28 = (t1 + 22057);
    t30 = xsi_mem_cmp(t28, t3, 4U);
    if (t30 == 1)
        goto LAB10;

LAB27:    t31 = (t1 + 22061);
    t33 = xsi_mem_cmp(t31, t3, 4U);
    if (t33 == 1)
        goto LAB11;

LAB28:    t34 = (t1 + 22065);
    t36 = xsi_mem_cmp(t34, t3, 4U);
    if (t36 == 1)
        goto LAB12;

LAB29:    t37 = (t1 + 22069);
    t39 = xsi_mem_cmp(t37, t3, 4U);
    if (t39 == 1)
        goto LAB13;

LAB30:    t40 = (t1 + 22073);
    t42 = xsi_mem_cmp(t40, t3, 4U);
    if (t42 == 1)
        goto LAB14;

LAB31:    t43 = (t1 + 22077);
    t45 = xsi_mem_cmp(t43, t3, 4U);
    if (t45 == 1)
        goto LAB15;

LAB32:    t46 = (t1 + 22081);
    t48 = xsi_mem_cmp(t46, t3, 4U);
    if (t48 == 1)
        goto LAB16;

LAB33:    t49 = (t1 + 22085);
    t51 = xsi_mem_cmp(t49, t3, 4U);
    if (t51 == 1)
        goto LAB17;

LAB34:    t52 = (t1 + 22089);
    t54 = xsi_mem_cmp(t52, t3, 4U);
    if (t54 == 1)
        goto LAB18;

LAB35:    t55 = (t1 + 22093);
    t57 = xsi_mem_cmp(t55, t3, 4U);
    if (t57 == 1)
        goto LAB19;

LAB36:    t58 = (t1 + 22097);
    t60 = xsi_mem_cmp(t58, t3, 4U);
    if (t60 == 1)
        goto LAB20;

LAB37:
LAB21:    t7 = (t1 + 22213);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;

LAB1:    return t0;
LAB3:    *((char **)t8) = t3;
    goto LAB2;

LAB4:    t7 = (t1 + 22220);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB5:    t61 = (t1 + 22101);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t61, 7U);
    t63 = (t2 + 0U);
    t64 = (t63 + 0U);
    *((int *)t64) = 1;
    t64 = (t63 + 4U);
    *((int *)t64) = 7;
    t64 = (t63 + 8U);
    *((int *)t64) = 1;
    t65 = (7 - 1);
    t10 = (t65 * 1);
    t10 = (t10 + 1);
    t64 = (t63 + 12U);
    *((unsigned int *)t64) = t10;
    goto LAB1;

LAB6:    t7 = (t1 + 22108);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB7:    t7 = (t1 + 22115);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB8:    t7 = (t1 + 22122);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB9:    t7 = (t1 + 22129);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB10:    t7 = (t1 + 22136);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB11:    t7 = (t1 + 22143);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB12:    t7 = (t1 + 22150);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB13:    t7 = (t1 + 22157);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB14:    t7 = (t1 + 22164);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB15:    t7 = (t1 + 22171);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB16:    t7 = (t1 + 22178);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB17:    t7 = (t1 + 22185);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB18:    t7 = (t1 + 22192);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB19:    t7 = (t1 + 22199);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB20:    t7 = (t1 + 22206);
    t0 = xsi_get_transient_memory(7U);
    memcpy(t0, t7, 7U);
    t14 = (t2 + 0U);
    t16 = (t14 + 0U);
    *((int *)t16) = 1;
    t16 = (t14 + 4U);
    *((int *)t16) = 7;
    t16 = (t14 + 8U);
    *((int *)t16) = 1;
    t9 = (7 - 1);
    t10 = (t9 * 1);
    t10 = (t10 + 1);
    t16 = (t14 + 12U);
    *((unsigned int *)t16) = t10;
    goto LAB1;

LAB38:;
LAB39:    goto LAB4;

LAB40:    goto LAB4;

LAB41:    goto LAB4;

LAB42:    goto LAB4;

LAB43:    goto LAB4;

LAB44:    goto LAB4;

LAB45:    goto LAB4;

LAB46:    goto LAB4;

LAB47:    goto LAB4;

LAB48:    goto LAB4;

LAB49:    goto LAB4;

LAB50:    goto LAB4;

LAB51:    goto LAB4;

LAB52:    goto LAB4;

LAB53:    goto LAB4;

LAB54:    goto LAB4;

LAB55:    goto LAB4;

LAB56:;
}

static void work_a_1745933882_3212880686_p_0(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(368, ng0);

LAB3:    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t4 = (15 - 7);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t2 = (t3 + t6);
    t7 = work_a_1745933882_sub_4278409659_91794841(t0, t1, t2);
    t8 = (t1 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t10 = (7U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 10500);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 7U);
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 10408);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(7U, t9, 0);
    goto LAB6;

}

static void work_a_1745933882_3212880686_p_1(char *t0)
{
    char t1[16];
    char *t2;
    char *t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;

LAB0:    xsi_set_current_line(369, ng0);

LAB3:    t2 = (t0 + 2248U);
    t3 = *((char **)t2);
    t4 = (15 - 3);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t2 = (t3 + t6);
    t7 = work_a_1745933882_sub_4278409659_91794841(t0, t1, t2);
    t8 = (t1 + 12U);
    t9 = *((unsigned int *)t8);
    t9 = (t9 * 1U);
    t10 = (7U != t9);
    if (t10 == 1)
        goto LAB5;

LAB6:    t11 = (t0 + 10536);
    t12 = (t11 + 32U);
    t13 = *((char **)t12);
    t14 = (t13 + 40U);
    t15 = *((char **)t14);
    memcpy(t15, t7, 7U);
    xsi_driver_first_trans_fast_port(t11);

LAB2:    t16 = (t0 + 10416);
    *((int *)t16) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(7U, t9, 0);
    goto LAB6;

}

static void work_a_1745933882_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(378, ng0);

LAB3:    t1 = (t0 + 6756U);
    t2 = *((char **)t1);
    t1 = (t0 + 10572);
    t3 = (t1 + 32U);
    t4 = *((char **)t3);
    t5 = (t4 + 40U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 16U);
    xsi_driver_first_trans_fast(t1);

LAB2:    t7 = (t0 + 10424);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1745933882_3212880686_p_3(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(383, ng0);
    t1 = (t0 + 5468U);
    t2 = *((char **)t1);
    t1 = (t0 + 22227);
    t4 = 1;
    if (16U == 16U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 10432);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(384, ng0);
    t8 = (t0 + 6848U);
    t9 = *((char **)t8);
    t8 = (t0 + 10608);
    t10 = (t8 + 32U);
    t11 = *((char **)t10);
    t12 = (t11 + 40U);
    t13 = *((char **)t12);
    memcpy(t13, t9, 16U);
    xsi_driver_first_trans_fast_port(t8);
    goto LAB3;

LAB5:    t5 = 0;

LAB8:    if (t5 < 16U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

}

static void work_a_1745933882_3212880686_p_4(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(389, ng0);

LAB3:    t1 = (t0 + 592U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10644);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast(t1);

LAB2:    t8 = (t0 + 10440);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1745933882_3212880686_p_5(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(633, ng0);

LAB3:    t1 = (t0 + 7308U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10680);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 10448);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1745933882_3212880686_p_6(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(634, ng0);

LAB3:    t1 = (t0 + 7216U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 10716);
    t4 = (t1 + 32U);
    t5 = *((char **)t4);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 10456);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_1745933882_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1745933882_3212880686_p_0,(void *)work_a_1745933882_3212880686_p_1,(void *)work_a_1745933882_3212880686_p_2,(void *)work_a_1745933882_3212880686_p_3,(void *)work_a_1745933882_3212880686_p_4,(void *)work_a_1745933882_3212880686_p_5,(void *)work_a_1745933882_3212880686_p_6};
	static char *se[] = {(void *)work_a_1745933882_sub_4278409659_91794841};
	xsi_register_didat("work_a_1745933882_3212880686", "isim/test_cpu_top_isim_beh.exe.sim/work/a_1745933882_3212880686.didat");
	xsi_register_executes(pe);
	xsi_register_subprogram_executes(se);
}
