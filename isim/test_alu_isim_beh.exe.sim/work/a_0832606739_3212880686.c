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
static const char *ng0 = "G:/vhdl/thcomips/alu.vhd";
extern char *IEEE_P_3620187407;
extern char *WORK_P_0136478414;
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_1735675855_503743352(char *, char *, char *, char *, char *, char *);
char *ieee_p_2592010699_sub_1837678034_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_3293060193_503743352(char *, char *, char *, char *, unsigned char );
char *ieee_p_2592010699_sub_393209765_503743352(char *, char *, char *, char *);
char *ieee_p_2592010699_sub_795620321_503743352(char *, char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_1742983514_3965413181(char *, char *, char *, char *, char *);
unsigned char ieee_p_3620187407_sub_4042748798_3965413181(char *, char *, char *, char *, char *);
int ieee_p_3620187407_sub_514432868_3965413181(char *, char *, char *);
char *ieee_p_3620187407_sub_767668596_3965413181(char *, char *, char *, char *, char *, char *);
char *ieee_p_3620187407_sub_767740470_3965413181(char *, char *, char *, char *, char *, char *);


static void work_a_0832606739_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 6416U);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t3 = (t0 + 6432U);
    t5 = ieee_p_3620187407_sub_4042748798_3965413181(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB5:    t17 = xsi_get_transient_memory(16U);
    memset(t17, 0, 16U);
    t18 = t17;
    memset(t18, (unsigned char)2, 16U);
    t19 = (t0 + 4504);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t17, 16U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t24 = (t0 + 4376);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    memset(t7, (unsigned char)2, 16U);
    t8 = (0 - 15);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (t7 + t10);
    *((unsigned char *)t11) = (unsigned char)3;
    t12 = (t0 + 4504);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t6, 16U);
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    unsigned char t5;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned int t10;
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
    char *t21;
    char *t22;
    char *t23;
    char *t24;

LAB0:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t1 = (t0 + 6416U);
    t3 = (t0 + 1352U);
    t4 = *((char **)t3);
    t3 = (t0 + 6432U);
    t5 = ieee_p_3620187407_sub_1742983514_3965413181(IEEE_P_3620187407, t2, t1, t4, t3);
    if (t5 != 0)
        goto LAB3;

LAB4:
LAB5:    t17 = xsi_get_transient_memory(16U);
    memset(t17, 0, 16U);
    t18 = t17;
    memset(t18, (unsigned char)2, 16U);
    t19 = (t0 + 4568);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t17, 16U);
    xsi_driver_first_trans_fast(t19);

LAB2:    t24 = (t0 + 4392);
    *((int *)t24) = 1;

LAB1:    return;
LAB3:    t6 = xsi_get_transient_memory(16U);
    memset(t6, 0, 16U);
    t7 = t6;
    memset(t7, (unsigned char)2, 16U);
    t8 = (0 - 15);
    t9 = (t8 * -1);
    t10 = (1U * t9);
    t11 = (t7 + t10);
    *((unsigned char *)t11) = (unsigned char)3;
    t12 = (t0 + 4568);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t6, 16U);
    xsi_driver_first_trans_fast(t12);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_2(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    char *t6;
    char *t7;
    int t8;
    unsigned int t9;
    unsigned char t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;

LAB0:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 6448U);
    t3 = (t0 + 6592);
    t6 = (t5 + 0U);
    t7 = (t6 + 0U);
    *((int *)t7) = 0;
    t7 = (t6 + 4U);
    *((int *)t7) = 15;
    t7 = (t6 + 8U);
    *((int *)t7) = 1;
    t8 = (15 - 0);
    t9 = (t8 * 1);
    t9 = (t9 + 1);
    t7 = (t6 + 12U);
    *((unsigned int *)t7) = t9;
    t10 = ieee_std_logic_unsigned_equal_stdv_stdv(IEEE_P_3620187407, t2, t1, t3, t5);
    if (t10 != 0)
        goto LAB3;

