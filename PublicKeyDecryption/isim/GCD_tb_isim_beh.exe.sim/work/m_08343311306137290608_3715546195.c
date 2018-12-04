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
static const char *ng0 = "/home/ise/VMShare/Public-Key-Decryption/PublicKeyDecryption/GCD.v";
static int ng1[] = {0, 0};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {0U, 0U};
static unsigned int ng4[] = {3U, 0U};
static unsigned int ng5[] = {1U, 0U};
static unsigned int ng6[] = {2U, 0U};



static void Always_43_0(char *t0)
{
    char t8[8];
    char t35[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t9;
    char *t10;
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
    unsigned int t21;
    unsigned int t22;
    char *t23;
    char *t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    char *t30;
    char *t31;
    int t32;
    char *t33;
    char *t34;
    char *t36;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    unsigned int t43;
    unsigned int t44;
    unsigned int t45;
    unsigned int t46;
    unsigned int t47;
    unsigned int t48;
    unsigned int t49;
    char *t50;
    char *t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t55;
    unsigned int t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;

LAB0:    t1 = (t0 + 4504U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(43, ng0);
    t2 = (t0 + 4824);
    *((int *)t2) = 1;
    t3 = (t0 + 4536);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(43, ng0);

LAB5:    xsi_set_current_line(44, ng0);
    t4 = (t0 + 3272);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t9 = (t6 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t6);
    t12 = *((unsigned int *)t7);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t9);
    t15 = *((unsigned int *)t10);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t9);
    t19 = *((unsigned int *)t10);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB9;

LAB6:    if (t20 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t8) = 1;

LAB9:    t24 = (t8 + 4);
    t25 = *((unsigned int *)t24);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB10;

LAB11:
LAB12:    xsi_set_current_line(49, ng0);
    t2 = (t0 + 2072U);
    t3 = *((char **)t2);
    t2 = ((char*)((ng2)));
    memset(t8, 0, 8);
    t4 = (t3 + 4);
    t5 = (t2 + 4);
    t11 = *((unsigned int *)t3);
    t12 = *((unsigned int *)t2);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t4);
    t15 = *((unsigned int *)t5);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t4);
    t19 = *((unsigned int *)t5);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB17;

LAB14:    if (t20 != 0)
        goto LAB16;

LAB15:    *((unsigned int *)t8) = 1;

LAB17:    t7 = (t8 + 4);
    t25 = *((unsigned int *)t7);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB18;

LAB19:
LAB20:    goto LAB2;

LAB8:    t23 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t23) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(44, ng0);

LAB13:    xsi_set_current_line(45, ng0);
    t30 = (t0 + 1752U);
    t31 = *((char **)t30);
    t30 = (t0 + 2792);
    xsi_vlogvar_assign_value(t30, t31, 0, 0, 12);
    xsi_set_current_line(46, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2952);
    xsi_vlogvar_assign_value(t2, t3, 0, 0, 12);
    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 3272);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);
    goto LAB12;

LAB16:    t6 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t6) = 1;
    goto LAB17;

LAB18:    xsi_set_current_line(49, ng0);

LAB21:    xsi_set_current_line(50, ng0);
    t9 = (t0 + 3432);
    t10 = (t9 + 56U);
    t23 = *((char **)t10);

LAB22:    t24 = ((char*)((ng3)));
    t32 = xsi_vlog_unsigned_case_compare(t23, 2, t24, 2);
    if (t32 == 1)
        goto LAB23;

LAB24:    t2 = ((char*)((ng5)));
    t32 = xsi_vlog_unsigned_case_compare(t23, 2, t2, 2);
    if (t32 == 1)
        goto LAB25;

LAB26:    t2 = ((char*)((ng6)));
    t32 = xsi_vlog_unsigned_case_compare(t23, 2, t2, 2);
    if (t32 == 1)
        goto LAB27;

LAB28:    t2 = ((char*)((ng4)));
    t32 = xsi_vlog_unsigned_case_compare(t23, 2, t2, 2);
    if (t32 == 1)
        goto LAB29;

LAB30:
LAB32:
LAB31:    xsi_set_current_line(76, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 2632);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB33:    goto LAB20;

LAB23:    xsi_set_current_line(51, ng0);

LAB34:    xsi_set_current_line(52, ng0);
    t30 = (t0 + 2792);
    t31 = (t30 + 56U);
    t33 = *((char **)t31);
    t34 = ((char*)((ng1)));
    memset(t35, 0, 8);
    t36 = (t33 + 4);
    t37 = (t34 + 4);
    t38 = *((unsigned int *)t33);
    t39 = *((unsigned int *)t34);
    t40 = (t38 ^ t39);
    t41 = *((unsigned int *)t36);
    t42 = *((unsigned int *)t37);
    t43 = (t41 ^ t42);
    t44 = (t40 | t43);
    t45 = *((unsigned int *)t36);
    t46 = *((unsigned int *)t37);
    t47 = (t45 | t46);
    t48 = (~(t47));
    t49 = (t44 & t48);
    if (t49 != 0)
        goto LAB38;

