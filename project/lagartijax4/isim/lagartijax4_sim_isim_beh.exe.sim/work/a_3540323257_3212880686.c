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

unsigned char ieee_p_2592010699_sub_2763492388968962707_503743352(char *, char *, unsigned int , unsigned int );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_3540323257_3212880686_p_0(char *t0)
{
    char *t1;
    unsigned char t2;
    char *t3;
    char *t4;
    char *t5;
    unsigned char t6;
    unsigned int t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;
    char *t16;
    int t17;
    unsigned int t18;
    unsigned int t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    unsigned char t24;
    unsigned char t25;

LAB0:    xsi_set_current_line(21, ng0);
    t1 = (t0 + 1472U);
    t2 = ieee_p_2592010699_sub_2763492388968962707_503743352(IEEE_P_2592010699, t1, 0U, 0U);
    if (t2 != 0)
        goto LAB2;

LAB4:
LAB3:    t1 = (t0 + 3392);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(22, ng0);
    t3 = (t0 + 1672U);
    t4 = *((char **)t3);
    t3 = (t0 + 5636);
    t6 = 1;
    if (5U == 5U)
        goto LAB8;

LAB9:    t6 = 0;

LAB10:    if (t6 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t17 = (0 - 4);
    t7 = (t17 * -1);
    t18 = (1U * t7);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t2 = *((unsigned char *)t1);
    t6 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t2);
    t4 = (t0 + 3488);
    t5 = (t4 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t6;
    xsi_driver_first_trans_delta(t4, 4U, 1, 0LL);
    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t17 = (0 - 4);
    t7 = (t17 * -1);
    t18 = (1U * t7);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t2 = *((unsigned char *)t1);
    t6 = (t2 == (unsigned char)3);
    if (t6 != 0)
        goto LAB14;

LAB16:
LAB15:
LAB6:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1352U);
    t3 = *((char **)t1);
    t2 = *((unsigned char *)t3);
    t6 = (t2 == (unsigned char)3);
    if (t6 != 0)
        goto LAB26;

LAB28:
LAB27:    goto LAB3;

LAB5:    xsi_set_current_line(23, ng0);
    t10 = (t0 + 5641);
    t12 = (t0 + 3488);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    t15 = (t14 + 56U);
    t16 = *((char **)t15);
    memcpy(t16, t10, 5U);
    xsi_driver_first_trans_fast(t12);
    goto LAB6;

LAB8:    t7 = 0;

LAB11:    if (t7 < 5U)
        goto LAB12;
    else
        goto LAB10;

LAB12:    t8 = (t4 + t7);
    t9 = (t3 + t7);
    if (*((unsigned char *)t8) != *((unsigned char *)t9))
        goto LAB9;

LAB13:    t7 = (t7 + 1);
    goto LAB11;

LAB14:    xsi_set_current_line(27, ng0);
    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t20 = (1 - 4);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t4 = (t5 + t23);
    t24 = *((unsigned char *)t4);
    t25 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t24);
    t8 = (t0 + 3488);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t25;
    xsi_driver_first_trans_delta(t8, 3U, 1, 0LL);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t17 = (1 - 4);
    t7 = (t17 * -1);
    t18 = (1U * t7);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t2 = *((unsigned char *)t1);
    t6 = (t2 == (unsigned char)3);
    if (t6 != 0)
        goto LAB17;

LAB19:
LAB18:    goto LAB15;

LAB17:    xsi_set_current_line(29, ng0);
    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t20 = (2 - 4);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t4 = (t5 + t23);
    t24 = *((unsigned char *)t4);
    t25 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t24);
    t8 = (t0 + 3488);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t25;
    xsi_driver_first_trans_delta(t8, 2U, 1, 0LL);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t17 = (2 - 4);
    t7 = (t17 * -1);
    t18 = (1U * t7);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t2 = *((unsigned char *)t1);
    t6 = (t2 == (unsigned char)3);
    if (t6 != 0)
        goto LAB20;

LAB22:
LAB21:    goto LAB18;

LAB20:    xsi_set_current_line(31, ng0);
    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t20 = (3 - 4);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t4 = (t5 + t23);
    t24 = *((unsigned char *)t4);
    t25 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t24);
    t8 = (t0 + 3488);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t25;
    xsi_driver_first_trans_delta(t8, 1U, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1672U);
    t3 = *((char **)t1);
    t17 = (3 - 4);
    t7 = (t17 * -1);
    t18 = (1U * t7);
    t19 = (0 + t18);
    t1 = (t3 + t19);
    t2 = *((unsigned char *)t1);
    t6 = (t2 == (unsigned char)3);
    if (t6 != 0)
        goto LAB23;

LAB25:
LAB24:    goto LAB21;

LAB23:    xsi_set_current_line(33, ng0);
    t4 = (t0 + 1672U);
    t5 = *((char **)t4);
    t20 = (4 - 4);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t4 = (t5 + t23);
    t24 = *((unsigned char *)t4);
    t25 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t24);
    t8 = (t0 + 3488);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t25;
    xsi_driver_first_trans_delta(t8, 0U, 1, 0LL);
    goto LAB24;

LAB26:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1032U);
    t4 = *((char **)t1);
    t1 = (t0 + 3488);
    t5 = (t1 + 56U);
    t8 = *((char **)t5);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    memcpy(t10, t4, 5U);
    xsi_driver_first_trans_fast(t1);
    goto LAB27;

}

static void work_a_3540323257_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;

LAB0:    xsi_set_current_line(44, ng0);

LAB3:    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 3552);
    t3 = (t1 + 56U);
    t4 = *((char **)t3);
    t5 = (t4 + 56U);
    t6 = *((char **)t5);
    memcpy(t6, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t7 = (t0 + 3408);
    *((int *)t7) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3540323257_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3540323257_3212880686_p_0,(void *)work_a_3540323257_3212880686_p_1};
	xsi_register_didat("work_a_3540323257_3212880686", "isim/lagartijax4_sim_isim_beh.exe.sim/work/a_3540323257_3212880686.didat");
	xsi_register_executes(pe);
}
