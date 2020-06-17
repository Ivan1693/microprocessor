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
static const char *ng0 = "/home/ivan/Escom/Arquitectura/microprocessor/source/alu/alu_16op.vhd";
extern char *IEEE_P_2592010699;



static void work_a_1541122100_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(35, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (4 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 5880);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 5736);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1541122100_3212880686_p_1(char *t0)
{
    char t16[16];
    char t26[16];
    char t36[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned char t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;

LAB0:    xsi_set_current_line(36, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = (3 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    t10 = (2 - 4);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t17 = ((IEEE_P_2592010699) + 4000);
    t15 = xsi_base_array_concat(t15, t16, t17, (char)99, t7, (char)99, t14, (char)101);
    t18 = (t0 + 1512U);
    t19 = *((char **)t18);
    t20 = (1 - 4);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t18 = (t19 + t23);
    t24 = *((unsigned char *)t18);
    t27 = ((IEEE_P_2592010699) + 4000);
    t25 = xsi_base_array_concat(t25, t26, t27, (char)97, t15, t16, (char)99, t24, (char)101);
    t28 = (t0 + 1512U);
    t29 = *((char **)t28);
    t30 = (0 - 4);
    t31 = (t30 * -1);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t28 = (t29 + t33);
    t34 = *((unsigned char *)t28);
    t37 = ((IEEE_P_2592010699) + 4000);
    t35 = xsi_base_array_concat(t35, t36, t37, (char)97, t25, t26, (char)99, t34, (char)101);
    t38 = (1U + 1U);
    t39 = (t38 + 1U);
    t40 = (t39 + 1U);
    t41 = (4U != t40);
    if (t41 == 1)
        goto LAB5;

LAB6:    t42 = (t0 + 5944);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memcpy(t46, t35, 4U);
    xsi_driver_first_trans_fast(t42);

LAB2:    t47 = (t0 + 5752);
    *((int *)t47) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t40, 0);
    goto LAB6;

}

static void work_a_1541122100_3212880686_p_2(char *t0)
{
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;

LAB0:    xsi_set_current_line(38, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = (4 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 6008);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t7;
    xsi_driver_first_trans_fast(t8);

LAB2:    t13 = (t0 + 5768);
    *((int *)t13) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_1541122100_3212880686_p_3(char *t0)
{
    char t16[16];
    char t26[16];
    char t36[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    char *t8;
    char *t9;
    int t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    unsigned char t14;
    char *t15;
    char *t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    char *t25;
    char *t27;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    char *t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned char t41;
    char *t42;
    char *t43;
    char *t44;
    char *t45;
    char *t46;
    char *t47;

LAB0:    xsi_set_current_line(39, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t3 = (3 - 4);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t0 + 1672U);
    t9 = *((char **)t8);
    t10 = (2 - 4);
    t11 = (t10 * -1);
    t12 = (1U * t11);
    t13 = (0 + t12);
    t8 = (t9 + t13);
    t14 = *((unsigned char *)t8);
    t17 = ((IEEE_P_2592010699) + 4000);
    t15 = xsi_base_array_concat(t15, t16, t17, (char)99, t7, (char)99, t14, (char)101);
    t18 = (t0 + 1672U);
    t19 = *((char **)t18);
    t20 = (1 - 4);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t18 = (t19 + t23);
    t24 = *((unsigned char *)t18);
    t27 = ((IEEE_P_2592010699) + 4000);
    t25 = xsi_base_array_concat(t25, t26, t27, (char)97, t15, t16, (char)99, t24, (char)101);
    t28 = (t0 + 1672U);
    t29 = *((char **)t28);
    t30 = (0 - 4);
    t31 = (t30 * -1);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t28 = (t29 + t33);
    t34 = *((unsigned char *)t28);
    t37 = ((IEEE_P_2592010699) + 4000);
    t35 = xsi_base_array_concat(t35, t36, t37, (char)97, t25, t26, (char)99, t34, (char)101);
    t38 = (1U + 1U);
    t39 = (t38 + 1U);
    t40 = (t39 + 1U);
    t41 = (4U != t40);
    if (t41 == 1)
        goto LAB5;

LAB6:    t42 = (t0 + 6072);
    t43 = (t42 + 56U);
    t44 = *((char **)t43);
    t45 = (t44 + 56U);
    t46 = *((char **)t45);
    memcpy(t46, t35, 4U);
    xsi_driver_first_trans_fast(t42);

LAB2:    t47 = (t0 + 5784);
    *((int *)t47) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t40, 0);
    goto LAB6;

}

static void work_a_1541122100_3212880686_p_4(char *t0)
{
    char t8[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    unsigned char t6;
    char *t7;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned char t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;

LAB0:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 2792U);
    t2 = *((char **)t1);
    t5 = ((IEEE_P_2592010699) + 4000);
    t7 = (t0 + 9512U);
    t1 = xsi_base_array_concat(t1, t8, t5, (char)99, (unsigned char)2, (char)97, t2, t7, (char)101);
    t11 = (1U + 4U);
    t3 = (5U != t11);
    if (t3 == 1)
        goto LAB7;

LAB8:    t9 = (t0 + 6136);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t1, 5U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 6200);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t7 = (t5 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 5800);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(47, ng0);
    t1 = (t0 + 3272U);
    t5 = *((char **)t1);
    t6 = *((unsigned char *)t5);
    t1 = (t0 + 3112U);
    t7 = *((char **)t1);
    t9 = ((IEEE_P_2592010699) + 4000);
    t10 = (t0 + 9528U);
    t1 = xsi_base_array_concat(t1, t8, t9, (char)99, t6, (char)97, t7, t10, (char)101);
    t11 = (1U + 4U);
    t12 = (5U != t11);
    if (t12 == 1)
        goto LAB5;

LAB6:    t13 = (t0 + 6136);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t1, 5U);
    xsi_driver_first_trans_fast_port(t13);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 2952U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 6200);
    t5 = (t1 + 56U);
    t7 = *((char **)t5);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    xsi_size_not_matching(5U, t11, 0);
    goto LAB6;

LAB7:    xsi_size_not_matching(5U, t11, 0);
    goto LAB8;

}


extern void work_a_1541122100_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1541122100_3212880686_p_0,(void *)work_a_1541122100_3212880686_p_1,(void *)work_a_1541122100_3212880686_p_2,(void *)work_a_1541122100_3212880686_p_3,(void *)work_a_1541122100_3212880686_p_4};
	xsi_register_didat("work_a_1541122100_3212880686", "isim/lagartijax4_isim_beh.exe.sim/work/a_1541122100_3212880686.didat");
	xsi_register_executes(pe);
}
