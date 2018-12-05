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
static unsigned int ng1[] = {0U, 0U};
static unsigned int ng2[] = {1U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {4U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {2, 0};
static int ng7[] = {1, 0};
static unsigned int ng8[] = {3U, 0U};



static void Always_43_0(char *t0)
{
    char t12[8];
    char t33[8];
    char t39[8];
    char t42[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    int t8;
    char *t9;
    char *t10;
    char *t11;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    char *t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    char *t31;
    char *t32;
    char *t34;
    char *t35;
    char *t36;
    char *t37;
    char *t38;
    char *t40;
    char *t41;

LAB0:    t1 = (t0 + 4456U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4776);
    *((int *)t2) = 1;
    t3 = (t0 + 4488);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 3544);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t7, 3);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng8)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB13;

LAB14:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 3, t2, 3);
    if (t8 == 1)
        goto LAB15;

LAB16:
LAB18:
LAB17:    xsi_set_current_line(73, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 2904);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 12);

LAB19:    goto LAB2;

LAB7:    xsi_set_current_line(45, ng0);

LAB20:    xsi_set_current_line(46, ng0);
    t9 = (t0 + 2024U);
    t10 = *((char **)t9);
    t9 = (t0 + 2344U);
    t11 = *((char **)t9);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_mod(t12, 24, t10, 12, t11, 12);
    t9 = (t0 + 3224);
    xsi_vlogvar_assign_value(t9, t12, 0, 0, 24);
    xsi_set_current_line(47, ng0);
    t2 = (t0 + 2184U);
    t3 = *((char **)t2);
    t2 = (t0 + 3384);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 12);
    xsi_set_current_line(48, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB19;

LAB9:    xsi_set_current_line(50, ng0);

LAB21:    xsi_set_current_line(51, ng0);
    t3 = (t0 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t12, 0, 8);
    t9 = (t5 + 4);
    t10 = (t7 + 4);
    t13 = *((unsigned int *)t5);
    t14 = *((unsigned int *)t7);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t9);
    t17 = *((unsigned int *)t10);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t9);
    t21 = *((unsigned int *)t10);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB25;

LAB22:    if (t22 != 0)
        goto LAB24;

LAB23:    *((unsigned int *)t12) = 1;

LAB25:    t25 = (t12 + 4);
    t26 = *((unsigned int *)t25);
    t27 = (~(t26));
    t28 = *((unsigned int *)t12);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB26;

LAB27:    xsi_set_current_line(54, ng0);

LAB30:    xsi_set_current_line(55, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);

LAB28:    goto LAB19;

LAB11:    xsi_set_current_line(58, ng0);

LAB31:    xsi_set_current_line(59, ng0);
    t3 = (t0 + 3384);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng6)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_mod(t12, 32, t5, 12, t7, 32);
    t9 = ((char*)((ng7)));
    memset(t33, 0, 8);
    t10 = (t12 + 4);
    t11 = (t9 + 4);
    t13 = *((unsigned int *)t12);
    t14 = *((unsigned int *)t9);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t10);
    t17 = *((unsigned int *)t11);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t10);
    t21 = *((unsigned int *)t11);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB35;

LAB32:    if (t22 != 0)
        goto LAB34;

LAB33:    *((unsigned int *)t33) = 1;

LAB35:    t31 = (t33 + 4);
    t26 = *((unsigned int *)t31);
    t27 = (~(t26));
    t28 = *((unsigned int *)t33);
    t29 = (t28 & t27);
    t30 = (t29 != 0);
    if (t30 > 0)
        goto LAB36;

LAB37:
LAB38:    xsi_set_current_line(62, ng0);
    t2 = (t0 + 3384);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng7)));
    memset(t12, 0, 8);
    xsi_vlog_unsigned_rshift(t12, 12, t4, 12, t5, 32);
    t7 = (t0 + 3384);
    xsi_vlogvar_assign_value(t7, t12, 0, 0, 12);
    xsi_set_current_line(63, ng0);
    t2 = ((char*)((ng8)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB19;

LAB13:    xsi_set_current_line(65, ng0);

LAB40:    xsi_set_current_line(67, ng0);
    t3 = (t0 + 3224);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 3224);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t12, 0, 8);
    xsi_vlog_unsigned_multiply(t12, 24, t5, 24, t10, 24);
    t11 = (t0 + 2344U);
    t25 = *((char **)t11);
    memset(t33, 0, 8);
    xsi_vlog_unsigned_mod(t33, 24, t12, 24, t25, 12);
    t11 = (t0 + 3224);
    xsi_vlogvar_assign_value(t11, t33, 0, 0, 24);
    xsi_set_current_line(68, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3544);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 3);
    goto LAB19;

LAB15:    xsi_set_current_line(70, ng0);

LAB41:    xsi_set_current_line(71, ng0);
    t3 = (t0 + 3064);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2904);
    xsi_vlogvar_assign_value(t7, t5, 0, 0, 12);
    goto LAB19;

LAB24:    t11 = (t12 + 4);
    *((unsigned int *)t12) = 1;
    *((unsigned int *)t11) = 1;
    goto LAB25;

LAB26:    xsi_set_current_line(51, ng0);

LAB29:    xsi_set_current_line(52, ng0);
    t31 = ((char*)((ng4)));
    t32 = (t0 + 3544);
    xsi_vlogvar_assign_value(t32, t31, 0, 0, 3);
    goto LAB28;

LAB34:    t25 = (t33 + 4);
    *((unsigned int *)t33) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB35;

LAB36:    xsi_set_current_line(59, ng0);

LAB39:    xsi_set_current_line(60, ng0);
    t32 = (t0 + 3064);
    t34 = (t32 + 56U);
    t35 = *((char **)t34);
    t36 = (t0 + 3224);
    t37 = (t36 + 56U);
    t38 = *((char **)t37);
    memset(t39, 0, 8);
    xsi_vlog_unsigned_multiply(t39, 24, t35, 12, t38, 24);
    t40 = (t0 + 2344U);
    t41 = *((char **)t40);
    memset(t42, 0, 8);
    xsi_vlog_unsigned_mod(t42, 24, t39, 24, t41, 12);
    t40 = (t0 + 3064);
    xsi_vlogvar_assign_value(t40, t42, 0, 0, 12);
    goto LAB38;

}


extern void work_m_16851981320603714387_0212316856_init()
{
	static char *pe[] = {(void *)Always_43_0};
	xsi_register_didat("work_m_16851981320603714387_0212316856", "isim/modExp_tb_isim_beh.exe.sim/work/m_16851981320603714387_0212316856.didat");
	xsi_register_executes(pe);
}
