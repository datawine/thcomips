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
static const char *ng0 = "C:/Users/cslab/Desktop/thcomips/bus_dispatcher.vhd";
extern char *WORK_P_0136478414;



static void work_a_2768140317_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    int t10;
    int t11;
    int t12;
    int t13;
    char *t14;
    char *t15;
    unsigned int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    unsigned char t22;
    unsigned int t23;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(95, ng0);
    t1 = (t0 + 3176);
    t2 = (t1 + 32U);
    t5 = *((char **)t2);
    t6 = (t5 + 40U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t1 = (t0 + 5958);
    t3 = 1;
    if (16U == 16U)
        goto LAB73;

LAB74:    t3 = 0;

LAB75:    if (t3 != 0)
        goto LAB70;

LAB72:    xsi_set_current_line(99, ng0);
    t1 = (t0 + 5976);
    t5 = (t0 + 3212);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t14 = *((char **)t8);
    memcpy(t14, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB71:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 868U);
    t2 = *((char **)t1);
    t1 = (t0 + 3248);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 3116);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 3176);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 776U);
    t2 = *((char **)t1);
    t9 = *((int *)t2);
    t1 = ((WORK_P_0136478414) + 1760U);
    t5 = *((char **)t1);
    t10 = *((int *)t5);
    if (t9 == t10)
        goto LAB6;

LAB11:    t1 = ((WORK_P_0136478414) + 1828U);
    t6 = *((char **)t1);
    t11 = *((int *)t6);
    if (t9 == t11)
        goto LAB7;

LAB12:    t1 = ((WORK_P_0136478414) + 1896U);
    t7 = *((char **)t1);
    t12 = *((int *)t7);
    if (t9 == t12)
        goto LAB8;

LAB13:    t1 = ((WORK_P_0136478414) + 1964U);
    t8 = *((char **)t1);
    t13 = *((int *)t8);
    if (t9 == t13)
        goto LAB9;

LAB14:
LAB10:
LAB5:    goto LAB3;

LAB6:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 960U);
    t14 = *((char **)t1);
    t1 = (t0 + 5846);
    t4 = 1;
    if (16U == 16U)
        goto LAB22;

LAB23:    t4 = 0;

LAB24:    if (t4 == 1)
        goto LAB19;

LAB20:    t19 = (t0 + 960U);
    t20 = *((char **)t19);
    t19 = (t0 + 5862);
    t22 = 1;
    if (16U == 16U)
        goto LAB28;

LAB29:    t22 = 0;

LAB30:    t3 = t22;

LAB21:    if (t3 != 0)
        goto LAB16;

LAB18:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 5880);
    t5 = (t0 + 3212);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t14 = *((char **)t8);
    memcpy(t14, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB17:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 3248);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB7:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 5882);
    t4 = 1;
    if (16U == 16U)
        goto LAB40;

LAB41:    t4 = 0;

LAB42:    if (t4 == 1)
        goto LAB37;

LAB38:    t8 = (t0 + 960U);
    t14 = *((char **)t8);
    t8 = (t0 + 5898);
    t22 = 1;
    if (16U == 16U)
        goto LAB46;

LAB47:    t22 = 0;

LAB48:    t3 = t22;

LAB39:    if (t3 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 5916);
    t5 = (t0 + 3212);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t14 = *((char **)t8);
    memcpy(t14, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB35:    xsi_set_current_line(75, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 3248);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB8:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 5918);
    t3 = 1;
    if (16U == 16U)
        goto LAB55;

LAB56:    t3 = 0;

LAB57:    if (t3 != 0)
        goto LAB52;

