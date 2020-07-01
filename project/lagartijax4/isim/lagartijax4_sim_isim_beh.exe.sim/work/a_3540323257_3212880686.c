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
static const char *ng0 = "/home/ivan/Escom/Arquitectura/microprocessor/source/micro/prog_counter.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_3540323257_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    char *t5;
    char *t6;
    unsigned char t7;
    unsigned int t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    int t18;
    unsigned int t19;
    unsigned int t20;
    int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned int t24;
    unsigned char t25;

LAB0:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3144);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t1 = (t0 + 5300);
    t7 = 1;
    if (5U == 5U)
        goto LAB8;

LAB9:    t7 = 0;

LAB10:    if (t7 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t18 = (0 - 4);
    t8 = (t18 * -1);
    t19 = (1U * t8);
    t20 = (0 + t19);
    t1 = (t2 + t20);
    t3 = *((unsigned char *)t1);
    t4 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t3);
    t5 = (t0 + 3224);
    t6 = (t5 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t4;
    xsi_driver_first_trans_delta(t5, 4U, 1, 0LL);
    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t18 = (0 - 4);
    t8 = (t18 * -1);
    t19 = (1U * t8);
    t20 = (0 + t19);
    t1 = (t2 + t20);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB14;

LAB16:
LAB15:
LAB6:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB26;

LAB28:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 3288);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 3224);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t9 = (t6 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t2, 5U);
    xsi_driver_first_trans_fast(t1);

LAB27:    goto LAB3;

LAB5:    xsi_set_current_line(23, ng0);
    t11 = (t0 + 5305);
    t13 = (t0 + 3224);
    t14 = (t13 + 56U);
    t15 = *((char **)t14);
    t16 = (t15 + 56U);
    t17 = *((char **)t16);
    memcpy(t17, t11, 5U);
    xsi_driver_first_trans_fast(t13);
    goto LAB6;

LAB8:    t8 = 0;

LAB11:    if (t8 < 5U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t9 = (t5 + t8);
    t10 = (t1 + t8);
    if (*((unsigned char *)t9) != *((unsigned char *)t10))
        goto LAB9;

LAB13:    t8 = (t8 + 1);
    goto LAB11;

LAB14:    xsi_set_current_line(27, ng0);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t21 = (1 - 4);
    t22 = (t21 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t5 = (t6 + t24);
    t7 = *((unsigned char *)t5);
    t25 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t7);
    t9 = (t0 + 3224);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t25;
    xsi_driver_first_trans_delta(t9, 3U, 1, 0LL);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t18 = (1 - 4);
    t8 = (t18 * -1);
    t19 = (1U * t8);
    t20 = (0 + t19);
    t1 = (t2 + t20);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB17;

LAB19:
LAB18:    goto LAB15;

LAB17:    xsi_set_current_line(29, ng0);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t21 = (2 - 4);
    t22 = (t21 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t5 = (t6 + t24);
    t7 = *((unsigned char *)t5);
    t25 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t7);
    t9 = (t0 + 3224);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t25;
    xsi_driver_first_trans_delta(t9, 2U, 1, 0LL);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t18 = (2 - 4);
    t8 = (t18 * -1);
    t19 = (1U * t8);
    t20 = (0 + t19);
    t1 = (t2 + t20);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB20;

LAB22:
LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(31, ng0);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t21 = (3 - 4);
    t22 = (t21 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t5 = (t6 + t24);
    t7 = *((unsigned char *)t5);
    t25 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t7);
    t9 = (t0 + 3224);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t25;
    xsi_driver_first_trans_delta(t9, 1U, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t18 = (3 - 4);
    t8 = (t18 * -1);
    t19 = (1U * t8);
    t20 = (0 + t19);
    t1 = (t2 + t20);
    t3 = *((unsigned char *)t1);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB21;

LAB23:    xsi_set_current_line(33, ng0);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t21 = (4 - 4);
    t22 = (t21 * -1);
    t23 = (1U * t22);
    t24 = (0 + t23);
    t5 = (t6 + t24);
    t7 = *((unsigned char *)t5);
    t25 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t7);
    t9 = (t0 + 3224);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t13 = *((char **)t12);
    *((unsigned char *)t13) = t25;
    xsi_driver_first_trans_delta(t9, 0U, 1, 0LL);
    goto LAB24;

LAB26:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1672U);
    t5 = *((char **)t1);
    t1 = (t0 + 3288);
    t6 = (t1 + 56U);
    t9 = *((char **)t6);
    t10 = (t9 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t5, 5U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB27;

}


extern void work_a_3540323257_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3540323257_3212880686_p_0};
	xsi_register_didat("work_a_3540323257_3212880686", "isim/lagartijax4_sim_isim_beh.exe.sim/work/a_3540323257_3212880686.didat");
	xsi_register_executes(pe);
}