LAB4:
LAB5:    t15 = (t0 + 1512U);
    t16 = *((char **)t15);
    t15 = (t0 + 6448U);
    t17 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t16, t15);
    t18 = (t0 + 4632);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    *((int *)t22) = t17;
    xsi_driver_first_trans_fast(t18);

LAB2:    t23 = (t0 + 4408);
    *((int *)t23) = 1;

LAB1:    return;
LAB3:    t7 = (t0 + 4632);
    t11 = (t7 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    *((int *)t14) = 8;
    xsi_driver_first_trans_fast(t7);
    goto LAB2;

LAB6:    goto LAB2;

}

static void work_a_0832606739_3212880686_p_3(char *t0)
{
    char t51[16];
    char t63[16];
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    int t6;
    char *t7;
    int t8;
    char *t9;
    int t10;
    char *t11;
    int t12;
    char *t13;
    int t14;
    char *t15;
    int t16;
    char *t17;
    int t18;
    char *t19;
    int t20;
    char *t21;
    int t22;
    char *t23;
    int t24;
    char *t25;
    int t26;
    char *t27;
    int t28;
    char *t29;
    int t30;
    char *t31;
    int t32;
    char *t33;
    int t34;
    char *t35;
    int t36;
    char *t37;
    int t38;
    char *t39;
    int t40;
    char *t41;
    int t42;
    char *t43;
    int t44;
    char *t45;
    int t46;
    char *t47;
    int t48;
    char *t49;
    int t50;
    char *t52;
    char *t53;
    char *t54;
    unsigned int t55;
    unsigned int t56;
    unsigned char t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;
    char *t62;

LAB0:    t1 = (t0 + 4056U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(52, ng0);
    t2 = (t0 + 1032U);
    t3 = *((char **)t2);
    t4 = *((int *)t3);
    t2 = ((WORK_P_0136478414) + 1288U);
    t5 = *((char **)t2);
    t6 = *((int *)t5);
    if (t4 == t6)
        goto LAB5;

LAB29:    t2 = ((WORK_P_0136478414) + 1408U);
    t7 = *((char **)t2);
    t8 = *((int *)t7);
    if (t4 == t8)
        goto LAB6;

LAB30:    t2 = ((WORK_P_0136478414) + 1528U);
    t9 = *((char **)t2);
    t10 = *((int *)t9);
    if (t4 == t10)
        goto LAB7;

LAB31:    t2 = ((WORK_P_0136478414) + 1648U);
    t11 = *((char **)t2);
    t12 = *((int *)t11);
    if (t4 == t12)
        goto LAB8;

LAB32:    t2 = ((WORK_P_0136478414) + 1768U);
    t13 = *((char **)t2);
    t14 = *((int *)t13);
    if (t4 == t14)
        goto LAB9;

LAB33:    t2 = ((WORK_P_0136478414) + 1888U);
    t15 = *((char **)t2);
    t16 = *((int *)t15);
    if (t4 == t16)
        goto LAB10;

LAB34:    t2 = ((WORK_P_0136478414) + 2008U);
    t17 = *((char **)t2);
    t18 = *((int *)t17);
    if (t4 == t18)
        goto LAB11;

LAB35:    t2 = ((WORK_P_0136478414) + 2128U);
    t19 = *((char **)t2);
    t20 = *((int *)t19);
    if (t4 == t20)
        goto LAB12;

LAB36:    t2 = ((WORK_P_0136478414) + 2248U);
    t21 = *((char **)t2);
    t22 = *((int *)t21);
    if (t4 == t22)
        goto LAB13;

LAB37:    t2 = ((WORK_P_0136478414) + 2368U);
    t23 = *((char **)t2);
    t24 = *((int *)t23);
    if (t4 == t24)
        goto LAB14;

LAB38:    t2 = ((WORK_P_0136478414) + 2488U);
    t25 = *((char **)t2);
    t26 = *((int *)t25);
    if (t4 == t26)
        goto LAB15;

LAB39:    t2 = ((WORK_P_0136478414) + 2608U);
    t27 = *((char **)t2);
    t28 = *((int *)t27);
    if (t4 == t28)
        goto LAB16;

LAB40:    t2 = ((WORK_P_0136478414) + 2728U);
    t29 = *((char **)t2);
    t30 = *((int *)t29);
    if (t4 == t30)
        goto LAB17;

LAB41:    t2 = ((WORK_P_0136478414) + 2848U);
    t31 = *((char **)t2);
    t32 = *((int *)t31);
    if (t4 == t32)
        goto LAB18;

LAB42:    t2 = ((WORK_P_0136478414) + 2968U);
    t33 = *((char **)t2);
    t34 = *((int *)t33);
    if (t4 == t34)
        goto LAB19;

LAB43:    t2 = ((WORK_P_0136478414) + 3088U);
    t35 = *((char **)t2);
    t36 = *((int *)t35);
    if (t4 == t36)
        goto LAB20;

LAB44:    t2 = ((WORK_P_0136478414) + 3208U);
    t37 = *((char **)t2);
    t38 = *((int *)t37);
    if (t4 == t38)
        goto LAB21;

LAB45:    t2 = ((WORK_P_0136478414) + 3328U);
    t39 = *((char **)t2);
    t40 = *((int *)t39);
    if (t4 == t40)
        goto LAB22;

LAB46:    t2 = ((WORK_P_0136478414) + 3448U);
    t41 = *((char **)t2);
    t42 = *((int *)t41);
    if (t4 == t42)
        goto LAB23;

LAB47:    t2 = ((WORK_P_0136478414) + 4288U);
    t43 = *((char **)t2);
    t44 = *((int *)t43);
    if (t4 == t44)
        goto LAB24;

LAB48:    t2 = ((WORK_P_0136478414) + 4408U);
    t45 = *((char **)t2);
    t46 = *((int *)t45);
    if (t4 == t46)
        goto LAB25;

LAB49:    t2 = ((WORK_P_0136478414) + 4528U);
    t47 = *((char **)t2);
    t48 = *((int *)t47);
    if (t4 == t48)
        goto LAB26;

LAB50:    t2 = ((WORK_P_0136478414) + 4648U);
    t49 = *((char **)t2);
    t50 = *((int *)t49);
    if (t4 == t50)
        goto LAB27;

LAB51:
LAB28:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 6608);
    t5 = (t0 + 4696);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    t11 = (t9 + 56U);
    t13 = *((char **)t11);
    memcpy(t13, t2, 16U);
    xsi_driver_first_trans_fast_port(t5);

LAB4:    xsi_set_current_line(52, ng0);

LAB87:    t2 = (t0 + 4424);
    *((int *)t2) = 1;
    *((char **)t1) = &&LAB88;

LAB1:    return;
LAB5:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1352U);
    t52 = *((char **)t2);
    t2 = (t0 + 6432U);
    t53 = ieee_p_2592010699_sub_1837678034_503743352(IEEE_P_2592010699, t51, t52, t2);
    t54 = (t51 + 12U);
    t55 = *((unsigned int *)t54);
    t56 = (1U * t55);
    t57 = (16U != t56);
    if (t57 == 1)
        goto LAB53;

