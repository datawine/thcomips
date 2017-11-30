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
static const char *ng0 = "G:/vhdl/lastfinal/thcomips/bus_dispatcher.vhd";
extern char *WORK_P_0136478414;



static void work_a_2768140317_3212880686_p_0(char *t0)
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
    unsigned char t12;
    int t13;
    int t14;
    unsigned char t15;
    int t16;
    int t17;
    unsigned char t18;
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
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    xsi_set_current_line(59, ng0);
    t2 = (t0 + 992U);
    t3 = xsi_signal_has_event(t2);
    if (t3 == 1)
        goto LAB5;

LAB6:    t1 = (unsigned char)0;

LAB7:    if (t1 != 0)
        goto LAB2;

LAB4:
LAB3:    xsi_set_current_line(63, ng0);
    t2 = (t0 + 2312U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB8;

LAB10:    xsi_set_current_line(73, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(114, ng0);
    t2 = (t0 + 5184);
    t4 = (t2 + 56U);
    t5 = *((char **)t4);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(115, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 8190);
    t1 = 1;
    if (16U == 16U)
        goto LAB97;

LAB98:    t1 = 0;

LAB99:    if (t1 != 0)
        goto LAB94;

LAB96:    xsi_set_current_line(118, ng0);
    t2 = (t0 + 8208);
    t5 = (t0 + 5248);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB95:    xsi_set_current_line(120, ng0);
    t2 = (t0 + 1512U);
    t4 = *((char **)t2);
    t2 = (t0 + 5312);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 16U);
    xsi_driver_first_trans_fast_port(t2);

LAB27:
LAB9:    t2 = (t0 + 4912);
    *((int *)t2) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(60, ng0);
    t4 = (t0 + 4992);
    t8 = (t4 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t4);
    goto LAB3;

LAB5:    t4 = (t0 + 1032U);
    t5 = *((char **)t4);
    t6 = *((unsigned char *)t5);
    t7 = (t6 == (unsigned char)3);
    t1 = t7;
    goto LAB7;

LAB8:    xsi_set_current_line(64, ng0);
    t2 = (t0 + 4992);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(65, ng0);
    t2 = (t0 + 2152U);
    t4 = *((char **)t2);
    t1 = *((unsigned char *)t4);
    t3 = (t1 == (unsigned char)3);
    if (t3 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(70, ng0);
    t2 = (t0 + 1992U);
    t4 = *((char **)t2);
    t2 = (t0 + 5120);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 16U);
    xsi_driver_first_trans_fast_port(t2);

LAB12:    goto LAB9;

LAB11:    xsi_set_current_line(66, ng0);
    t2 = (t0 + 1352U);
    t5 = *((char **)t2);
    t13 = *((int *)t5);
    t2 = ((WORK_P_0136478414) + 3088U);
    t8 = *((char **)t2);
    t14 = *((int *)t8);
    t15 = (t13 == t14);
    if (t15 == 1)
        goto LAB23;

LAB24:    t2 = (t0 + 1352U);
    t9 = *((char **)t2);
    t16 = *((int *)t9);
    t2 = ((WORK_P_0136478414) + 3208U);
    t10 = *((char **)t2);
    t17 = *((int *)t10);
    t18 = (t16 == t17);
    t12 = t18;

LAB25:    if (t12 == 1)
        goto LAB20;

LAB21:    t2 = (t0 + 1352U);
    t11 = *((char **)t2);
    t19 = *((int *)t11);
    t2 = ((WORK_P_0136478414) + 3328U);
    t20 = *((char **)t2);
    t21 = *((int *)t20);
    t22 = (t19 == t21);
    t7 = t22;

LAB22:    if (t7 == 1)
        goto LAB17;

LAB18:    t2 = (t0 + 1352U);
    t23 = *((char **)t2);
    t24 = *((int *)t23);
    t2 = ((WORK_P_0136478414) + 3448U);
    t25 = *((char **)t2);
    t26 = *((int *)t25);
    t27 = (t24 == t26);
    t6 = t27;

LAB19:    if (t6 != 0)
        goto LAB14;

LAB16:
LAB15:    goto LAB12;

LAB14:    xsi_set_current_line(67, ng0);
    t2 = (t0 + 1992U);
    t28 = *((char **)t2);
    t2 = (t0 + 5056);
    t29 = (t2 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t28, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB15;

LAB17:    t6 = (unsigned char)1;
    goto LAB19;

LAB20:    t7 = (unsigned char)1;
    goto LAB22;

LAB23:    t12 = (unsigned char)1;
    goto LAB25;

LAB26:    xsi_set_current_line(74, ng0);
    t2 = (t0 + 5184);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(75, ng0);
    t2 = (t0 + 1352U);
    t4 = *((char **)t2);
    t13 = *((int *)t4);
    t2 = ((WORK_P_0136478414) + 3088U);
    t5 = *((char **)t2);
    t14 = *((int *)t5);
    if (t13 == t14)
        goto LAB30;

LAB35:    t2 = ((WORK_P_0136478414) + 3208U);
    t8 = *((char **)t2);
    t16 = *((int *)t8);
    if (t13 == t16)
        goto LAB31;

LAB36:    t2 = ((WORK_P_0136478414) + 3328U);
    t9 = *((char **)t2);
    t17 = *((int *)t9);
    if (t13 == t17)
        goto LAB32;

LAB37:    t2 = ((WORK_P_0136478414) + 3448U);
    t10 = *((char **)t2);
    t19 = *((int *)t10);
    if (t13 == t19)
        goto LAB33;

LAB38:
LAB34:
LAB29:    goto LAB27;

LAB30:    xsi_set_current_line(77, ng0);
    t2 = (t0 + 1672U);
    t11 = *((char **)t2);
    t2 = (t0 + 8078);
    t3 = 1;
    if (16U == 16U)
        goto LAB46;

LAB47:    t3 = 0;

LAB48:    if (t3 == 1)
        goto LAB43;

LAB44:    t28 = (t0 + 1672U);
    t29 = *((char **)t28);
    t28 = (t0 + 8094);
    t6 = 1;
    if (16U == 16U)
        goto LAB52;

LAB53:    t6 = 0;

LAB54:    t1 = t6;

LAB45:    if (t1 != 0)
        goto LAB40;

LAB42:    xsi_set_current_line(80, ng0);
    t2 = (t0 + 8112);
    t5 = (t0 + 5248);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB41:    xsi_set_current_line(82, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5312);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB29;

LAB31:    xsi_set_current_line(85, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 8114);
    t3 = 1;
    if (16U == 16U)
        goto LAB64;

LAB65:    t3 = 0;

LAB66:    if (t3 == 1)
        goto LAB61;

LAB62:    t10 = (t0 + 1672U);
    t11 = *((char **)t10);
    t10 = (t0 + 8130);
    t6 = 1;
    if (16U == 16U)
        goto LAB70;

LAB71:    t6 = 0;

LAB72:    t1 = t6;

LAB63:    if (t1 != 0)
        goto LAB58;

LAB60:    xsi_set_current_line(88, ng0);
    t2 = (t0 + 8148);
    t5 = (t0 + 5248);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB59:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5312);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB29;

LAB32:    xsi_set_current_line(93, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 8150);
    t1 = 1;
    if (16U == 16U)
        goto LAB79;

LAB80:    t1 = 0;

LAB81:    if (t1 != 0)
        goto LAB76;

LAB78:    xsi_set_current_line(96, ng0);
    t2 = (t0 + 8168);
    t5 = (t0 + 5248);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB77:    xsi_set_current_line(98, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5312);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 16U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(99, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 5376);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB29;

LAB33:    xsi_set_current_line(102, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 8170);
    t1 = 1;
    if (16U == 16U)
        goto LAB88;

LAB89:    t1 = 0;

LAB90:    if (t1 != 0)
        goto LAB85;

LAB87:    xsi_set_current_line(105, ng0);
    t2 = (t0 + 8188);
    t5 = (t0 + 5248);
    t8 = (t5 + 56U);
    t9 = *((char **)t8);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t2, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB86:    xsi_set_current_line(107, ng0);
    t2 = (t0 + 1672U);
    t4 = *((char **)t2);
    t2 = (t0 + 5312);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 16U);
    xsi_driver_first_trans_fast_port(t2);
    xsi_set_current_line(108, ng0);
    t2 = (t0 + 1832U);
    t4 = *((char **)t2);
    t2 = (t0 + 5376);
    t5 = (t2 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 16U);
    xsi_driver_first_trans_fast_port(t2);
    goto LAB29;