LAB35:    if (t47 != 0)
        goto LAB37;

LAB36:    *((unsigned int *)t35) = 1;

LAB38:    t51 = (t35 + 4);
    t52 = *((unsigned int *)t51);
    t53 = (~(t52));
    t54 = *((unsigned int *)t35);
    t55 = (t54 & t53);
    t56 = (t55 != 0);
    if (t56 > 0)
        goto LAB39;

LAB40:    xsi_set_current_line(56, ng0);
    t2 = (t0 + 2952);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng1)));
    memset(t8, 0, 8);
    t6 = (t4 + 4);
    t7 = (t5 + 4);
    t11 = *((unsigned int *)t4);
    t12 = *((unsigned int *)t5);
    t13 = (t11 ^ t12);
    t14 = *((unsigned int *)t6);
    t15 = *((unsigned int *)t7);
    t16 = (t14 ^ t15);
    t17 = (t13 | t16);
    t18 = *((unsigned int *)t6);
    t19 = *((unsigned int *)t7);
    t20 = (t18 | t19);
    t21 = (~(t20));
    t22 = (t17 & t21);
    if (t22 != 0)
        goto LAB46;

LAB43:    if (t20 != 0)
        goto LAB45;

LAB44:    *((unsigned int *)t8) = 1;

LAB46:    t10 = (t8 + 4);
    t25 = *((unsigned int *)t10);
    t26 = (~(t25));
    t27 = *((unsigned int *)t8);
    t28 = (t27 & t26);
    t29 = (t28 != 0);
    if (t29 > 0)
        goto LAB47;

LAB48:    xsi_set_current_line(60, ng0);

LAB51:    xsi_set_current_line(61, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB49:
LAB41:    goto LAB33;

LAB25:    xsi_set_current_line(64, ng0);

LAB52:    xsi_set_current_line(65, ng0);
    t3 = (t0 + 2792);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2952);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memset(t8, 0, 8);
    xsi_vlog_unsigned_mod(t8, 12, t5, 12, t9, 12);
    t10 = (t0 + 3112);
    xsi_vlogvar_assign_value(t10, t8, 0, 0, 12);
    xsi_set_current_line(66, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB33;

LAB27:    xsi_set_current_line(68, ng0);

LAB53:    xsi_set_current_line(69, ng0);
    t3 = (t0 + 2952);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t6 = (t0 + 2792);
    xsi_vlogvar_assign_value(t6, t5, 0, 0, 12);
    xsi_set_current_line(70, ng0);
    t2 = (t0 + 3112);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2952);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 12);
    xsi_set_current_line(71, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB33;

LAB29:    xsi_set_current_line(73, ng0);

LAB54:    xsi_set_current_line(74, ng0);
    t3 = ((char*)((ng2)));
    t4 = (t0 + 2632);
    xsi_vlogvar_assign_value(t4, t3, 0, 0, 1);
    goto LAB33;

LAB37:    t50 = (t35 + 4);
    *((unsigned int *)t35) = 1;
    *((unsigned int *)t50) = 1;
    goto LAB38;

LAB39:    xsi_set_current_line(52, ng0);

LAB42:    xsi_set_current_line(53, ng0);
    t57 = (t0 + 2952);
    t58 = (t57 + 56U);
    t59 = *((char **)t58);
    t60 = (t0 + 2472);
    xsi_vlogvar_assign_value(t60, t59, 0, 0, 12);
    xsi_set_current_line(54, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB41;

LAB45:    t9 = (t8 + 4);
    *((unsigned int *)t8) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB46;

LAB47:    xsi_set_current_line(56, ng0);

LAB50:    xsi_set_current_line(57, ng0);
    t24 = (t0 + 2792);
    t30 = (t24 + 56U);
    t31 = *((char **)t30);
    t33 = (t0 + 2472);
    xsi_vlogvar_assign_value(t33, t31, 0, 0, 12);
    xsi_set_current_line(58, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3432);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB49;

}


extern void work_m_08343311306137290608_3715546195_init()
{
	static char *pe[] = {(void *)Always_43_0};
	xsi_register_didat("work_m_08343311306137290608_3715546195", "isim/GCD_tb_isim_beh.exe.sim/work/m_08343311306137290608_3715546195.didat");
	xsi_register_executes(pe);
}
