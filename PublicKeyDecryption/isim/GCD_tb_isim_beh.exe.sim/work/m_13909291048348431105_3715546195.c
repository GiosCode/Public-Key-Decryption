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
static unsigned int ng1[] = {3U, 0U};
static unsigned int ng2[] = {0U, 0U};
static int ng3[] = {0, 0};
static unsigned int ng4[] = {1U, 0U};
static unsigned int ng5[] = {2U, 0U};



static void Always_37_0(char *t0)
{
    char t11[8];
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
    char *t12;
    char *t13;
    unsigned int t14;
    unsigned int t15;
    unsigned int t16;
    unsigned int t17;
    unsigned int t18;
    char *t19;
    char *t20;

LAB0:    t1 = (t0 + 4024U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(37, ng0);
    t2 = (t0 + 4344);
    *((int *)t2) = 1;
    t3 = (t0 + 4056);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(37, ng0);

LAB5:    xsi_set_current_line(39, ng0);
    t4 = (t0 + 2952);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);

LAB6:    t7 = ((char*)((ng1)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t7, 2);
    if (t8 == 1)
        goto LAB7;

LAB8:    t2 = ((char*)((ng2)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB9;

LAB10:    t2 = ((char*)((ng4)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB11;

LAB12:    t2 = ((char*)((ng5)));
    t8 = xsi_vlog_unsigned_case_compare(t6, 2, t2, 2);
    if (t8 == 1)
        goto LAB13;

LAB14:
LAB15:    goto LAB2;

LAB7:    xsi_set_current_line(40, ng0);

LAB16:    xsi_set_current_line(41, ng0);
    t9 = (t0 + 1752U);
    t10 = *((char **)t9);
    t9 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t9, t10, 0, 0, 8, 0LL);
    xsi_set_current_line(42, ng0);
    t2 = (t0 + 1912U);
    t3 = *((char **)t2);
    t2 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t2, t3, 0, 0, 8, 0LL);
    xsi_set_current_line(43, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB15;

LAB9:    xsi_set_current_line(45, ng0);

LAB17:    xsi_set_current_line(46, ng0);
    t3 = (t0 + 2632);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = ((char*)((ng3)));
    memset(t11, 0, 8);
    t9 = (t5 + 4);
    if (*((unsigned int *)t9) != 0)
        goto LAB19;

LAB18:    t10 = (t7 + 4);
    if (*((unsigned int *)t10) != 0)
        goto LAB19;

LAB22:    if (*((unsigned int *)t5) > *((unsigned int *)t7))
        goto LAB20;

LAB21:    t13 = (t11 + 4);
    t14 = *((unsigned int *)t13);
    t15 = (~(t14));
    t16 = *((unsigned int *)t11);
    t17 = (t16 & t15);
    t18 = (t17 != 0);
    if (t18 > 0)
        goto LAB23;

LAB24:    xsi_set_current_line(47, ng0);
    t2 = ((char*)((ng5)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);

LAB25:    goto LAB15;

LAB11:    xsi_set_current_line(49, ng0);

LAB26:    xsi_set_current_line(50, ng0);
    t3 = (t0 + 2472);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2632);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    memset(t11, 0, 8);
    xsi_vlog_unsigned_mod(t11, 8, t5, 8, t10, 8);
    t12 = (t0 + 2792);
    xsi_vlogvar_wait_assign_value(t12, t11, 0, 0, 8, 0LL);
    xsi_set_current_line(51, ng0);
    t2 = (t0 + 2632);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2472);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(52, ng0);
    t2 = (t0 + 2792);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 2632);
    xsi_vlogvar_wait_assign_value(t5, t4, 0, 0, 8, 0LL);
    xsi_set_current_line(53, ng0);
    t2 = ((char*)((ng2)));
    t3 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t3, t2, 0, 0, 2, 0LL);
    goto LAB15;

LAB13:    xsi_set_current_line(55, ng0);

LAB27:    xsi_set_current_line(56, ng0);
    t3 = (t0 + 2472);
    t4 = (t3 + 56U);
    t5 = *((char **)t4);
    t7 = (t0 + 2312);
    xsi_vlogvar_wait_assign_value(t7, t5, 0, 0, 8, 0LL);
    goto LAB15;

LAB19:    t12 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t12) = 1;
    goto LAB21;

LAB20:    *((unsigned int *)t11) = 1;
    goto LAB21;

LAB23:    xsi_set_current_line(46, ng0);
    t19 = ((char*)((ng4)));
    t20 = (t0 + 2952);
    xsi_vlogvar_wait_assign_value(t20, t19, 0, 0, 2, 0LL);
    goto LAB25;

}


extern void work_m_13909291048348431105_3715546195_init()
{
	static char *pe[] = {(void *)Always_37_0};
	xsi_register_didat("work_m_13909291048348431105_3715546195", "isim/GCD_tb_isim_beh.exe.sim/work/m_13909291048348431105_3715546195.didat");
	xsi_register_executes(pe);
}
