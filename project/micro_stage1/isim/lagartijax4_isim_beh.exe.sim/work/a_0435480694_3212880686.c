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
static const char *ng0 = "/home/ivan/Escom/Arquitectura/microprocessor/source/basic/dmux513.vhd";



static void work_a_0435480694_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    char *t10;
    char *t11;
    char *t12;
    unsigned char t13;
    char *t14;

LAB0:    xsi_set_current_line(20, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5836);
    t4 = 1;
    if (3U == 3U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(24, ng0);
    t1 = (t0 + 3608);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(25, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5839);
    t4 = 1;
    if (3U == 3U)
        goto LAB14;

LAB15:    t4 = 0;

LAB16:    if (t4 != 0)
        goto LAB11;

LAB13:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 3672);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(29, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5842);
    t4 = 1;
    if (3U == 3U)
        goto LAB23;

LAB24:    t4 = 0;

LAB25:    if (t4 != 0)
        goto LAB20;

LAB22:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 3736);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5845);
    t4 = 1;
    if (3U == 3U)
        goto LAB32;

LAB33:    t4 = 0;

LAB34:    if (t4 != 0)
        goto LAB29;

LAB31:    xsi_set_current_line(36, ng0);
    t1 = (t0 + 3800);
    t2 = (t1 + 56U);
    t3 = *((char **)t2);
    t6 = (t3 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 5848);
    t4 = 1;
    if (3U == 3U)
        goto LAB41;

LAB42:    t4 = 0;

LAB43:    if (t4 != 0)
        goto LAB38;

LAB40:
LAB39:
LAB30:
LAB21:
LAB12:
LAB3:    t1 = (t0 + 3464);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(21, ng0);
    t8 = (t0 + 3544);
    t9 = (t8 + 56U);
    t10 = *((char **)t9);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    *((unsigned char *)t12) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(22, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 3608);
    t3 = (t1 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t8 = *((char **)t7);
    *((unsigned char *)t8) = t4;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB5:    t5 = 0;

LAB8:    if (t5 < 3U)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB6;

LAB10:    t5 = (t5 + 1);
    goto LAB8;

LAB11:    xsi_set_current_line(26, ng0);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t13 = *((unsigned char *)t9);
    t8 = (t0 + 3672);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = t13;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB12;

LAB14:    t5 = 0;

LAB17:    if (t5 < 3U)
        goto LAB18;
    else
        goto LAB16;

LAB18:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB15;

LAB19:    t5 = (t5 + 1);
    goto LAB17;

LAB20:    xsi_set_current_line(30, ng0);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t13 = *((unsigned char *)t9);
    t8 = (t0 + 3736);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = t13;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB21;

LAB23:    t5 = 0;

LAB26:    if (t5 < 3U)
        goto LAB27;
    else
        goto LAB25;

LAB27:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB24;

LAB28:    t5 = (t5 + 1);
    goto LAB26;

LAB29:    xsi_set_current_line(34, ng0);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t13 = *((unsigned char *)t9);
    t8 = (t0 + 3800);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = t13;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB30;

LAB32:    t5 = 0;

LAB35:    if (t5 < 3U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB33;

LAB37:    t5 = (t5 + 1);
    goto LAB35;

LAB38:    xsi_set_current_line(38, ng0);
    t8 = (t0 + 1192U);
    t9 = *((char **)t8);
    t13 = *((unsigned char *)t9);
    t8 = (t0 + 3544);
    t10 = (t8 + 56U);
    t11 = *((char **)t10);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    *((unsigned char *)t14) = t13;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB39;

LAB41:    t5 = 0;

LAB44:    if (t5 < 3U)
        goto LAB45;
    else
        goto LAB43;

LAB45:    t6 = (t2 + t5);
    t7 = (t1 + t5);
    if (*((unsigned char *)t6) != *((unsigned char *)t7))
        goto LAB42;

LAB46:    t5 = (t5 + 1);
    goto LAB44;

}


extern void work_a_0435480694_3212880686_init()
{
	static char *pe[] = {(void *)work_a_0435480694_3212880686_p_0};
	xsi_register_didat("work_a_0435480694_3212880686", "isim/lagartijax4_isim_beh.exe.sim/work/a_0435480694_3212880686.didat");
	xsi_register_executes(pe);
}
