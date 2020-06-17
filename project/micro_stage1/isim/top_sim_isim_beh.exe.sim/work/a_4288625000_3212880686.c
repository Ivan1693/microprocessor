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
static const char *ng0 = "/home/ivan/Escom/Arquitectura/microprocessor/source/alu/operation_control.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_4288625000_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    int t4;
    char *t5;
    char *t6;
    int t7;
    char *t8;
    char *t9;
    int t10;
    char *t11;
    char *t12;
    int t13;
    char *t14;
    char *t15;
    char *t16;
    char *t17;
    char *t18;
    char *t19;
    unsigned char t20;
    unsigned char t21;
    unsigned char t22;
    unsigned char t23;
    unsigned char t24;
    unsigned char t25;
    unsigned char t26;
    unsigned char t27;

LAB0:    xsi_set_current_line(19, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5829);
    t4 = xsi_mem_cmp(t1, t2, 2U);
    if (t4 == 1)
        goto LAB3;

LAB8:    t5 = (t0 + 5831);
    t7 = xsi_mem_cmp(t5, t2, 2U);
    if (t7 == 1)
        goto LAB4;

LAB9:    t8 = (t0 + 5833);
    t10 = xsi_mem_cmp(t8, t2, 2U);
    if (t10 == 1)
        goto LAB5;

LAB10:    t11 = (t0 + 5835);
    t13 = xsi_mem_cmp(t11, t2, 2U);
    if (t13 == 1)
        goto LAB6;

LAB11:
LAB7:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 5837);
    t3 = (t0 + 3544);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t1, 2U);
    xsi_driver_first_trans_fast_port(t3);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 3608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 3672);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t1 = (t0 + 3464);
    *((int *)t1) = 1;

LAB1:    return;
LAB3:    xsi_set_current_line(20, ng0);
    t14 = (t0 + 1352U);
    t15 = *((char **)t14);
    t14 = (t0 + 3544);
    t16 = (t14 + 56U);
    t17 = *((char **)t16);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    memcpy(t19, t15, 2U);
    xsi_driver_first_trans_fast_port(t14);
    xsi_set_current_line(21, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t21 = *((unsigned char *)t3);
    t22 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t20, t21);
    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t23 = *((unsigned char *)t5);
    t24 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t22, t23);
    t1 = (t0 + 3608);
    t6 = (t1 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t24;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 3672);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t20;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB4:    xsi_set_current_line(23, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t21 = *((unsigned char *)t3);
    t22 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t20, t21);
    t1 = (t0 + 3544);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t22;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(24, ng0);
    t1 = (t0 + 3544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t21 = *((unsigned char *)t3);
    t22 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t21);
    t23 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t20, t22);
    t1 = (t0 + 3608);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t23;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 3672);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t20;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB5:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 3544);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t5 = (t3 + 56U);
    t6 = *((char **)t5);
    *((unsigned char *)t6) = (unsigned char)3;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t21 = *((unsigned char *)t3);
    t22 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t20, t21);
    t1 = (t0 + 3544);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    *((unsigned char *)t9) = t22;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 3608);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t20;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 3672);
    t3 = (t1 + 56U);
    t5 = *((char **)t3);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = t20;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB6:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t21 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t20);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t22 = *((unsigned char *)t3);
    t23 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t22);
    t24 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t21, t23);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t25 = *((unsigned char *)t5);
    t26 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t24, t25);
    t1 = (t0 + 3544);
    t6 = (t1 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t26;
    xsi_driver_first_trans_delta(t1, 0U, 1, 0LL);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t21 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t20);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t22 = *((unsigned char *)t3);
    t1 = (t0 + 1192U);
    t5 = *((char **)t1);
    t23 = *((unsigned char *)t5);
    t24 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t23);
    t25 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t22, t24);
    t26 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t21, t25);
    t1 = (t0 + 3544);
    t6 = (t1 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t26;
    xsi_driver_first_trans_delta(t1, 1U, 1, 0LL);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t1 = (t0 + 1512U);
    t3 = *((char **)t1);
    t21 = *((unsigned char *)t3);
    t22 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t21);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t23 = *((unsigned char *)t5);
    t24 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t22, t23);
    t25 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t20, t24);
    t1 = (t0 + 3608);
    t6 = (t1 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    *((unsigned char *)t11) = t25;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t20 = *((unsigned char *)t2);
    t21 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t20);
    t1 = (t0 + 1032U);
    t3 = *((char **)t1);
    t22 = *((unsigned char *)t3);
    t23 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t21, t22);
    t1 = (t0 + 1512U);
    t5 = *((char **)t1);
    t24 = *((unsigned char *)t5);
    t1 = (t0 + 1192U);
    t6 = *((char **)t1);
    t25 = *((unsigned char *)t6);
    t26 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t24, t25);
    t27 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t23, t26);
    t1 = (t0 + 3672);
    t8 = (t1 + 56U);
    t9 = *((char **)t8);
    t11 = (t9 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = t27;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB2;

LAB12:;
}


extern void work_a_4288625000_3212880686_init()
{
	static char *pe[] = {(void *)work_a_4288625000_3212880686_p_0};
	xsi_register_didat("work_a_4288625000_3212880686", "isim/top_sim_isim_beh.exe.sim/work/a_4288625000_3212880686.didat");
	xsi_register_executes(pe);
}