LAB39:;
LAB40:    xsi_set_current_line(78, ng0);
    t35 = (t0 + 8110);
    t37 = (t0 + 5248);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memcpy(t41, t35, 2U);
    xsi_driver_first_trans_fast_port(t37);
    goto LAB41;

LAB43:    t1 = (unsigned char)1;
    goto LAB45;

LAB46:    t33 = 0;

LAB49:    if (t33 < 16U)
        goto LAB50;
    else
        goto LAB48;

LAB50:    t23 = (t11 + t33);
    t25 = (t2 + t33);
    if (*((unsigned char *)t23) != *((unsigned char *)t25))
        goto LAB47;

LAB51:    t33 = (t33 + 1);
    goto LAB49;

LAB52:    t34 = 0;

LAB55:    if (t34 < 16U)
        goto LAB56;
    else
        goto LAB54;

LAB56:    t31 = (t29 + t34);
    t32 = (t28 + t34);
    if (*((unsigned char *)t31) != *((unsigned char *)t32))
        goto LAB53;

LAB57:    t34 = (t34 + 1);
    goto LAB55;

LAB58:    xsi_set_current_line(86, ng0);
    t28 = (t0 + 8146);
    t30 = (t0 + 5248);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t35 = (t32 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t28, 2U);
    xsi_driver_first_trans_fast_port(t30);
    goto LAB59;