LAB54:    xsi_set_current_line(80, ng0);
    t1 = (t0 + 5936);
    t5 = (t0 + 3212);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t14 = *((char **)t8);
    memcpy(t14, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB53:    xsi_set_current_line(82, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 3248);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(83, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 3284);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB9:    xsi_set_current_line(85, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 5938);
    t3 = 1;
    if (16U == 16U)
        goto LAB64;

LAB65:    t3 = 0;

LAB66:    if (t3 != 0)
        goto LAB61;

LAB63:    xsi_set_current_line(88, ng0);
    t1 = (t0 + 5956);
    t5 = (t0 + 3212);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t14 = *((char **)t8);
    memcpy(t14, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB62:    xsi_set_current_line(90, ng0);
    t1 = (t0 + 960U);
    t2 = *((char **)t1);
    t1 = (t0 + 3248);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(91, ng0);
    t1 = (t0 + 1052U);
    t2 = *((char **)t1);
    t1 = (t0 + 3284);
    t5 = (t1 + 32U);
    t6 = *((char **)t5);
    t7 = (t6 + 40U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB15:;
LAB16:    xsi_set_current_line(64, ng0);
    t26 = (t0 + 5878);
    t28 = (t0 + 3212);
    t29 = (t28 + 32U);
    t30 = *((char **)t29);
    t31 = (t30 + 40U);
    t32 = *((char **)t31);
    memcpy(t32, t26, 2U);
    xsi_driver_first_trans_fast_port(t28);
    goto LAB17;

LAB19:    t3 = (unsigned char)1;
    goto LAB21;

LAB22:    t16 = 0;

LAB25:    if (t16 < 16U)
        goto LAB26;
    else
        goto LAB24;

LAB26:    t17 = (t14 + t16);
    t18 = (t1 + t16);
    if (*((unsigned char *)t17) != *((unsigned char *)t18))
        goto LAB23;

LAB27:    t16 = (t16 + 1);
    goto LAB25;

LAB28:    t23 = 0;

LAB31:    if (t23 < 16U)
        goto LAB32;
    else
        goto LAB30;

LAB32:    t24 = (t20 + t23);
    t25 = (t19 + t23);
    if (*((unsigned char *)t24) != *((unsigned char *)t25))
        goto LAB29;

LAB33:    t23 = (t23 + 1);
    goto LAB31;

LAB34:    xsi_set_current_line(71, ng0);
    t19 = (t0 + 5914);
    t21 = (t0 + 3212);
    t24 = (t21 + 32U);
    t25 = *((char **)t24);
    t26 = (t25 + 40U);
    t27 = *((char **)t26);
    memcpy(t27, t19, 2U);
    xsi_driver_first_trans_fast_port(t21);
    goto LAB35;

LAB37:    t3 = (unsigned char)1;
    goto LAB39;

LAB40:    t16 = 0;

LAB43:    if (t16 < 16U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t6 = (t2 + t16);
    t7 = (t1 + t16);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB41;

LAB45:    t16 = (t16 + 1);
    goto LAB43;

LAB46:    t23 = 0;

LAB49:    if (t23 < 16U)
        goto LAB50;
    else
        goto LAB48;

LAB50:    t17 = (t14 + t23);
    t18 = (t8 + t23);
    if (*((unsigned char *)t17) != *((unsigned char *)t18))
        goto LAB47;

LAB51:    t23 = (t23 + 1);
    goto LAB49;

LAB52:    xsi_set_current_line(78, ng0);
    t8 = (t0 + 5934);
    t15 = (t0 + 3212);
    t17 = (t15 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 2U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB53;

LAB55:    t16 = 0;

LAB58:    if (t16 < 16U)
        goto LAB59;
    else
        goto LAB57;

LAB59:    t6 = (t2 + t16);
    t7 = (t1 + t16);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB56;

LAB60:    t16 = (t16 + 1);
    goto LAB58;

LAB61:    xsi_set_current_line(86, ng0);
    t8 = (t0 + 5954);
    t15 = (t0 + 3212);
    t17 = (t15 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 2U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB62;

LAB64:    t16 = 0;

LAB67:    if (t16 < 16U)
        goto LAB68;
    else
        goto LAB66;

LAB68:    t6 = (t2 + t16);
    t7 = (t1 + t16);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB65;

LAB69:    t16 = (t16 + 1);
    goto LAB67;

LAB70:    xsi_set_current_line(97, ng0);
    t8 = (t0 + 5974);
    t15 = (t0 + 3212);
    t17 = (t15 + 32U);
    t18 = *((char **)t17);
    t19 = (t18 + 40U);
    t20 = *((char **)t19);
    memcpy(t20, t8, 2U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB71;

LAB73:    t16 = 0;

LAB76:    if (t16 < 16U)
        goto LAB77;
    else
        goto LAB75;

LAB77:    t6 = (t2 + t16);
    t7 = (t1 + t16);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB74;

LAB78:    t16 = (t16 + 1);
    goto LAB76;

}

static void work_a_2768140317_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    unsigned char t6;
    unsigned char t7;
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
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 1236U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(112, ng0);
    t1 = (t0 + 1144U);
    t2 = *((char **)t1);
    t1 = (t0 + 3356);
    t8 = (t1 + 32U);
    t10 = *((char **)t8);
    t13 = (t10 + 40U);
    t15 = *((char **)t13);
    memcpy(t15, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 3124);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(108, ng0);
    t1 = (t0 + 776U);
    t8 = *((char **)t1);
    t9 = *((int *)t8);
    t1 = ((WORK_P_0136478414) + 1760U);
    t10 = *((char **)t1);
    t11 = *((int *)t10);
    t12 = (t9 == t11);
    if (t12 == 1)
        goto LAB14;

LAB15:    t1 = (t0 + 776U);
    t13 = *((char **)t1);
    t14 = *((int *)t13);
    t1 = ((WORK_P_0136478414) + 1828U);
    t15 = *((char **)t1);
    t16 = *((int *)t15);
    t17 = (t14 == t16);
    t7 = t17;

LAB16:    if (t7 == 1)
        goto LAB11;

LAB12:    t1 = (t0 + 776U);
    t18 = *((char **)t1);
    t19 = *((int *)t18);
    t1 = ((WORK_P_0136478414) + 1896U);
    t20 = *((char **)t1);
    t21 = *((int *)t20);
    t22 = (t19 == t21);
    t6 = t22;

LAB13:    if (t6 == 1)
        goto LAB8;

LAB9:    t1 = (t0 + 776U);
    t23 = *((char **)t1);
    t24 = *((int *)t23);
    t1 = ((WORK_P_0136478414) + 1964U);
    t25 = *((char **)t1);
    t26 = *((int *)t25);
    t27 = (t24 == t26);
    t5 = t27;

LAB10:    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(109, ng0);
    t1 = (t0 + 1144U);
    t28 = *((char **)t1);
    t1 = (t0 + 3320);
    t29 = (t1 + 32U);
    t30 = *((char **)t29);
    t31 = (t30 + 40U);
    t32 = *((char **)t31);
    memcpy(t32, t28, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB8:    t5 = (unsigned char)1;
    goto LAB10;

LAB11:    t6 = (unsigned char)1;
    goto LAB13;

LAB14:    t7 = (unsigned char)1;
    goto LAB16;

}

static void work_a_2768140317_3212880686_p_2(char *t0)
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
    char *t10;
    char *t11;

LAB0:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 568U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 1328U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB8;

LAB10:
LAB9:    t2 = (t0 + 3132);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(119, ng0);
    t4 = (t0 + 3392);
    t8 = (t4 + 32U);
    t9 = *((char **)t8);
    t10 = (t9 + 40U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 592U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(123, ng0);
    t2 = (t0 + 3392);
    t5 = (t2 + 32U);
    t8 = *((char **)t5);
    t9 = (t8 + 40U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    goto LAB9;

}


extern void work_a_2768140317_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2768140317_3212880686_p_0,(void *)work_a_2768140317_3212880686_p_1,(void *)work_a_2768140317_3212880686_p_2};
	xsi_register_didat("work_a_2768140317_3212880686", "isim/test_cpu_top_isim_beh.exe.sim/work/a_2768140317_3212880686.didat");
	xsi_register_executes(pe);
}