LAB54:    t58 = (t0 + 4696);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    t61 = (t60 + 56U);
    t62 = *((char **)t61);
    memcpy(t62, t53, 16U);
    xsi_driver_first_trans_fast_port(t58);
    goto LAB4;

LAB6:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6432U);
    t5 = (t0 + 1512U);
    t7 = *((char **)t5);
    t5 = (t0 + 6448U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t51, t3, t2, t7, t5);
    t11 = (t51 + 12U);
    t55 = *((unsigned int *)t11);
    t56 = (1U * t55);
    t57 = (16U != t56);
    if (t57 == 1)
        goto LAB55;

LAB56:    t13 = (t0 + 4696);
    t15 = (t13 + 56U);
    t17 = *((char **)t15);
    t19 = (t17 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t9, 16U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB4;

LAB7:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6416U);
    t5 = (t0 + 1512U);
    t7 = *((char **)t5);
    t5 = (t0 + 6448U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t51, t3, t2, t7, t5);
    t11 = (t51 + 12U);
    t55 = *((unsigned int *)t11);
    t56 = (1U * t55);
    t57 = (16U != t56);
    if (t57 == 1)
        goto LAB57;

LAB58:    t13 = (t0 + 4696);
    t15 = (t13 + 56U);
    t17 = *((char **)t15);
    t19 = (t17 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t9, 16U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB4;

LAB8:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6416U);
    t5 = (t0 + 1512U);
    t7 = *((char **)t5);
    t5 = (t0 + 6448U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t51, t3, t2, t7, t5);
    t11 = (t51 + 12U);
    t55 = *((unsigned int *)t11);
    t56 = (1U * t55);
    t57 = (16U != t56);
    if (t57 == 1)
        goto LAB59;

