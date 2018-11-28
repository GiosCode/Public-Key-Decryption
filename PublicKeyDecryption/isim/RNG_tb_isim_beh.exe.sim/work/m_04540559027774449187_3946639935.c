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
static const char *ng0 = "/home/ise/VMShare/Public-Key-Decryption/PublicKeyDecryption/RNG.v";



static void Always_27_0(char *t0)
{
    char t4[8];
    char t8[8];
    char t20[8];
    char t29[8];
    char t46[8];
    char t55[8];
    char t72[8];
    char t81[8];
    char t95[8];
    char *t1;
    char *t2;
    char *t3;
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
    char *t17;
    char *t18;
    char *t19;
    char *t21;
    char *t22;
    unsigned int t23;
    unsigned int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t30;
    unsigned int t31;
    unsigned int t32;
    char *t33;
    char *t34;
    char *t35;
    unsigned int t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    unsigned int t42;
    char *t43;
    char *t44;
    char *t45;
    char *t47;
    char *t48;
    unsigned int t49;
    unsigned int t50;
    unsigned int t51;
    unsigned int t52;
    unsigned int t53;
    unsigned int t54;
    unsigned int t56;
    unsigned int t57;
    unsigned int t58;
    char *t59;
    char *t60;
    char *t61;
    unsigned int t62;
    unsigned int t63;
    unsigned int t64;
    unsigned int t65;
    unsigned int t66;
    unsigned int t67;
    unsigned int t68;
    char *t69;
    char *t70;
    char *t71;
    char *t73;
    char *t74;
    unsigned int t75;
    unsigned int t76;
    unsigned int t77;
    unsigned int t78;
    unsigned int t79;
    unsigned int t80;
    unsigned int t82;
    unsigned int t83;
    unsigned int t84;
    char *t85;
    char *t86;
    char *t87;
    unsigned int t88;
    unsigned int t89;
    unsigned int t90;
    unsigned int t91;
    unsigned int t92;
    unsigned int t93;
    unsigned int t94;
    char *t96;
    char *t97;
    char *t98;
    char *t99;
    char *t100;
    unsigned int t101;
    unsigned int t102;
    unsigned int t103;
    unsigned int t104;
    unsigned int t105;
    unsigned int t106;
    char *t107;

LAB0:    t1 = (t0 + 2520U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(27, ng0);
    t2 = (t0 + 3088);
    *((int *)t2) = 1;
    t3 = (t0 + 2552);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(27, ng0);

LAB5:    xsi_set_current_line(28, ng0);
    t5 = (t0 + 1608);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    memset(t8, 0, 8);
    t9 = (t8 + 4);
    t10 = (t7 + 4);
    t11 = *((unsigned int *)t7);
    t12 = (t11 >> 0);
    t13 = (t12 & 1);
    *((unsigned int *)t8) = t13;
    t14 = *((unsigned int *)t10);
    t15 = (t14 >> 0);
    t16 = (t15 & 1);
    *((unsigned int *)t9) = t16;
    t17 = (t0 + 1608);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memset(t20, 0, 8);
    t21 = (t20 + 4);
    t22 = (t19 + 4);
    t23 = *((unsigned int *)t19);
    t24 = (t23 >> 3);
    t25 = (t24 & 1);
    *((unsigned int *)t20) = t25;
    t26 = *((unsigned int *)t22);
    t27 = (t26 >> 3);
    t28 = (t27 & 1);
    *((unsigned int *)t21) = t28;
    t30 = *((unsigned int *)t8);
    t31 = *((unsigned int *)t20);
    t32 = (t30 ^ t31);
    *((unsigned int *)t29) = t32;
    t33 = (t8 + 4);
    t34 = (t20 + 4);
    t35 = (t29 + 4);
    t36 = *((unsigned int *)t33);
    t37 = *((unsigned int *)t34);
    t38 = (t36 | t37);
    *((unsigned int *)t35) = t38;
    t39 = *((unsigned int *)t35);
    t40 = (t39 != 0);
    if (t40 == 1)
        goto LAB6;

LAB7:
LAB8:    t43 = (t0 + 1608);
    t44 = (t43 + 56U);
    t45 = *((char **)t44);
    memset(t46, 0, 8);
    t47 = (t46 + 4);
    t48 = (t45 + 4);
    t49 = *((unsigned int *)t45);
    t50 = (t49 >> 5);
    t51 = (t50 & 1);
    *((unsigned int *)t46) = t51;
    t52 = *((unsigned int *)t48);
    t53 = (t52 >> 5);
    t54 = (t53 & 1);
    *((unsigned int *)t47) = t54;
    t56 = *((unsigned int *)t29);
    t57 = *((unsigned int *)t46);
    t58 = (t56 ^ t57);
    *((unsigned int *)t55) = t58;
    t59 = (t29 + 4);
    t60 = (t46 + 4);
    t61 = (t55 + 4);
    t62 = *((unsigned int *)t59);
    t63 = *((unsigned int *)t60);
    t64 = (t62 | t63);
    *((unsigned int *)t61) = t64;
    t65 = *((unsigned int *)t61);
    t66 = (t65 != 0);
    if (t66 == 1)
        goto LAB9;

LAB10:
LAB11:    t69 = (t0 + 1608);
    t70 = (t69 + 56U);
    t71 = *((char **)t70);
    memset(t72, 0, 8);
    t73 = (t72 + 4);
    t74 = (t71 + 4);
    t75 = *((unsigned int *)t71);
    t76 = (t75 >> 11);
    t77 = (t76 & 1);
    *((unsigned int *)t72) = t77;
    t78 = *((unsigned int *)t74);
    t79 = (t78 >> 11);
    t80 = (t79 & 1);
    *((unsigned int *)t73) = t80;
    t82 = *((unsigned int *)t55);
    t83 = *((unsigned int *)t72);
    t84 = (t82 ^ t83);
    *((unsigned int *)t81) = t84;
    t85 = (t55 + 4);
    t86 = (t72 + 4);
    t87 = (t81 + 4);
    t88 = *((unsigned int *)t85);
    t89 = *((unsigned int *)t86);
    t90 = (t88 | t89);
    *((unsigned int *)t87) = t90;
    t91 = *((unsigned int *)t87);
    t92 = (t91 != 0);
    if (t92 == 1)
        goto LAB12;

LAB13:
LAB14:    t96 = (t0 + 1608);
    t97 = (t96 + 56U);
    t98 = *((char **)t97);
    memset(t95, 0, 8);
    t99 = (t95 + 4);
    t100 = (t98 + 4);
    t101 = *((unsigned int *)t98);
    t102 = (t101 >> 0);
    *((unsigned int *)t95) = t102;
    t103 = *((unsigned int *)t100);
    t104 = (t103 >> 0);
    *((unsigned int *)t99) = t104;
    t105 = *((unsigned int *)t95);
    *((unsigned int *)t95) = (t105 & 4095U);
    t106 = *((unsigned int *)t99);
    *((unsigned int *)t99) = (t106 & 4095U);
    xsi_vlogtype_concat(t4, 13, 13, 2U, t95, 12, t81, 1);
    t107 = (t0 + 1608);
    xsi_vlogvar_wait_assign_value(t107, t4, 0, 0, 12, 0LL);
    goto LAB2;

LAB6:    t41 = *((unsigned int *)t29);
    t42 = *((unsigned int *)t35);
    *((unsigned int *)t29) = (t41 | t42);
    goto LAB8;

LAB9:    t67 = *((unsigned int *)t55);
    t68 = *((unsigned int *)t61);
    *((unsigned int *)t55) = (t67 | t68);
    goto LAB11;

LAB12:    t93 = *((unsigned int *)t81);
    t94 = *((unsigned int *)t87);
    *((unsigned int *)t81) = (t93 | t94);
    goto LAB14;

}

static void Cont_30_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned int t10;
    unsigned int t11;
    char *t12;
    unsigned int t13;
    unsigned int t14;
    char *t15;
    unsigned int t16;
    unsigned int t17;
    char *t18;

LAB0:    t1 = (t0 + 2768U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(30, ng0);
    t2 = (t0 + 1608);
    t3 = (t2 + 56U);
    t4 = *((char **)t3);
    t5 = (t0 + 3184);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 4095U;
    t11 = t10;
    t12 = (t4 + 4);
    t13 = *((unsigned int *)t4);
    t10 = (t10 & t13);
    t14 = *((unsigned int *)t12);
    t11 = (t11 & t14);
    t15 = (t9 + 4);
    t16 = *((unsigned int *)t9);
    *((unsigned int *)t9) = (t16 | t10);
    t17 = *((unsigned int *)t15);
    *((unsigned int *)t15) = (t17 | t11);
    xsi_driver_vfirst_trans(t5, 0, 11);
    t18 = (t0 + 3104);
    *((int *)t18) = 1;

LAB1:    return;
}


extern void work_m_04540559027774449187_3946639935_init()
{
	static char *pe[] = {(void *)Always_27_0,(void *)Cont_30_1};
	xsi_register_didat("work_m_04540559027774449187_3946639935", "isim/RNG_tb_isim_beh.exe.sim/work/m_04540559027774449187_3946639935.didat");
	xsi_register_executes(pe);
}
