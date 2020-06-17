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

unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_3540323257_3212880686_p_0(char *t0)
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
    unsigned char t10;
    unsigned char t11;
    int t12;
    unsigned int t13;
    unsigned int t14;
    unsigned int t15;
    unsigned char t16;
    unsigned char t17;
    char *t18;
    char *t19;
    int t20;
    unsigned int t21;
    unsigned int t22;
    unsigned int t23;
    int t24;
    unsigned int t25;
    unsigned int t26;
    unsigned int t27;
    char *t28;
    char *t29;
    int t30;
    unsigned int t31;
    unsigned int t32;
    unsigned int t33;
    unsigned char t34;
    char *t35;
    char *t36;
    int t37;
    unsigned int t38;
    unsigned int t39;
    unsigned int t40;
    unsigned char t41;
    unsigned char t42;
    char *t43;
    char *t44;

LAB0:    xsi_set_current_line(19, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1472U);
    t4 = xsi_signal_has_event(t1);
    if (t4 == 1)
        goto LAB8;

LAB9:    t3 = (unsigned char)0;

LAB10:    if (t3 != 0)
        goto LAB5;

LAB7:
LAB6:
LAB3:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 3288);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    memcpy(t8, t2, 5U);
    xsi_driver_first_trans_fast_port(t1);
    t1 = (t0 + 3144);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 3224);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t5, 5U);
    xsi_driver_first_trans_fast(t1);
    goto LAB3;

LAB5:    xsi_set_current_line(23, ng0);
    t2 = (t0 + 1672U);
    t6 = *((char **)t2);
    t12 = (0 - 4);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t2 = (t6 + t15);
    t16 = *((unsigned char *)t2);
    t17 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t16);
    t7 = (t0 + 3224);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t18 = (t9 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t17;
    xsi_driver_first_trans_delta(t7, 4U, 1, 0LL);
    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t12 = (1 - 4);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t20 = (0 - 4);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t5 = (t6 + t23);
    t4 = *((unsigned char *)t5);
    t10 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t3, t4);
    t7 = (t0 + 3224);
    t8 = (t7 + 56U);
    t9 = *((char **)t8);
    t18 = (t9 + 56U);
    t19 = *((char **)t18);
    *((unsigned char *)t19) = t10;
    xsi_driver_first_trans_delta(t7, 3U, 1, 0LL);
    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t12 = (2 - 4);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t20 = (1 - 4);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t5 = (t6 + t23);
    t4 = *((unsigned char *)t5);
    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t24 = (0 - 4);
    t25 = (t24 * -1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t7 = (t8 + t27);
    t10 = *((unsigned char *)t7);
    t11 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t4, t10);
    t16 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t3, t11);
    t9 = (t0 + 3224);
    t18 = (t9 + 56U);
    t19 = *((char **)t18);
    t28 = (t19 + 56U);
    t29 = *((char **)t28);
    *((unsigned char *)t29) = t16;
    xsi_driver_first_trans_delta(t9, 2U, 1, 0LL);
    xsi_set_current_line(26, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t12 = (3 - 4);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t20 = (2 - 4);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t5 = (t6 + t23);
    t4 = *((unsigned char *)t5);
    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t24 = (1 - 4);
    t25 = (t24 * -1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t7 = (t8 + t27);
    t10 = *((unsigned char *)t7);
    t11 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t4, t10);
    t9 = (t0 + 1672U);
    t18 = *((char **)t9);
    t30 = (0 - 4);
    t31 = (t30 * -1);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t9 = (t18 + t33);
    t16 = *((unsigned char *)t9);
    t17 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t11, t16);
    t34 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t3, t17);
    t19 = (t0 + 3224);
    t28 = (t19 + 56U);
    t29 = *((char **)t28);
    t35 = (t29 + 56U);
    t36 = *((char **)t35);
    *((unsigned char *)t36) = t34;
    xsi_driver_first_trans_delta(t19, 1U, 1, 0LL);
    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t12 = (4 - 4);
    t13 = (t12 * -1);
    t14 = (1U * t13);
    t15 = (0 + t14);
    t1 = (t2 + t15);
    t3 = *((unsigned char *)t1);
    t5 = (t0 + 1672U);
    t6 = *((char **)t5);
    t20 = (3 - 4);
    t21 = (t20 * -1);
    t22 = (1U * t21);
    t23 = (0 + t22);
    t5 = (t6 + t23);
    t4 = *((unsigned char *)t5);
    t7 = (t0 + 1672U);
    t8 = *((char **)t7);
    t24 = (2 - 4);
    t25 = (t24 * -1);
    t26 = (1U * t25);
    t27 = (0 + t26);
    t7 = (t8 + t27);
    t10 = *((unsigned char *)t7);
    t11 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t4, t10);
    t9 = (t0 + 1672U);
    t18 = *((char **)t9);
    t30 = (1 - 4);
    t31 = (t30 * -1);
    t32 = (1U * t31);
    t33 = (0 + t32);
    t9 = (t18 + t33);
    t16 = *((unsigned char *)t9);
    t17 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t11, t16);
    t19 = (t0 + 1672U);
    t28 = *((char **)t19);
    t37 = (0 - 4);
    t38 = (t37 * -1);
    t39 = (1U * t38);
    t40 = (0 + t39);
    t19 = (t28 + t40);
    t34 = *((unsigned char *)t19);
    t41 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t17, t34);
    t42 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t3, t41);
    t29 = (t0 + 3224);
    t35 = (t29 + 56U);
    t36 = *((char **)t35);
    t43 = (t36 + 56U);
    t44 = *((char **)t43);
    *((unsigned char *)t44) = t42;
    xsi_driver_first_trans_delta(t29, 0U, 1, 0LL);
    goto LAB6;

LAB8:    t2 = (t0 + 1512U);
    t5 = *((char **)t2);
    t10 = *((unsigned char *)t5);
    t11 = (t10 == (unsigned char)2);
    t3 = t11;
    goto LAB10;

}


extern void work_a_3540323257_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3540323257_3212880686_p_0};
	xsi_register_didat("work_a_3540323257_3212880686", "isim/lagartijax4_isim_beh.exe.sim/work/a_3540323257_3212880686.didat");
	xsi_register_executes(pe);
}