LAB60:    t13 = (t0 + 4696);
    t15 = (t13 + 56U);
    t17 = *((char **)t15);
    t19 = (t17 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t9, 16U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB4;

LAB9:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6432U);
    t5 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t63, t3, t2, (unsigned char)0);
    t7 = (t63 + 12U);
    t55 = *((unsigned int *)t7);
    t55 = (t55 * 1U);
    t9 = (t0 + 2152U);
    t11 = *((char **)t9);
    t4 = *((int *)t11);
    t9 = xsi_vhdl_bitvec_sll(t9, t5, t55, t4);
    t13 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t51, t9, t63);
    t15 = (t51 + 12U);
    t56 = *((unsigned int *)t15);
    t56 = (t56 * 1U);
    t57 = (16U != t56);
    if (t57 == 1)
        goto LAB61;

LAB62:    t17 = (t0 + 4696);
    t19 = (t17 + 56U);
    t21 = *((char **)t19);
    t23 = (t21 + 56U);
    t25 = *((char **)t23);
    memcpy(t25, t13, 16U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB4;

LAB10:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6432U);
    t5 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t63, t3, t2, (unsigned char)0);
    t7 = (t63 + 12U);
    t55 = *((unsigned int *)t7);
    t55 = (t55 * 1U);
    t9 = (t0 + 2152U);
    t11 = *((char **)t9);
    t4 = *((int *)t11);
    t9 = xsi_vhdl_bitvec_sra(t9, t5, t55, t4);
    t13 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t51, t9, t63);
    t15 = (t51 + 12U);
    t56 = *((unsigned int *)t15);
    t56 = (t56 * 1U);
    t57 = (16U != t56);
    if (t57 == 1)
        goto LAB63;

LAB64:    t17 = (t0 + 4696);
    t19 = (t17 + 56U);
    t21 = *((char **)t19);
    t23 = (t21 + 56U);
    t25 = *((char **)t23);
    memcpy(t25, t13, 16U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB4;

LAB11:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6416U);
    t5 = (t0 + 1512U);
    t7 = *((char **)t5);
    t5 = (t0 + 6448U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t51, t3, t2, t7, t5);
    t11 = (t51 + 12U);
    t55 = *((unsigned int *)t11);
    t56 = (1U * t55);
    t57 = (16U != t56);
    if (t57 == 1)
        goto LAB65;

LAB66:    t13 = (t0 + 4696);
    t15 = (t13 + 56U);
    t17 = *((char **)t15);
    t19 = (t17 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t9, 16U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB4;

LAB12:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6416U);
    t5 = (t0 + 1352U);
    t7 = *((char **)t5);
    t5 = (t0 + 6432U);
    t9 = ieee_p_2592010699_sub_795620321_503743352(IEEE_P_2592010699, t51, t3, t2, t7, t5);
    t11 = (t51 + 12U);
    t55 = *((unsigned int *)t11);
    t56 = (1U * t55);
    t57 = (16U != t56);
    if (t57 == 1)
        goto LAB67;

LAB68:    t13 = (t0 + 4696);
    t15 = (t13 + 56U);
    t17 = *((char **)t15);
    t19 = (t17 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t9, 16U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB4;

LAB13:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6416U);
    t5 = (t0 + 1352U);
    t7 = *((char **)t5);
    t5 = (t0 + 6432U);
    t9 = ieee_p_2592010699_sub_1735675855_503743352(IEEE_P_2592010699, t51, t3, t2, t7, t5);
    t11 = (t51 + 12U);
    t55 = *((unsigned int *)t11);
    t56 = (1U * t55);
    t57 = (16U != t56);
    if (t57 == 1)
        goto LAB69;

