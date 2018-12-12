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

/* This file is designed for use with ISim build 0xfbc00daa */

#define XSI_HIDE_SYMBOL_SPEC true
#include "xsi.h"
#include <memory.h>
#ifdef __GNUC__
#include <stdlib.h>
#else
#include <malloc.h>
#define alloca _alloca
#endif
static const char *ng0 = "/home/ise/VMShare/Public-Key-Decryption/PublicKeyDecryption/modExp.v";
static int ng1[] = {1, 0};
static unsigned int ng2[] = {0U, 0U};
static unsigned int ng3[] = {1U, 0U};
static int ng4[] = {0, 0};
static unsigned int ng5[] = {4U, 0U};
static unsigned int ng6[] = {2U, 0U};
static int ng7[] = {2, 0};
static unsigned int ng8[] = {3U, 0U};



static void Always_45_0(char *t0)
{
    char t6[8];
    char t36[16];
    char t37[8];
    char t42[16];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t7;
    char *t8;
    unsigned int t9;
    unsigned int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t35;
    char *t38;
    char *t39;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 4776U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(45, ng0);
    t2 = (t0 + 5096);
    *((int *)t2) = 1;
    t3 = (t0 + 4808);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(45, ng0);

LAB5:    xsi_set_current_line(46, ng0);
    t4 = (t0 + 2504U);
    t5 = *((char **)t4);
    t4 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t7 = (t5 + 4);
    t8 = (t4 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t4);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t7);
    t13 = *((unsigned int *)t8);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t7);
    t17 = *((unsigned int *)t8);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB9;

LAB6:    if (t18 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t6) = 1;

LAB9:    t22 = (t6 + 4);
    t23 = *((unsigned int *)t22);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB10;

LAB11:
LAB12:    goto LAB2;

LAB8:    t21 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t21) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(46, ng0);

LAB13:    xsi_set_current_line(47, ng0);
    t28 = (t0 + 3864);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);

LAB14:    t31 = ((char*)((ng2)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 3, t31, 3);
    if (t32 == 1)
        goto LAB15;

LAB16:    t2 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 3);
    if (t32 == 1)
        goto LAB17;

LAB18:    t2 = ((char*)((ng6)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 3);
    if (t32 == 1)
        goto LAB19;

LAB20:    t2 = ((char*)((ng8)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 3);
    if (t32 == 1)
        goto LAB21;

LAB22:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t30, 3, t2, 3);
    if (t32 == 1)
        goto LAB23;

LAB24:
LAB26:
LAB25:    xsi_set_current_line(80, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3064);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);

LAB27:    goto LAB12;

LAB15:    xsi_set_current_line(48, ng0);

LAB28:    xsi_set_current_line(49, ng0);
    t33 = (t0 + 2024U);
    t34 = *((char **)t33);
    t33 = (t0 + 2344U);
    t35 = *((char **)t33);
    xsi_vlog_unsigned_mod(t36, 48, t34, 12, t35, 24);
    t33 = (t0 + 3544);
    xsi_vlogvar_assign_value(t33, t36, 0, 0, 48);
    xsi_set_current_line(50, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t0 + 3704);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 24);
    xsi_set_current_line(51, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB27;

LAB17:    xsi_set_current_line(53, ng0);

LAB29:    xsi_set_current_line(54, ng0);
    t3 = (t0 + 3704);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng4)));
    memset(t6, 0, 8);
    t8 = (t5 + 4);
    t21 = (t7 + 4);
    t9 = *((unsigned int *)t5);
    t10 = *((unsigned int *)t7);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t8);
    t13 = *((unsigned int *)t21);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t21);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB33;

LAB30:    if (t18 != 0)
        goto LAB32;

LAB31:    *((unsigned int *)t6) = 1;

LAB33:    t28 = (t6 + 4);
    t23 = *((unsigned int *)t28);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB34;

LAB35:    xsi_set_current_line(57, ng0);

LAB38:    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB36:    goto LAB27;

LAB19:    xsi_set_current_line(61, ng0);

LAB39:    xsi_set_current_line(62, ng0);
    t3 = (t0 + 3704);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng7)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_mod(t6, 32, t5, 24, t7, 32);
    t8 = ((char*)((ng1)));
    memset(t37, 0, 8);
    t21 = (t6 + 4);
    t22 = (t8 + 4);
    t9 = *((unsigned int *)t6);
    t10 = *((unsigned int *)t8);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t21);
    t13 = *((unsigned int *)t22);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t21);
    t17 = *((unsigned int *)t22);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB43;

