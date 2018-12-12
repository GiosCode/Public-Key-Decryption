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
static const char *ng0 = "/home/ise/VMShare/Public-Key-Decryption/PublicKeyDecryption/privatekeyGen.v";
static unsigned int ng1[] = {0U, 0U};
static int ng2[] = {1, 0};
static unsigned int ng3[] = {3U, 0U};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};
static int ng6[] = {0, 0};
static int ng7[] = {0, 0, 0, 0};



static void Always_76_0(char *t0)
{
    char t13[8];
    char t37[16];
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
    char *t12;
    char *t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    unsigned int t19;
    unsigned int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned int t34;
    char *t35;
    char *t36;

LAB0:    t1 = (t0 + 4320U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(76, ng0);
    t2 = (t0 + 4640);
    *((int *)t2) = 1;
    t3 = (t0 + 4352);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(76, ng0);

LAB5:    xsi_set_current_line(78, ng0);
    t4 = (t0 + 3408);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng3)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB16:
LAB15:    xsi_set_current_line(128, ng0);

LAB40:    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2608);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 24);
    xsi_set_current_line(128, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB17:    goto LAB2;

LAB7:    xsi_set_current_line(80, ng0);

LAB18:    xsi_set_current_line(82, ng0);
    t9 = (t0 + 3248);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t14 = (t11 + 4);
    t15 = (t12 + 4);
    t16 = *((unsigned int *)t11);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t14);
    t20 = *((unsigned int *)t15);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t14);
    t24 = *((unsigned int *)t15);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB22;

LAB19:    if (t25 != 0)
        goto LAB21;

LAB20:    *((unsigned int *)t13) = 1;

LAB22:    t29 = (t13 + 4);
    t30 = *((unsigned int *)t29);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(88, ng0);

LAB27:    xsi_set_current_line(90, ng0);
    t2 = (t0 + 2928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng2)));
    memset(t13, 0, 8);
    xsi_vlog_unsigned_add(t13, 32, t4, 24, t5, 32);
    t7 = (t0 + 2928);
    xsi_vlogvar_assign_value(t7, t13, 0, 0, 24);
    xsi_set_current_line(92, ng0);
    t2 = ((char*)((ng4)));
    t3 = (t0 + 3408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);

LAB25:    goto LAB17;

LAB9:    xsi_set_current_line(98, ng0);

LAB28:    xsi_set_current_line(100, ng0);
    t3 = (t0 + 2048U);
    t4 = *((char **)t3);
    t3 = (t0 + 2928);
    t5 = (t3 + 56U);
    t7 = *((char **)t5);
    xsi_vlog_unsigned_multiply(t37, 49, t4, 24, t7, 24);
    t9 = (t0 + 3088);
    xsi_vlogvar_assign_value(t9, t37, 0, 0, 49);
    xsi_set_current_line(102, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 3408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB17;

LAB11:    xsi_set_current_line(106, ng0);

LAB29:    xsi_set_current_line(108, ng0);
    t3 = (t0 + 3088);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2208U);
    t9 = *((char **)t7);
    xsi_vlog_unsigned_mod(t37, 49, t5, 49, t9, 24);
    t7 = (t0 + 3248);
    xsi_vlogvar_assign_value(t7, t37, 0, 0, 24);
    xsi_set_current_line(110, ng0);
    t2 = ((char*)((ng1)));
    t3 = (t0 + 3408);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 2);
    goto LAB17;

LAB13:    xsi_set_current_line(114, ng0);

LAB30:    xsi_set_current_line(115, ng0);
    t3 = (t0 + 1888U);
    t4 = *((char **)t3);
    t3 = ((char*)((ng2)));
    memset(t13, 0, 8);
    t5 = (t4 + 4);
    t7 = (t3 + 4);
    t16 = *((unsigned int *)t4);
    t17 = *((unsigned int *)t3);
    t18 = (t16 ^ t17);
    t19 = *((unsigned int *)t5);
    t20 = *((unsigned int *)t7);
    t21 = (t19 ^ t20);
    t22 = (t18 | t21);
    t23 = *((unsigned int *)t5);
    t24 = *((unsigned int *)t7);
    t25 = (t23 | t24);
    t26 = (~(t25));
    t27 = (t22 & t26);
    if (t27 != 0)
        goto LAB34;

LAB31:    if (t25 != 0)
        goto LAB33;

LAB32:    *((unsigned int *)t13) = 1;

LAB34:    t10 = (t13 + 4);
    t30 = *((unsigned int *)t10);
    t31 = (~(t30));
    t32 = *((unsigned int *)t13);
    t33 = (t32 & t31);
    t34 = (t33 != 0);
    if (t34 > 0)
        goto LAB35;

LAB36:    xsi_set_current_line(121, ng0);

LAB39:    xsi_set_current_line(122, ng0);
    t2 = (t0 + 2928);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2608);
    xsi_vlogvar_assign_value(t5, t4, 0, 0, 24);
    xsi_set_current_line(123, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2768);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 1);

LAB37:    goto LAB17;

LAB21:    t28 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t28) = 1;
    goto LAB22;

LAB23:    xsi_set_current_line(82, ng0);

LAB26:    xsi_set_current_line(84, ng0);
    t35 = ((char*)((ng3)));
    t36 = (t0 + 3408);
    xsi_vlogvar_assign_value(t36, t35, 0, 0, 2);
    goto LAB25;

LAB33:    t9 = (t13 + 4);
    *((unsigned int *)t13) = 1;
    *((unsigned int *)t9) = 1;
    goto LAB34;

LAB35:    xsi_set_current_line(115, ng0);

LAB38:    xsi_set_current_line(116, ng0);
    t11 = ((char*)((ng1)));
    t12 = (t0 + 3408);
    xsi_vlogvar_assign_value(t12, t11, 0, 0, 2);
    xsi_set_current_line(117, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 2928);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 24);
    xsi_set_current_line(118, ng0);
    t2 = ((char*)((ng6)));
    t3 = (t0 + 3248);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 24);
    xsi_set_current_line(119, ng0);
    t2 = ((char*)((ng7)));
    t3 = (t0 + 3088);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 49);
    goto LAB37;

}


extern void work_m_01637101176819416792_3177748342_init()
{
	static char *pe[] = {(void *)Always_76_0};
	xsi_register_didat("work_m_01637101176819416792_3177748342", "isim/trueTop_tb_isim_beh.exe.sim/work/m_01637101176819416792_3177748342.didat");
	xsi_register_executes(pe);
}