LAB70:    t13 = (t0 + 4696);
    t15 = (t13 + 56U);
    t17 = *((char **)t15);
    t19 = (t17 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t9, 16U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB4;

LAB14:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6432U);
    t5 = ieee_p_2592010699_sub_3293060193_503743352(IEEE_P_2592010699, t63, t3, t2, (unsigned char)0);
    t7 = (t63 + 12U);
    t55 = *((unsigned int *)t7);
    t55 = (t55 * 1U);
    t9 = (t0 + 1192U);
    t11 = *((char **)t9);
    t9 = (t0 + 6416U);
    t4 = ieee_p_3620187407_sub_514432868_3965413181(IEEE_P_3620187407, t11, t9);
    t13 = xsi_vhdl_bitvec_sll(t13, t5, t55, t4);
    t15 = ieee_p_2592010699_sub_393209765_503743352(IEEE_P_2592010699, t51, t13, t63);
    t17 = (t51 + 12U);
    t56 = *((unsigned int *)t17);
    t56 = (t56 * 1U);
    t57 = (16U != t56);
    if (t57 == 1)
        goto LAB71;

LAB72:    t19 = (t0 + 4696);
    t21 = (t19 + 56U);
    t23 = *((char **)t21);
    t25 = (t23 + 56U);
    t27 = *((char **)t25);
    memcpy(t27, t15, 16U);
    xsi_driver_first_trans_fast_port(t19);
    goto LAB4;

LAB15:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6416U);
    t5 = (t0 + 1352U);
    t7 = *((char **)t5);
    t5 = (t0 + 6432U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t51, t3, t2, t7, t5);
    t11 = (t51 + 12U);
    t55 = *((unsigned int *)t11);
    t56 = (1U * t55);
    t57 = (16U != t56);
    if (t57 == 1)
        goto LAB73;

LAB74:    t13 = (t0 + 4696);
    t15 = (t13 + 56U);
    t17 = *((char **)t15);
    t19 = (t17 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t9, 16U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB4;

LAB16:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6416U);
    t5 = (t0 + 1352U);
    t7 = *((char **)t5);
    t5 = (t0 + 6432U);
    t9 = ieee_p_3620187407_sub_767740470_3965413181(IEEE_P_3620187407, t51, t3, t2, t7, t5);
    t11 = (t51 + 12U);
    t55 = *((unsigned int *)t11);
    t56 = (1U * t55);
    t57 = (16U != t56);
    if (t57 == 1)
        goto LAB75;

LAB76:    t13 = (t0 + 4696);
    t15 = (t13 + 56U);
    t17 = *((char **)t15);
    t19 = (t17 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t9, 16U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB4;

LAB17:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1832U);
    t3 = *((char **)t2);
    t2 = (t0 + 4696);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB18:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1992U);
    t3 = *((char **)t2);
    t2 = (t0 + 4696);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB19:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1512U);
    t3 = *((char **)t2);
    t2 = (t0 + 4696);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB20:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6416U);
    t5 = (t0 + 1512U);
    t7 = *((char **)t5);
    t5 = (t0 + 6448U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t51, t3, t2, t7, t5);
    t11 = (t51 + 12U);
    t55 = *((unsigned int *)t11);
    t56 = (1U * t55);
    t57 = (16U != t56);
    if (t57 == 1)
        goto LAB77;

LAB78:    t13 = (t0 + 4696);
    t15 = (t13 + 56U);
    t17 = *((char **)t15);
    t19 = (t17 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t9, 16U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB4;

LAB21:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6432U);
    t5 = (t0 + 1512U);
    t7 = *((char **)t5);
    t5 = (t0 + 6448U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t51, t3, t2, t7, t5);
    t11 = (t51 + 12U);
    t55 = *((unsigned int *)t11);
    t56 = (1U * t55);
    t57 = (16U != t56);
    if (t57 == 1)
        goto LAB79;

