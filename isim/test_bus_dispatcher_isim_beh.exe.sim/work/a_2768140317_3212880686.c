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
static const char *ng0 = "G:/vhdl/thcomips/bus_dispatcher.vhd";
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
    unsigned char t9;
    int t10;
    int t11;
    unsigned char t12;
    int t13;
    int t14;
    unsigned char t15;
    int t16;
    char *t17;
    int t18;
    unsigned char t19;
    char *t20;
    int t21;
    char *t22;
    int t23;
    unsigned char t24;
    char *t25;
    unsigned char t26;
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
    t1 = (t0 + 2312U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(110, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 8010);
    t3 = 1;
    if (16U == 16U)
        goto LAB91;

LAB92:    t3 = 0;

LAB93:    if (t3 != 0)
        goto LAB88;

LAB90:    xsi_set_current_line(113, ng0);
    t1 = (t0 + 8028);
    t5 = (t0 + 5248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t17 = *((char **)t8);
    memcpy(t17, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB89:    xsi_set_current_line(115, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 5312);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(116, ng0);
    t1 = (t0 + 4992);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB21:
LAB3:    t1 = (t0 + 4912);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 4992);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t1 = ((WORK_P_0136478414) + 3088U);
    t5 = *((char **)t1);
    t11 = *((int *)t5);
    t12 = (t10 == t11);
    if (t12 == 1)
        goto LAB14;

LAB15:    t1 = (t0 + 1352U);
    t6 = *((char **)t1);
    t13 = *((int *)t6);
    t1 = ((WORK_P_0136478414) + 3208U);
    t7 = *((char **)t1);
    t14 = *((int *)t7);
    t15 = (t13 == t14);
    t9 = t15;

LAB16:    if (t9 == 1)
        goto LAB11;

LAB12:    t1 = (t0 + 1352U);
    t8 = *((char **)t1);
    t16 = *((int *)t8);
    t1 = ((WORK_P_0136478414) + 3328U);
    t17 = *((char **)t1);
    t18 = *((int *)t17);
    t19 = (t16 == t18);
    t4 = t19;

LAB13:    if (t4 == 1)
        goto LAB8;

LAB9:    t1 = (t0 + 1352U);
    t20 = *((char **)t1);
    t21 = *((int *)t20);
    t1 = ((WORK_P_0136478414) + 3448U);
    t22 = *((char **)t1);
    t23 = *((int *)t22);
    t24 = (t21 == t23);
    t3 = t24;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(62, ng0);
    t1 = (t0 + 2152U);
    t25 = *((char **)t1);
    t26 = *((unsigned char *)t25);
    t27 = (t26 == (unsigned char)3);
    if (t27 != 0)
        goto LAB17;

LAB19:    xsi_set_current_line(65, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t1 = (t0 + 5120);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);

LAB18:    goto LAB6;

LAB8:    t3 = (unsigned char)1;
    goto LAB10;

LAB11:    t4 = (unsigned char)1;
    goto LAB13;

LAB14:    t9 = (unsigned char)1;
    goto LAB16;

LAB17:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 1992U);
    t28 = *((char **)t1);
    t1 = (t0 + 5056);
    t29 = (t1 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t28, 16U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB18;

LAB20:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 5184);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(71, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t10 = *((int *)t2);
    t1 = ((WORK_P_0136478414) + 3088U);
    t5 = *((char **)t1);
    t11 = *((int *)t5);
    if (t10 == t11)
        goto LAB24;

LAB29:    t1 = ((WORK_P_0136478414) + 3208U);
    t6 = *((char **)t1);
    t13 = *((int *)t6);
    if (t10 == t13)
        goto LAB25;

LAB30:    t1 = ((WORK_P_0136478414) + 3328U);
    t7 = *((char **)t1);
    t14 = *((int *)t7);
    if (t10 == t14)
        goto LAB26;

LAB31:    t1 = ((WORK_P_0136478414) + 3448U);
    t8 = *((char **)t1);
    t16 = *((int *)t8);
    if (t10 == t16)
        goto LAB27;

LAB32:
LAB28:    xsi_set_current_line(107, ng0);
    t1 = (t0 + 4992);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB23:    goto LAB21;

LAB24:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1672U);
    t17 = *((char **)t1);
    t1 = (t0 + 7898);
    t4 = 1;
    if (16U == 16U)
        goto LAB40;

LAB41:    t4 = 0;

LAB42:    if (t4 == 1)
        goto LAB37;

LAB38:    t28 = (t0 + 1672U);
    t29 = *((char **)t28);
    t28 = (t0 + 7914);
    t9 = 1;
    if (16U == 16U)
        goto LAB46;

LAB47:    t9 = 0;

LAB48:    t3 = t9;

LAB39:    if (t3 != 0)
        goto LAB34;

LAB36:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 7932);
    t5 = (t0 + 5248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t17 = *((char **)t8);
    memcpy(t17, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB35:    xsi_set_current_line(78, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5312);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(79, ng0);
    t1 = (t0 + 4992);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB23;

LAB25:    xsi_set_current_line(81, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 7934);
    t4 = 1;
    if (16U == 16U)
        goto LAB58;

LAB59:    t4 = 0;

LAB60:    if (t4 == 1)
        goto LAB55;

LAB56:    t8 = (t0 + 1672U);
    t17 = *((char **)t8);
    t8 = (t0 + 7950);
    t9 = 1;
    if (16U == 16U)
        goto LAB64;

LAB65:    t9 = 0;

LAB66:    t3 = t9;

LAB57:    if (t3 != 0)
        goto LAB52;

LAB54:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 7968);
    t5 = (t0 + 5248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t17 = *((char **)t8);
    memcpy(t17, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB53:    xsi_set_current_line(86, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5312);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(87, ng0);
    t1 = (t0 + 4992);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB23;

LAB26:    xsi_set_current_line(89, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 7970);
    t3 = 1;
    if (16U == 16U)
        goto LAB73;

LAB74:    t3 = 0;

LAB75:    if (t3 != 0)
        goto LAB70;

LAB72:    xsi_set_current_line(92, ng0);
    t1 = (t0 + 7988);
    t5 = (t0 + 5248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t17 = *((char **)t8);
    memcpy(t17, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB71:    xsi_set_current_line(94, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5312);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(95, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5376);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(96, ng0);
    t1 = (t0 + 4992);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB23;

LAB27:    xsi_set_current_line(98, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 7990);
    t3 = 1;
    if (16U == 16U)
        goto LAB82;

LAB83:    t3 = 0;

LAB84:    if (t3 != 0)
        goto LAB79;

LAB81:    xsi_set_current_line(101, ng0);
    t1 = (t0 + 8008);
    t5 = (t0 + 5248);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t17 = *((char **)t8);
    memcpy(t17, t1, 2U);
    xsi_driver_first_trans_fast_port(t5);

LAB80:    xsi_set_current_line(103, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 5312);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(104, ng0);
    t1 = (t0 + 1832U);
    t2 = *((char **)t1);
    t1 = (t0 + 5376);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 16U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(105, ng0);
    t1 = (t0 + 4992);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB23;

LAB33:;
LAB34:    xsi_set_current_line(74, ng0);
    t35 = (t0 + 7930);
    t37 = (t0 + 5248);
    t38 = (t37 + 56U);
    t39 = *((char **)t38);
    t40 = (t39 + 56U);
    t41 = *((char **)t40);
    memcpy(t41, t35, 2U);
    xsi_driver_first_trans_fast_port(t37);
    goto LAB35;

LAB37:    t3 = (unsigned char)1;
    goto LAB39;

LAB40:    t33 = 0;

LAB43:    if (t33 < 16U)
        goto LAB44;
    else
        goto LAB42;

LAB44:    t22 = (t17 + t33);
    t25 = (t1 + t33);
    if (*((unsigned char *)t22) != *((unsigned char *)t25))
        goto LAB41;

LAB45:    t33 = (t33 + 1);
    goto LAB43;

LAB46:    t34 = 0;

LAB49:    if (t34 < 16U)
        goto LAB50;
    else
        goto LAB48;

LAB50:    t31 = (t29 + t34);
    t32 = (t28 + t34);
    if (*((unsigned char *)t31) != *((unsigned char *)t32))
        goto LAB47;

LAB51:    t34 = (t34 + 1);
    goto LAB49;

LAB52:    xsi_set_current_line(82, ng0);
    t28 = (t0 + 7966);
    t30 = (t0 + 5248);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    t35 = (t32 + 56U);
    t36 = *((char **)t35);
    memcpy(t36, t28, 2U);
    xsi_driver_first_trans_fast_port(t30);
    goto LAB53;

LAB55:    t3 = (unsigned char)1;
    goto LAB57;

LAB58:    t33 = 0;

LAB61:    if (t33 < 16U)
        goto LAB62;
    else
        goto LAB60;

LAB62:    t6 = (t2 + t33);
    t7 = (t1 + t33);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB59;

LAB63:    t33 = (t33 + 1);
    goto LAB61;

LAB64:    t34 = 0;

LAB67:    if (t34 < 16U)
        goto LAB68;
    else
        goto LAB66;

LAB68:    t22 = (t17 + t34);
    t25 = (t8 + t34);
    if (*((unsigned char *)t22) != *((unsigned char *)t25))
        goto LAB65;

LAB69:    t34 = (t34 + 1);
    goto LAB67;

LAB70:    xsi_set_current_line(90, ng0);
    t8 = (t0 + 7986);
    t20 = (t0 + 5248);
    t22 = (t20 + 56U);
    t25 = *((char **)t22);
    t28 = (t25 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t8, 2U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB71;

LAB73:    t33 = 0;

LAB76:    if (t33 < 16U)
        goto LAB77;
    else
        goto LAB75;

LAB77:    t6 = (t2 + t33);
    t7 = (t1 + t33);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB74;

LAB78:    t33 = (t33 + 1);
    goto LAB76;

LAB79:    xsi_set_current_line(99, ng0);
    t8 = (t0 + 8006);
    t20 = (t0 + 5248);
    t22 = (t20 + 56U);
    t25 = *((char **)t22);
    t28 = (t25 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t8, 2U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB80;

LAB82:    t33 = 0;

LAB85:    if (t33 < 16U)
        goto LAB86;
    else
        goto LAB84;

LAB86:    t6 = (t2 + t33);
    t7 = (t1 + t33);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB83;

LAB87:    t33 = (t33 + 1);
    goto LAB85;

LAB88:    xsi_set_current_line(111, ng0);
    t8 = (t0 + 8026);
    t20 = (t0 + 5248);
    t22 = (t20 + 56U);
    t25 = *((char **)t22);
    t28 = (t25 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t8, 2U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB89;

LAB91:    t33 = 0;

LAB94:    if (t33 < 16U)
        goto LAB95;
    else
        goto LAB93;

LAB95:    t6 = (t2 + t33);
    t7 = (t1 + t33);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB92;

LAB96:    t33 = (t33 + 1);
    goto LAB94;

}


extern void work_a_2768140317_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2768140317_3212880686_p_0};
	xsi_register_didat("work_a_2768140317_3212880686", "isim/test_bus_dispatcher_isim_beh.exe.sim/work/a_2768140317_3212880686.didat");
	xsi_register_executes(pe);
}
