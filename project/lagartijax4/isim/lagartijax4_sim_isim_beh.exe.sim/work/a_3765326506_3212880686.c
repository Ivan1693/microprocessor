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
static const char *ng0 = "/home/ivan/Escom/Arquitectura/microprocessor/source/alu/arith_u.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_3765326506_3212880686_p_0(char *t0)
{
    char t5[16];
    char t21[16];
    char t23[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t6;
    char *t7;
    unsigned int t8;
    char *t9;
    char *t10;
    unsigned char t11;
    unsigned int t12;
    char *t13;
    char *t14;
    char *t15;
    char *t17;
    char *t18;
    unsigned char t19;
    unsigned char t20;
    char *t22;
    char *t24;
    char *t25;
    int t26;
    unsigned int t27;
    unsigned char t28;
    char *t29;
    char *t30;
    char *t31;
    char *t32;

LAB0:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t4 = *((unsigned char *)t3);
    t6 = ((IEEE_P_2592010699) + 4000);
    t7 = (t0 + 9552U);
    t1 = xsi_base_array_concat(t1, t5, t6, (char)97, t2, t7, (char)99, t4, (char)101);
    t8 = (3U + 1U);
    t9 = (t0 + 9691);
    t11 = 1;
    if (t8 == 4U)
        goto LAB5;

LAB6:    t11 = 0;

LAB7:    if (t11 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(48, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t4 = *((unsigned char *)t3);
    t6 = ((IEEE_P_2592010699) + 4000);
    t7 = (t0 + 9552U);
    t1 = xsi_base_array_concat(t1, t5, t6, (char)97, t2, t7, (char)99, t4, (char)101);
    t8 = (3U + 1U);
    t9 = (t0 + 9698);
    t11 = 1;
    if (t8 == 4U)
        goto LAB16;

LAB17:    t11 = 0;

LAB18:    if (t11 != 0)
        goto LAB13;

LAB15:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1672U);
    t2 = *((char **)t1);
    t1 = (t0 + 1832U);
    t3 = *((char **)t1);
    t4 = *((unsigned char *)t3);
    t6 = ((IEEE_P_2592010699) + 4000);
    t7 = (t0 + 9552U);
    t1 = xsi_base_array_concat(t1, t5, t6, (char)97, t2, t7, (char)99, t4, (char)101);
    t8 = (3U + 1U);
    t9 = (t0 + 9705);
    t11 = 1;
    if (t8 == 4U)
        goto LAB27;

LAB28:    t11 = 0;

LAB29:    if (t11 != 0)
        goto LAB24;

LAB26:    xsi_set_current_line(54, ng0);
    t1 = (t0 + 2472U);
    t2 = *((char **)t1);
    t1 = (t0 + 5728);
    t3 = (t1 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 5792);
    t3 = (t1 + 56U);
    t6 = *((char **)t3);
    t7 = (t6 + 56U);
    t9 = *((char **)t7);
    *((unsigned char *)t9) = t4;
    xsi_driver_first_trans_fast(t1);
    xsi_set_current_line(56, ng0);
    t1 = (t0 + 3752U);
    t2 = *((char **)t1);
    t4 = *((unsigned char *)t2);
    t1 = (t0 + 2632U);
    t3 = *((char **)t1);
    t11 = *((unsigned char *)t3);
    t19 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t4, t11);
    t1 = (t0 + 5856);
    t6 = (t1 + 56U);
    t7 = *((char **)t6);
    t9 = (t7 + 56U);
    t10 = *((char **)t9);
    *((unsigned char *)t10) = t19;
    xsi_driver_first_trans_fast(t1);

LAB25:
LAB14:
LAB3:    t1 = (t0 + 5632);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(46, ng0);
    t15 = (t0 + 9695);
    t17 = (t0 + 1352U);
    t18 = *((char **)t17);
    t19 = *((unsigned char *)t18);
    t20 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t19);
    t22 = ((IEEE_P_2592010699) + 4000);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 0;
    t25 = (t24 + 4U);
    *((int *)t25) = 2;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t26 = (2 - 0);
    t27 = (t26 * 1);
    t27 = (t27 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t27;
    t17 = xsi_base_array_concat(t17, t21, t22, (char)97, t15, t23, (char)99, t20, (char)101);
    t27 = (3U + 1U);
    t28 = (4U != t27);
    if (t28 == 1)
        goto LAB11;

LAB12:    t25 = (t0 + 5728);
    t29 = (t25 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t17, 4U);
    xsi_driver_first_trans_fast_port(t25);
    goto LAB3;

LAB5:    t12 = 0;

LAB8:    if (t12 < t8)
        goto LAB9;
    else
        goto LAB7;

LAB9:    t13 = (t1 + t12);
    t14 = (t9 + t12);
    if (*((unsigned char *)t13) != *((unsigned char *)t14))
        goto LAB6;

LAB10:    t12 = (t12 + 1);
    goto LAB8;

LAB11:    xsi_size_not_matching(4U, t27, 0);
    goto LAB12;

LAB13:    xsi_set_current_line(49, ng0);
    t15 = (t0 + 9702);
    t17 = (t0 + 1352U);
    t18 = *((char **)t17);
    t19 = *((unsigned char *)t18);
    t22 = ((IEEE_P_2592010699) + 4000);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 0;
    t25 = (t24 + 4U);
    *((int *)t25) = 2;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t26 = (2 - 0);
    t27 = (t26 * 1);
    t27 = (t27 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t27;
    t17 = xsi_base_array_concat(t17, t21, t22, (char)97, t15, t23, (char)99, t19, (char)101);
    t27 = (3U + 1U);
    t20 = (4U != t27);
    if (t20 == 1)
        goto LAB22;

LAB23:    t25 = (t0 + 5728);
    t29 = (t25 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t17, 4U);
    xsi_driver_first_trans_fast_port(t25);
    goto LAB14;

LAB16:    t12 = 0;

LAB19:    if (t12 < t8)
        goto LAB20;
    else
        goto LAB18;

LAB20:    t13 = (t1 + t12);
    t14 = (t9 + t12);
    if (*((unsigned char *)t13) != *((unsigned char *)t14))
        goto LAB17;

LAB21:    t12 = (t12 + 1);
    goto LAB19;

LAB22:    xsi_size_not_matching(4U, t27, 0);
    goto LAB23;

LAB24:    xsi_set_current_line(52, ng0);
    t15 = (t0 + 9709);
    t17 = (t0 + 3912U);
    t18 = *((char **)t17);
    t19 = *((unsigned char *)t18);
    t22 = ((IEEE_P_2592010699) + 4000);
    t24 = (t23 + 0U);
    t25 = (t24 + 0U);
    *((int *)t25) = 0;
    t25 = (t24 + 4U);
    *((int *)t25) = 2;
    t25 = (t24 + 8U);
    *((int *)t25) = 1;
    t26 = (2 - 0);
    t27 = (t26 * 1);
    t27 = (t27 + 1);
    t25 = (t24 + 12U);
    *((unsigned int *)t25) = t27;
    t17 = xsi_base_array_concat(t17, t21, t22, (char)97, t15, t23, (char)99, t19, (char)101);
    t27 = (3U + 1U);
    t20 = (4U != t27);
    if (t20 == 1)
        goto LAB33;

LAB34:    t25 = (t0 + 5728);
    t29 = (t25 + 56U);
    t30 = *((char **)t29);
    t31 = (t30 + 56U);
    t32 = *((char **)t31);
    memcpy(t32, t17, 4U);
    xsi_driver_first_trans_fast_port(t25);
    goto LAB25;

LAB27:    t12 = 0;

LAB30:    if (t12 < t8)
        goto LAB31;
    else
        goto LAB29;

LAB31:    t13 = (t1 + t12);
    t14 = (t9 + t12);
    if (*((unsigned char *)t13) != *((unsigned char *)t14))
        goto LAB28;

LAB32:    t12 = (t12 + 1);
    goto LAB30;

LAB33:    xsi_size_not_matching(4U, t27, 0);
    goto LAB34;

}

static void work_a_3765326506_3212880686_p_1(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t3;
    char *t4;
    char *t5;
    char *t6;
    char *t7;
    char *t8;

LAB0:    xsi_set_current_line(62, ng0);

LAB3:    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t1 = (t0 + 5920);
    t4 = (t1 + 56U);
    t5 = *((char **)t4);
    t6 = (t5 + 56U);
    t7 = *((char **)t6);
    *((unsigned char *)t7) = t3;
    xsi_driver_first_trans_fast_port(t1);

LAB2:    t8 = (t0 + 5648);
    *((int *)t8) = 1;

LAB1:    return;
LAB4:    goto LAB2;

}


extern void work_a_3765326506_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3765326506_3212880686_p_0,(void *)work_a_3765326506_3212880686_p_1};
	xsi_register_didat("work_a_3765326506_3212880686", "isim/lagartijax4_sim_isim_beh.exe.sim/work/a_3765326506_3212880686.didat");
	xsi_register_executes(pe);
}