LAB80:    t13 = (t0 + 4696);
    t15 = (t13 + 56U);
    t17 = *((char **)t15);
    t19 = (t17 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t9, 16U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB4;

LAB22:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 6416U);
    t5 = (t0 + 1512U);
    t7 = *((char **)t5);
    t5 = (t0 + 6448U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t51, t3, t2, t7, t5);
    t11 = (t51 + 12U);
    t55 = *((unsigned int *)t11);
    t56 = (1U * t55);
    t57 = (16U != t56);
    if (t57 == 1)
        goto LAB81;

LAB82:    t13 = (t0 + 4696);
    t15 = (t13 + 56U);
    t17 = *((char **)t15);
    t19 = (t17 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t9, 16U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB4;

LAB23:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 6432U);
    t5 = (t0 + 1512U);
    t7 = *((char **)t5);
    t5 = (t0 + 6448U);
    t9 = ieee_p_3620187407_sub_767668596_3965413181(IEEE_P_3620187407, t51, t3, t2, t7, t5);
    t11 = (t51 + 12U);
    t55 = *((unsigned int *)t11);
    t56 = (1U * t55);
    t57 = (16U != t56);
    if (t57 == 1)
        goto LAB83;

LAB84:    t13 = (t0 + 4696);
    t15 = (t13 + 56U);
    t17 = *((char **)t15);
    t19 = (t17 + 56U);
    t21 = *((char **)t19);
    memcpy(t21, t9, 16U);
    xsi_driver_first_trans_fast_port(t13);
    goto LAB4;

LAB24:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 4696);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB25:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1352U);
    t3 = *((char **)t2);
    t2 = (t0 + 4696);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB26:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4696);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB27:    xsi_set_current_line(54, ng0);
    t2 = (t0 + 1192U);
    t3 = *((char **)t2);
    t2 = (t0 + 4696);
    t5 = (t2 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t3, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB4;

LAB52:;
LAB53:    xsi_size_not_matching(16U, t56, 0);
    goto LAB54;

LAB55:    xsi_size_not_matching(16U, t56, 0);
    goto LAB56;

LAB57:    xsi_size_not_matching(16U, t56, 0);
    goto LAB58;

LAB59:    xsi_size_not_matching(16U, t56, 0);
    goto LAB60;

LAB61:    xsi_size_not_matching(16U, t56, 0);
    goto LAB62;

LAB63:    xsi_size_not_matching(16U, t56, 0);
    goto LAB64;

LAB65:    xsi_size_not_matching(16U, t56, 0);
    goto LAB66;

LAB67:    xsi_size_not_matching(16U, t56, 0);
    goto LAB68;

LAB69:    xsi_size_not_matching(16U, t56, 0);
    goto LAB70;

LAB71:    xsi_size_not_matching(16U, t56, 0);
    goto LAB72;

LAB73:    xsi_size_not_matching(16U, t56, 0);
    goto LAB74;

LAB75:    xsi_size_not_matching(16U, t56, 0);
    goto LAB76;

LAB77:    xsi_size_not_matching(16U, t56, 0);
    goto LAB78;

LAB79:    xsi_size_not_matching(16U, t56, 0);
    goto LAB80;

LAB81:    xsi_size_not_matching(16U, t56, 0);
    goto LAB82;

LAB83:    xsi_size_not_matching(16U, t56, 0);
    goto LAB84;

LAB85:    t3 = (t0 + 4424);
    *((int *)t3) = 0;
    goto LAB2;

LAB86:    goto LAB85;

LAB88:    goto LAB86;

}


extern void work_a_0832606739_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0832606739_3212880686_p_0,(void *)work_a_0832606739_3212880686_p_1,(void *)work_a_0832606739_3212880686_p_2,(void *)work_a_0832606739_3212880686_p_3};
	xsi_register_didat("work_a_0832606739_3212880686", "isim/test_alu_isim_beh.exe.sim/work/a_0832606739_3212880686.didat");
	xsi_register_executes(pe);
}
