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
static const char *ng0 = "/home/ivan/Escom/Arquitectura/microprocessor/source/alu/logic_u.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_2253917047_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;

LAB0:    xsi_set_current_line(29, ng0);

LAB3:    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t1 = (t0 + 4608);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast(t1);

LAB2:    t9 = (t0 + 4512);
    *((int *)t9) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}

static void work_a_2253917047_3212880686_p_1(char *t0)
{
    char t26[16];
    char *t1;
    char *t2;
    int t3;
    unsigned int t4;
    unsigned int t5;
    unsigned int t6;
    unsigned char t7;
    unsigned char t8;
    char *t9;
    char *t10;
    unsigned int t11;
    unsigned int t12;
    unsigned int t13;
    char *t14;
    char *t15;
    unsigned char t16;
    unsigned int t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    char *t23;
    char *t24;
    char *t25;
    unsigned int t27;
    char *t28;
    char *t29;
    char *t30;

LAB0:    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = (2 - 2);
    t4 = (t3 * -1);
    t5 = (1U * t4);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t7 = *((unsigned char *)t1);
    t8 = (t7 == (unsigned char)2);
    if (t8 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = (2 - 1);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t9 = (t0 + 7926);
    t7 = 1;
    if (2U == 2U)
        goto LAB17;

LAB18:    t7 = 0;

LAB19:    if (t7 != 0)
        goto LAB14;

LAB16:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t4 = (2 - 1);
    t5 = (t4 * 1U);
    t6 = (0 + t5);
    t1 = (t2 + t6);
    t9 = (t0 + 7928);
    t7 = 1;
    if (2U == 2U)
        goto LAB26;

LAB27:    t7 = 0;

LAB28:    if (t7 != 0)
        goto LAB23;

LAB25:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 4672);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB24:
LAB15:
LAB3:    t1 = (t0 + 4528);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(39, ng0);
    t9 = (t0 + 1352U);
    t10 = *((char **)t9);
    t11 = (2 - 1);
    t12 = (t11 * 1U);
    t13 = (0 + t12);
    t9 = (t10 + t13);
    t14 = (t0 + 7924);
    t16 = 1;
    if (2U == 2U)
        goto LAB8;

LAB9:    t16 = 0;

LAB10:    if (t16 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 2152U);
    t2 = *((char **)t1);
    t1 = (t0 + 4672);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t14 = (t10 + 56U);
    t15 = *((char **)t14);
    memcpy(t15, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(40, ng0);
    t20 = (t0 + 2312U);
    t21 = *((char **)t20);
    t20 = (t0 + 4672);
    t22 = (t20 + 56U);
    t23 = *((char **)t22);
    t24 = (t23 + 56U);
    t25 = *((char **)t24);
    memcpy(t25, t21, 5U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB6;

LAB8:    t17 = 0;

LAB11:    if (t17 < 2U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t18 = (t9 + t17);
    t19 = (t14 + t17);
    if (*((unsigned char *)t18) != *((unsigned char *)t19))
        goto LAB9;

LAB13:    t17 = (t17 + 1);
    goto LAB11;

LAB14:    xsi_set_current_line(46, ng0);
    t18 = (t0 + 2312U);
    t19 = *((char **)t18);
    t18 = (t0 + 4672);
    t20 = (t18 + 56U);
    t21 = *((char **)t20);
    t22 = (t21 + 56U);
    t23 = *((char **)t22);
    memcpy(t23, t19, 5U);
    xsi_driver_first_trans_fast_port(t18);
    goto LAB15;

LAB17:    t11 = 0;

LAB20:    if (t11 < 2U)
        goto LAB21;
    else
        goto LAB19;

LAB21:    t14 = (t1 + t11);
    t15 = (t9 + t11);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB18;

LAB22:    t11 = (t11 + 1);
    goto LAB20;

LAB23:    xsi_set_current_line(49, ng0);
    t18 = (t0 + 1032U);
    t19 = *((char **)t18);
    t3 = (4 - 4);
    t12 = (t3 * -1);
    t13 = (1U * t12);
    t17 = (0 + t13);
    t18 = (t19 + t17);
    t8 = *((unsigned char *)t18);
    t20 = (t0 + 2632U);
    t21 = *((char **)t20);
    t22 = ((IEEE_P_2592010699) + 4000);
    t23 = (t0 + 7856U);
    t20 = xsi_base_array_concat(t20, t26, t22, (char)99, t8, (char)97, t21, t23, (char)101);
    t27 = (1U + 4U);
    t16 = (5U != t27);
    if (t16 == 1)
        goto LAB32;

LAB33:    t24 = (t0 + 4672);
    t25 = (t24 + 56U);
    t28 = *((char **)t25);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t20, 5U);
    xsi_driver_first_trans_fast_port(t24);
    goto LAB24;

LAB26:    t11 = 0;

LAB29:    if (t11 < 2U)
        goto LAB30;
    else
        goto LAB28;

LAB30:    t14 = (t1 + t11);
    t15 = (t9 + t11);
    if (*((unsigned char *)t14) != *((unsigned char *)t15))
        goto LAB27;

LAB31:    t11 = (t11 + 1);
    goto LAB29;

LAB32:    xsi_size_not_matching(5U, t27, 0);
    goto LAB33;

}


extern void work_a_2253917047_3212880686_init()
{
	static char *pe[] = {(void *)work_a_2253917047_3212880686_p_0,(void *)work_a_2253917047_3212880686_p_1};
	xsi_register_didat("work_a_2253917047_3212880686", "isim/lagartijax4_sim_isim_beh.exe.sim/work/a_2253917047_3212880686.didat");
	xsi_register_executes(pe);
}
