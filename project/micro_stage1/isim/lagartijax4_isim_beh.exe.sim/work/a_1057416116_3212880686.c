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
static const char *ng0 = "/home/ivan/Escom/Arquitectura/microprocessor/source/micro/gcm.vhd";



static void work_a_1057416116_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
    unsigned char t5;
    char *t6;
    char *t7;
    char *t8;
    int t9;
    char *t10;
    char *t11;
    int t12;
    char *t13;
    int t15;
    char *t16;
    int t18;
    char *t19;
    int t21;
    char *t22;
    char *t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    unsigned int t29;
    unsigned int t30;
    unsigned int t31;

LAB0:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)3);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 3608);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 3672);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 3736);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(44, ng0);
    t1 = (t0 + 3800);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 3864);
    t2 = (t1 + 56U);
    t6 = *((char **)t2);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);

LAB3:    t1 = (t0 + 3464);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(25, ng0);
    t1 = (t0 + 992U);
    t5 = xsi_signal_has_event(t1);
    if (t5 != 0)
        goto LAB5;

LAB7:
LAB6:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t9 = (0 - 4);
    t29 = (t9 * -1);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t1 = (t2 + t31);
    t3 = *((unsigned char *)t1);
    t6 = (t0 + 3608);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(36, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t9 = (1 - 4);
    t29 = (t9 * -1);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t1 = (t2 + t31);
    t3 = *((unsigned char *)t1);
    t6 = (t0 + 3672);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t9 = (2 - 4);
    t29 = (t9 * -1);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t1 = (t2 + t31);
    t3 = *((unsigned char *)t1);
    t6 = (t0 + 3736);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(38, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t9 = (3 - 4);
    t29 = (t9 * -1);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t1 = (t2 + t31);
    t3 = *((unsigned char *)t1);
    t6 = (t0 + 3800);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t3;
    xsi_driver_first_trans_fast_port(t6);
    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1992U);
    t2 = *((char **)t1);
    t9 = (4 - 4);
    t29 = (t9 * -1);
    t30 = (1U * t29);
    t31 = (0 + t30);
    t1 = (t2 + t31);
    t3 = *((unsigned char *)t1);
    t6 = (t0 + 3864);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    *((unsigned char *)t11) = t3;
    xsi_driver_first_trans_fast_port(t6);
    goto LAB3;

LAB5:    xsi_set_current_line(26, ng0);
    t6 = (t0 + 1992U);
    t7 = *((char **)t6);
    t6 = (t0 + 5910);
    t9 = xsi_mem_cmp(t6, t7, 5U);
    if (t9 == 1)
        goto LAB9;

LAB15:    t10 = (t0 + 5915);
    t12 = xsi_mem_cmp(t10, t7, 5U);
    if (t12 == 1)
        goto LAB10;

LAB16:    t13 = (t0 + 5920);
    t15 = xsi_mem_cmp(t13, t7, 5U);
    if (t15 == 1)
        goto LAB11;

LAB17:    t16 = (t0 + 5925);
    t18 = xsi_mem_cmp(t16, t7, 5U);
    if (t18 == 1)
        goto LAB12;

LAB18:    t19 = (t0 + 5930);
    t21 = xsi_mem_cmp(t19, t7, 5U);
    if (t21 == 1)
        goto LAB13;

LAB19:
LAB14:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 5960);
    t6 = (t0 + 3544);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 5U);
    xsi_driver_first_trans_fast(t6);

LAB8:    goto LAB6;

LAB9:    xsi_set_current_line(27, ng0);
    t22 = (t0 + 5935);
    t24 = (t0 + 3544);
    t25 = (t24 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t22, 5U);
    xsi_driver_first_trans_fast(t24);
    goto LAB8;

LAB10:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 5940);
    t6 = (t0 + 3544);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 5U);
    xsi_driver_first_trans_fast(t6);
    goto LAB8;

LAB11:    xsi_set_current_line(29, ng0);
    t1 = (t0 + 5945);
    t6 = (t0 + 3544);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 5U);
    xsi_driver_first_trans_fast(t6);
    goto LAB8;

LAB12:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 5950);
    t6 = (t0 + 3544);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 5U);
    xsi_driver_first_trans_fast(t6);
    goto LAB8;

LAB13:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 5955);
    t6 = (t0 + 3544);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    memcpy(t11, t1, 5U);
    xsi_driver_first_trans_fast(t6);
    goto LAB8;

LAB20:;
}


extern void work_a_1057416116_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1057416116_3212880686_p_0};
	xsi_register_didat("work_a_1057416116_3212880686", "isim/lagartijax4_isim_beh.exe.sim/work/a_1057416116_3212880686.didat");
	xsi_register_executes(pe);
}