LAB61:    t1 = (unsigned char)1;
    goto LAB63;

LAB64:    t33 = 0;

LAB67:    if (t33 < 16U)
        goto LAB68;
    else
        goto LAB66;

LAB68:    t8 = (t4 + t33);
    t9 = (t2 + t33);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB65;

LAB69:    t33 = (t33 + 1);
    goto LAB67;

LAB70:    t34 = 0;

LAB73:    if (t34 < 16U)
        goto LAB74;
    else
        goto LAB72;

LAB74:    t23 = (t11 + t34);
    t25 = (t10 + t34);
    if (*((unsigned char *)t23) != *((unsigned char *)t25))
        goto LAB71;

LAB75:    t34 = (t34 + 1);
    goto LAB73;

LAB76:    xsi_set_current_line(94, ng0);
    t10 = (t0 + 8166);
    t20 = (t0 + 5248);
    t23 = (t20 + 56U);
    t25 = *((char **)t23);
    t28 = (t25 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t10, 2U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB77;

LAB79:    t33 = 0;

LAB82:    if (t33 < 16U)
        goto LAB83;
    else
        goto LAB81;

LAB83:    t8 = (t4 + t33);
    t9 = (t2 + t33);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB80;

LAB84:    t33 = (t33 + 1);
    goto LAB82;

LAB85:    xsi_set_current_line(103, ng0);
    t10 = (t0 + 8186);
    t20 = (t0 + 5248);
    t23 = (t20 + 56U);
    t25 = *((char **)t23);
    t28 = (t25 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t10, 2U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB86;

LAB88:    t33 = 0;

LAB91:    if (t33 < 16U)
        goto LAB92;
    else
        goto LAB90;

LAB92:    t8 = (t4 + t33);
    t9 = (t2 + t33);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB89;

LAB93:    t33 = (t33 + 1);
    goto LAB91;

LAB94:    xsi_set_current_line(116, ng0);
    t10 = (t0 + 8206);
    t20 = (t0 + 5248);
    t23 = (t20 + 56U);
    t25 = *((char **)t23);
    t28 = (t25 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t10, 2U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB95;

LAB97:    t33 = 0;

LAB100:    if (t33 < 16U)
        goto LAB101;
    else
        goto LAB99;

LAB101:    t8 = (t4 + t33);
    t9 = (t2 + t33);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB98;

LAB102:    t33 = (t33 + 1);
    goto LAB100;

}


extern void work_a_2768140317_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2768140317_3212880686_p_0};
	xsi_register_didat("work_a_2768140317_3212880686", "isim/test_cpu_top_isim_beh.exe.sim/work/a_2768140317_3212880686.didat");
	xsi_register_executes(pe);
}
