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
static const char *ng0 = "C:/Users/nimer/Documents/Verilog Projects/Piano/CLK_DIV.v";
static int ng1[] = {0, 0};
static int ng2[] = {50000000, 0};
static unsigned int ng3[] = {0U, 0U};
static int ng4[] = {1, 0};



static void Cont_13_0(char *t0)
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

LAB0:    t1 = (t0 + 1616U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(13, ng0);
    t2 = (t0 + 1092);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = (t0 + 2152);
    t6 = (t5 + 32U);
    t7 = *((char **)t6);
    t8 = (t7 + 40U);
    t9 = *((char **)t8);
    memset(t9, 0, 8);
    t10 = 1U;
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
    xsi_driver_vfirst_trans(t5, 0, 0);
    t18 = (t0 + 2100);
    *((int *)t18) = 1;

LAB1:    return;
}

static void Initial_15_1(char *t0)
{
    char *t1;
    char *t2;

LAB0:    xsi_set_current_line(16, ng0);

LAB2:    xsi_set_current_line(17, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1092);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 1);
    xsi_set_current_line(18, ng0);
    t1 = ((char*)((ng1)));
    t2 = (t0 + 1000);
    xsi_vlogvar_assign_value(t2, t1, 0, 0, 32);

LAB1:    return;
}

static void Always_21_2(char *t0)
{
    char t10[8];
    char t11[8];
    char t32[8];
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t12;
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
    char *t26;
    unsigned int t27;
    unsigned int t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;
    char *t33;
    char *t34;
    char *t35;
    char *t36;
    unsigned int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned int t41;
    char *t42;
    char *t43;

LAB0:    t1 = (t0 + 1904U);
    t2 = *((char **)t1);
    if (t2 == 0)
        goto LAB2;

LAB3:    goto *t2;

LAB2:    xsi_set_current_line(21, ng0);
    t2 = (t0 + 2108);
    *((int *)t2) = 1;
    t3 = (t0 + 1932);
    *((char **)t3) = t2;
    *((char **)t1) = &&LAB4;

LAB1:    return;
LAB4:    xsi_set_current_line(22, ng0);

LAB5:    xsi_set_current_line(23, ng0);
    t4 = (t0 + 1000);
    t5 = (t4 + 36U);
    t6 = *((char **)t5);
    t7 = ((char*)((ng2)));
    t8 = (t0 + 264);
    t9 = *((char **)t8);
    memset(t10, 0, 8);
    xsi_vlog_unsigned_divide(t10, 32, t7, 32, t9, 32);
    memset(t11, 0, 8);
    t8 = (t6 + 4);
    t12 = (t10 + 4);
    t13 = *((unsigned int *)t6);
    t14 = *((unsigned int *)t10);
    t15 = (t13 ^ t14);
    t16 = *((unsigned int *)t8);
    t17 = *((unsigned int *)t12);
    t18 = (t16 ^ t17);
    t19 = (t15 | t18);
    t20 = *((unsigned int *)t8);
    t21 = *((unsigned int *)t12);
    t22 = (t20 | t21);
    t23 = (~(t22));
    t24 = (t19 & t23);
    if (t24 != 0)
        goto LAB9;

LAB6:    if (t22 != 0)
        goto LAB8;

LAB7:    *((unsigned int *)t11) = 1;

LAB9:    t26 = (t11 + 4);
    t27 = *((unsigned int *)t26);
    t28 = (~(t27));
    t29 = *((unsigned int *)t11);
    t30 = (t29 & t28);
    t31 = (t30 != 0);
    if (t31 > 0)
        goto LAB10;

LAB11:    xsi_set_current_line(29, ng0);
    t2 = (t0 + 1000);
    t3 = (t2 + 36U);
    t4 = *((char **)t3);
    t5 = ((char*)((ng4)));
    memset(t10, 0, 8);
    xsi_vlog_unsigned_add(t10, 32, t4, 32, t5, 32);
    t6 = (t0 + 1000);
    xsi_vlogvar_assign_value(t6, t10, 0, 0, 32);

LAB12:    xsi_set_current_line(30, ng0);

LAB18:    goto LAB2;

LAB8:    t25 = (t11 + 4);
    *((unsigned int *)t11) = 1;
    *((unsigned int *)t25) = 1;
    goto LAB9;

LAB10:    xsi_set_current_line(24, ng0);

LAB13:    xsi_set_current_line(25, ng0);
    t33 = (t0 + 1092);
    t34 = (t33 + 36U);
    t35 = *((char **)t34);
    memset(t32, 0, 8);
    t36 = (t35 + 4);
    t37 = *((unsigned int *)t36);
    t38 = (~(t37));
    t39 = *((unsigned int *)t35);
    t40 = (t39 & t38);
    t41 = (t40 & 1U);
    if (t41 != 0)
        goto LAB17;

LAB15:    if (*((unsigned int *)t36) == 0)
        goto LAB14;

LAB16:    t42 = (t32 + 4);
    *((unsigned int *)t32) = 1;
    *((unsigned int *)t42) = 1;

LAB17:    t43 = (t0 + 1092);
    xsi_vlogvar_assign_value(t43, t32, 0, 0, 1);
    xsi_set_current_line(26, ng0);
    t2 = ((char*)((ng3)));
    t3 = (t0 + 1000);
    xsi_vlogvar_assign_value(t3, t2, 0, 0, 32);
    goto LAB12;

LAB14:    *((unsigned int *)t32) = 1;
    goto LAB17;

}


extern void work_m_00000000001109321227_3814039676_init()
{
	static char *pe[] = {(void *)Cont_13_0,(void *)Initial_15_1,(void *)Always_21_2};
	xsi_register_didat("work_m_00000000001109321227_3814039676", "isim/main_test_isim_beh.exe.sim/work/m_00000000001109321227_3814039676.didat");
	xsi_register_executes(pe);
}