LAB40:    if (t18 != 0)
        goto LAB42;

LAB41:    *((unsigned int *)t37) = 1;

LAB43:    t29 = (t37 + 4);
    t23 = *((unsigned int *)t29);
    t24 = (~(t23));
    t25 = *((unsigned int *)t37);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB44;

LAB45:
LAB46:    xsi_set_current_line(65, ng0);
    t2 = (t0 + 3704);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t6, 0, 8);
    xsi_vlog_unsigned_rshift(t6, 24, t4, 24, t5, 32);
    t7 = (t0 + 3704);
    xsi_vlogvar_assign_value(t7, t6, 0, 0, 24);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB27;

LAB21:    xsi_set_current_line(68, ng0);

LAB48:    xsi_set_current_line(70, ng0);
    t3 = (t0 + 3544);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3544);
    t8 = (t7 + 56U);
    t21 = *((char **)t8);
    xsi_vlog_unsigned_multiply(t36, 48, t5, 48, t21, 48);
    t22 = (t0 + 2344U);
    t28 = *((char **)t22);
    xsi_vlog_unsigned_mod(t42, 48, t36, 48, t28, 24);
    t22 = (t0 + 3544);
    xsi_vlogvar_assign_value(t22, t42, 0, 0, 48);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3864);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB27;

LAB23:    xsi_set_current_line(73, ng0);

LAB49:    xsi_set_current_line(74, ng0);
    t3 = (t0 + 2664U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng1)));
    memset(t6, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t9 = *((unsigned int *)t4);
    t10 = *((unsigned int *)t3);
    t11 = (t9 ^ t10);
    t12 = *((unsigned int *)t5);
    t13 = *((unsigned int *)t7);
    t14 = (t12 ^ t13);
    t15 = (t11 | t14);
    t16 = *((unsigned int *)t5);
    t17 = *((unsigned int *)t7);
    t18 = (t16 | t17);
    t19 = (~(t18));
    t20 = (t15 & t19);
    if (t20 != 0)
        goto LAB53;

LAB50:    if (t18 != 0)
        goto LAB52;

LAB51:    *((unsigned int *)t6) = 1;

LAB53:    t21 = (t6 + 4);
    t23 = *((unsigned int *)t21);
    t24 = (~(t23));
    t25 = *((unsigned int *)t6);
    t26 = (t25 & t24);
    t27 = (t26 != 0);
    if (t27 > 0)
        goto LAB54;

LAB55:
LAB56:    xsi_set_current_line(77, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3224);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    xsi_set_current_line(78, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3064);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 12);
    goto LAB27;

LAB32:    t22 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t22) = 1;
    goto LAB33;

LAB34:    xsi_set_current_line(54, ng0);

LAB37:    xsi_set_current_line(55, ng0);
    t29 = ((char*)((ng5)));
    t31 = (t0 + 3864);
    xsi_vlogvar_assign_value(t31, t29, 0, 0, 3);
    goto LAB36;

LAB42:    t28 = (t37 + 4);
    *((unsigned int *)t37) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB43;

LAB44:    xsi_set_current_line(62, ng0);

LAB47:    xsi_set_current_line(63, ng0);
    t31 = (t0 + 3384);
    t33 = (t31 + 56U);
    t34 = *((char **)t33);
    t35 = (t0 + 3544);
    t38 = (t35 + 56U);
    t39 = *((char **)t38);
    xsi_vlog_unsigned_multiply(t36, 48, t34, 12, t39, 48);
    t40 = (t0 + 2344U);
    t41 = *((char **)t40);
    xsi_vlog_unsigned_mod(t42, 48, t36, 48, t41, 24);
    t40 = (t0 + 3384);
    xsi_vlogvar_assign_value(t40, t42, 0, 0, 12);
    goto LAB46;

LAB52:    t8 = (t6 + 4);
    *((unsigned int *)t6) = 1;
    *((unsigned int *)t8) = 1;
    goto LAB53;

LAB54:    xsi_set_current_line(74, ng0);

LAB57:    xsi_set_current_line(75, ng0);
    t22 = ((char*)((ng2)));
    t28 = (t0 + 3864);
    xsi_vlogvar_assign_value(t28, t22, 0, 0, 3);
    goto LAB56;

}


extern void work_m_14661893338896705067_0212316856_init()
{
	static char *pe[] = {(void *)Always_45_0};
	xsi_register_didat("work_m_14661893338896705067_0212316856", "isim/trueTop_tb_isim_beh.exe.sim/work/m_14661893338896705067_0212316856.didat");
	xsi_register_executes(pe);
}
