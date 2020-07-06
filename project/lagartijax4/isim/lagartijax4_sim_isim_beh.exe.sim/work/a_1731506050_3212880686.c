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
static const char *ng0 = "/home/ivan/Escom/Arquitectura/microprocessor/source/alu/ctrl_arith_u.vhd";
extern char *IEEE_P_2592010699;

char *ieee_p_2592010699_sub_207919886985903570_503743352(char *, char *, char *, char *);
unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_374109322130769762_503743352(char *, unsigned char );


static void work_a_1731506050_3212880686_p_0(char *t0)
{
    char t5[16];
    char *t1;
    char *t2;
    char *t3;
    unsigned char t4;
    char *t6;
    char *t7;
    unsigned int t8;
    unsigned char t9;
    char *t10;
    char *t11;
    char *t12;
    char *t13;
    char *t14;
    char *t15;

LAB0:    xsi_set_current_line(23, ng0);

LAB3:    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 1192U);
    t3 = *((char **)t1);
    t4 = *((unsigned char *)t3);
    t6 = ((IEEE_P_2592010699) + 4000);
    t7 = (t0 + 7352U);
    t1 = xsi_base_array_concat(t1, t5, t6, (char)97, t2, t7, (char)99, t4, (char)101);
    t8 = (3U + 1U);
    t9 = (4U != t8);
    if (t9 == 1)
        goto LAB5;

LAB6:    t10 = (t0 + 4448);
    t11 = (t10 + 56U);
    t12 = *((char **)t11);
    t13 = (t12 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t1, 4U);
    xsi_driver_first_trans_fast(t10);

LAB2:    t15 = (t0 + 4352);
    *((int *)t15) = 1;

LAB1:    return;
LAB4:    goto LAB2;

LAB5:    xsi_size_not_matching(4U, t8, 0);
    goto LAB6;

}

static void work_a_1731506050_3212880686_p_1(char *t0)
{
    char t31[16];
    char t32[16];
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
    unsigned char t11;
    unsigned char t12;
    char *t13;
    char *t14;
    int t15;
    char *t16;
    char *t17;
    int t18;
    char *t19;
    char *t20;
    int t21;
    char *t22;
    char *t23;
    int t24;
    char *t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    char *t30;
    unsigned char t33;
    unsigned char t34;

LAB0:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1032U);
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

LAB4:    xsi_set_current_line(64, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7546);
    t7 = 1;
    if (4U == 4U)
        goto LAB51;

LAB52:    t7 = 0;

LAB53:    if (t7 != 0)
        goto LAB48;

LAB50:    xsi_set_current_line(67, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7553);
    t7 = 1;
    if (4U == 4U)
        goto LAB62;

LAB63:    t7 = 0;

LAB64:    if (t7 != 0)
        goto LAB59;

LAB61:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7560);
    t7 = 1;
    if (4U == 4U)
        goto LAB73;

LAB74:    t7 = 0;

LAB75:    if (t7 != 0)
        goto LAB70;

LAB72:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7567);
    t7 = 1;
    if (4U == 4U)
        goto LAB84;

LAB85:    t7 = 0;

LAB86:    if (t7 != 0)
        goto LAB81;

LAB83:    xsi_set_current_line(76, ng0);
    t1 = (t0 + 2632U);
    t2 = *((char **)t1);
    t1 = (t0 + 7574);
    t7 = 1;
    if (4U == 4U)
        goto LAB95;

LAB96:    t7 = 0;

LAB97:    if (t7 != 0)
        goto LAB92;

LAB94:
LAB93:
LAB82:
LAB71:
LAB60:
LAB49:    xsi_set_current_line(84, ng0);
    t1 = (t0 + 7581);
    t9 = (t0 + 4576);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast_port(t9);

LAB3:    t1 = (t0 + 4368);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(29, ng0);
    t9 = (t0 + 1192U);
    t10 = *((char **)t9);
    t11 = *((unsigned char *)t10);
    t12 = (t11 == (unsigned char)2);
    if (t12 != 0)
        goto LAB5;

LAB7:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7511);
    t3 = xsi_mem_cmp(t1, t2, 3U);
    if (t3 == 1)
        goto LAB20;

LAB25:    t10 = (t0 + 7514);
    t15 = xsi_mem_cmp(t10, t2, 3U);
    if (t15 == 1)
        goto LAB21;

LAB26:    t14 = (t0 + 7517);
    t18 = xsi_mem_cmp(t14, t2, 3U);
    if (t18 == 1)
        goto LAB22;

LAB27:    t17 = (t0 + 7520);
    t21 = xsi_mem_cmp(t17, t2, 3U);
    if (t21 == 1)
        goto LAB23;

LAB28:
LAB24:    xsi_set_current_line(49, ng0);
    t1 = (t0 + 7535);
    t9 = (t0 + 4512);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(49, ng0);
    t1 = (t0 + 7539);
    t9 = (t0 + 4576);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast_port(t9);

LAB19:    xsi_set_current_line(51, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 7543);
    t7 = 1;
    if (3U == 3U)
        goto LAB35;

LAB36:    t7 = 0;

LAB37:    if (t7 != 0)
        goto LAB32;

LAB34:
LAB33:
LAB6:    goto LAB3;

LAB5:    xsi_set_current_line(30, ng0);
    t9 = (t0 + 1032U);
    t13 = *((char **)t9);
    t9 = (t0 + 7475);
    t15 = xsi_mem_cmp(t9, t13, 3U);
    if (t15 == 1)
        goto LAB9;

LAB14:    t16 = (t0 + 7478);
    t18 = xsi_mem_cmp(t16, t13, 3U);
    if (t18 == 1)
        goto LAB10;

LAB15:    t19 = (t0 + 7481);
    t21 = xsi_mem_cmp(t19, t13, 3U);
    if (t21 == 1)
        goto LAB11;

LAB16:    t22 = (t0 + 7484);
    t24 = xsi_mem_cmp(t22, t13, 3U);
    if (t24 == 1)
        goto LAB12;

LAB17:
LAB13:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 7499);
    t9 = (t0 + 4512);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 7503);
    t9 = (t0 + 4576);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(35, ng0);
    t1 = (t0 + 7507);
    t9 = (t0 + 4576);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast_port(t9);

LAB8:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 4640);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB6;

LAB9:    xsi_set_current_line(31, ng0);
    t25 = (t0 + 1512U);
    t26 = *((char **)t25);
    t25 = (t0 + 4512);
    t27 = (t25 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t26, 4U);
    xsi_driver_first_trans_fast_port(t25);
    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4576);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB10:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 7487);
    t9 = (t0 + 4512);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(32, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4576);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB11:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4512);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(33, ng0);
    t1 = (t0 + 7491);
    t9 = (t0 + 4576);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB8;

LAB12:    xsi_set_current_line(34, ng0);
    t1 = (t0 + 7495);
    t9 = (t0 + 4512);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4576);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(34, ng0);
    t1 = (t0 + 4640);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB8;

LAB18:;
LAB20:    xsi_set_current_line(40, ng0);
    t20 = (t0 + 1352U);
    t22 = *((char **)t20);
    t20 = (t0 + 7368U);
    t23 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t31, t22, t20);
    t25 = (t31 + 12U);
    t4 = *((unsigned int *)t25);
    t5 = (1U * t4);
    t7 = (4U != t5);
    if (t7 == 1)
        goto LAB30;

LAB31:    t26 = (t0 + 4512);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    t29 = (t28 + 56U);
    t30 = *((char **)t29);
    memcpy(t30, t23, 4U);
    xsi_driver_first_trans_fast_port(t26);
    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4576);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB19;

LAB21:    xsi_set_current_line(42, ng0);
    t1 = (t0 + 7523);
    t9 = (t0 + 4512);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(43, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4576);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB19;

LAB22:    xsi_set_current_line(44, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4512);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(45, ng0);
    t1 = (t0 + 7527);
    t9 = (t0 + 4576);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB19;

LAB23:    xsi_set_current_line(46, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4512);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(47, ng0);
    t1 = (t0 + 7531);
    t9 = (t0 + 4576);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    memcpy(t16, t1, 4U);
    xsi_driver_first_trans_fast_port(t9);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 4640);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB19;

LAB29:;
LAB30:    xsi_size_not_matching(4U, t5, 0);
    goto LAB31;

LAB32:    xsi_set_current_line(52, ng0);
    t14 = (t0 + 2152U);
    t16 = *((char **)t14);
    t8 = *((unsigned char *)t16);
    t11 = (t8 == (unsigned char)3);
    if (t11 != 0)
        goto LAB41;

LAB43:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 7368U);
    t9 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t31, t2, t1);
    t10 = (t31 + 12U);
    t4 = *((unsigned int *)t10);
    t5 = (1U * t4);
    t7 = (4U != t5);
    if (t7 == 1)
        goto LAB46;

LAB47:    t13 = (t0 + 4512);
    t14 = (t13 + 56U);
    t16 = *((char **)t14);
    t17 = (t16 + 56U);
    t19 = *((char **)t17);
    memcpy(t19, t9, 4U);
    xsi_driver_first_trans_fast_port(t13);
    xsi_set_current_line(58, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4576);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(59, ng0);
    t1 = (t0 + 4640);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB42:    goto LAB33;

LAB35:    t4 = 0;

LAB38:    if (t4 < 3U)
        goto LAB39;
    else
        goto LAB37;

LAB39:    t10 = (t2 + t4);
    t13 = (t1 + t4);
    if (*((unsigned char *)t10) != *((unsigned char *)t13))
        goto LAB36;

LAB40:    t4 = (t4 + 1);
    goto LAB38;

LAB41:    xsi_set_current_line(53, ng0);
    t14 = (t0 + 1512U);
    t17 = *((char **)t14);
    t14 = (t0 + 7384U);
    t19 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t31, t17, t14);
    t20 = (t31 + 12U);
    t5 = *((unsigned int *)t20);
    t6 = (1U * t5);
    t12 = (4U != t6);
    if (t12 == 1)
        goto LAB44;

LAB45:    t22 = (t0 + 4512);
    t23 = (t22 + 56U);
    t25 = *((char **)t23);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t19, 4U);
    xsi_driver_first_trans_fast_port(t22);
    xsi_set_current_line(54, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4576);
    t9 = (t1 + 56U);
    t10 = *((char **)t9);
    t13 = (t10 + 56U);
    t14 = *((char **)t13);
    memcpy(t14, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(55, ng0);
    t1 = (t0 + 4640);
    t2 = (t1 + 56U);
    t9 = *((char **)t2);
    t10 = (t9 + 56U);
    t13 = *((char **)t10);
    *((unsigned char *)t13) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB42;

LAB44:    xsi_size_not_matching(4U, t6, 0);
    goto LAB45;

LAB46:    xsi_size_not_matching(4U, t5, 0);
    goto LAB47;

LAB48:    xsi_set_current_line(65, ng0);
    t14 = (t0 + 7550);
    t17 = (t0 + 2312U);
    t19 = *((char **)t17);
    t8 = *((unsigned char *)t19);
    t20 = ((IEEE_P_2592010699) + 4000);
    t22 = (t32 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 2;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t3 = (2 - 0);
    t5 = (t3 * 1);
    t5 = (t5 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t5;
    t17 = xsi_base_array_concat(t17, t31, t20, (char)97, t14, t32, (char)99, t8, (char)101);
    t5 = (3U + 1U);
    t11 = (4U != t5);
    if (t11 == 1)
        goto LAB57;

LAB58:    t23 = (t0 + 4512);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t17, 4U);
    xsi_driver_first_trans_fast_port(t23);
    goto LAB49;

LAB51:    t4 = 0;

LAB54:    if (t4 < 4U)
        goto LAB55;
    else
        goto LAB53;

LAB55:    t10 = (t2 + t4);
    t13 = (t1 + t4);
    if (*((unsigned char *)t10) != *((unsigned char *)t13))
        goto LAB52;

LAB56:    t4 = (t4 + 1);
    goto LAB54;

LAB57:    xsi_size_not_matching(4U, t5, 0);
    goto LAB58;

LAB59:    xsi_set_current_line(68, ng0);
    t14 = (t0 + 7557);
    t17 = (t0 + 2152U);
    t19 = *((char **)t17);
    t8 = *((unsigned char *)t19);
    t20 = ((IEEE_P_2592010699) + 4000);
    t22 = (t32 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 2;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t3 = (2 - 0);
    t5 = (t3 * 1);
    t5 = (t5 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t5;
    t17 = xsi_base_array_concat(t17, t31, t20, (char)97, t14, t32, (char)99, t8, (char)101);
    t5 = (3U + 1U);
    t11 = (4U != t5);
    if (t11 == 1)
        goto LAB68;

LAB69:    t23 = (t0 + 4512);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t17, 4U);
    xsi_driver_first_trans_fast_port(t23);
    goto LAB60;

LAB62:    t4 = 0;

LAB65:    if (t4 < 4U)
        goto LAB66;
    else
        goto LAB64;

LAB66:    t10 = (t2 + t4);
    t13 = (t1 + t4);
    if (*((unsigned char *)t10) != *((unsigned char *)t13))
        goto LAB63;

LAB67:    t4 = (t4 + 1);
    goto LAB65;

LAB68:    xsi_size_not_matching(4U, t5, 0);
    goto LAB69;

LAB70:    xsi_set_current_line(71, ng0);
    t14 = (t0 + 7564);
    t17 = (t0 + 2472U);
    t19 = *((char **)t17);
    t8 = *((unsigned char *)t19);
    t20 = ((IEEE_P_2592010699) + 4000);
    t22 = (t32 + 0U);
    t23 = (t22 + 0U);
    *((int *)t23) = 0;
    t23 = (t22 + 4U);
    *((int *)t23) = 2;
    t23 = (t22 + 8U);
    *((int *)t23) = 1;
    t3 = (2 - 0);
    t5 = (t3 * 1);
    t5 = (t5 + 1);
    t23 = (t22 + 12U);
    *((unsigned int *)t23) = t5;
    t17 = xsi_base_array_concat(t17, t31, t20, (char)97, t14, t32, (char)99, t8, (char)101);
    t5 = (3U + 1U);
    t11 = (4U != t5);
    if (t11 == 1)
        goto LAB79;

LAB80:    t23 = (t0 + 4512);
    t25 = (t23 + 56U);
    t26 = *((char **)t25);
    t27 = (t26 + 56U);
    t28 = *((char **)t27);
    memcpy(t28, t17, 4U);
    xsi_driver_first_trans_fast_port(t23);
    goto LAB71;

LAB73:    t4 = 0;

LAB76:    if (t4 < 4U)
        goto LAB77;
    else
        goto LAB75;

LAB77:    t10 = (t2 + t4);
    t13 = (t1 + t4);
    if (*((unsigned char *)t10) != *((unsigned char *)t13))
        goto LAB74;

LAB78:    t4 = (t4 + 1);
    goto LAB76;

LAB79:    xsi_size_not_matching(4U, t5, 0);
    goto LAB80;

LAB81:    xsi_set_current_line(74, ng0);
    t14 = (t0 + 7571);
    t17 = (t0 + 2312U);
    t19 = *((char **)t17);
    t8 = *((unsigned char *)t19);
    t17 = (t0 + 2472U);
    t20 = *((char **)t17);
    t11 = *((unsigned char *)t20);
    t12 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t8, t11);
    t33 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t12);
    t22 = ((IEEE_P_2592010699) + 4000);
    t23 = (t32 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = 0;
    t25 = (t23 + 4U);
    *((int *)t25) = 2;
    t25 = (t23 + 8U);
    *((int *)t25) = 1;
    t3 = (2 - 0);
    t5 = (t3 * 1);
    t5 = (t5 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t5;
    t17 = xsi_base_array_concat(t17, t31, t22, (char)97, t14, t32, (char)99, t33, (char)101);
    t5 = (3U + 1U);
    t34 = (4U != t5);
    if (t34 == 1)
        goto LAB90;

LAB91:    t25 = (t0 + 4512);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t17, 4U);
    xsi_driver_first_trans_fast_port(t25);
    goto LAB82;

LAB84:    t4 = 0;

LAB87:    if (t4 < 4U)
        goto LAB88;
    else
        goto LAB86;

LAB88:    t10 = (t2 + t4);
    t13 = (t1 + t4);
    if (*((unsigned char *)t10) != *((unsigned char *)t13))
        goto LAB85;

LAB89:    t4 = (t4 + 1);
    goto LAB87;

LAB90:    xsi_size_not_matching(4U, t5, 0);
    goto LAB91;

LAB92:    xsi_set_current_line(77, ng0);
    t14 = (t0 + 7578);
    t17 = (t0 + 2152U);
    t19 = *((char **)t17);
    t8 = *((unsigned char *)t19);
    t17 = (t0 + 2472U);
    t20 = *((char **)t17);
    t11 = *((unsigned char *)t20);
    t12 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t8, t11);
    t33 = ieee_p_2592010699_sub_374109322130769762_503743352(IEEE_P_2592010699, t12);
    t22 = ((IEEE_P_2592010699) + 4000);
    t23 = (t32 + 0U);
    t25 = (t23 + 0U);
    *((int *)t25) = 0;
    t25 = (t23 + 4U);
    *((int *)t25) = 2;
    t25 = (t23 + 8U);
    *((int *)t25) = 1;
    t3 = (2 - 0);
    t5 = (t3 * 1);
    t5 = (t5 + 1);
    t25 = (t23 + 12U);
    *((unsigned int *)t25) = t5;
    t17 = xsi_base_array_concat(t17, t31, t22, (char)97, t14, t32, (char)99, t33, (char)101);
    t5 = (3U + 1U);
    t34 = (4U != t5);
    if (t34 == 1)
        goto LAB101;

LAB102:    t25 = (t0 + 4512);
    t26 = (t25 + 56U);
    t27 = *((char **)t26);
    t28 = (t27 + 56U);
    t29 = *((char **)t28);
    memcpy(t29, t17, 4U);
    xsi_driver_first_trans_fast_port(t25);
    goto LAB93;

LAB95:    t4 = 0;

LAB98:    if (t4 < 4U)
        goto LAB99;
    else
        goto LAB97;

LAB99:    t10 = (t2 + t4);
    t13 = (t1 + t4);
    if (*((unsigned char *)t10) != *((unsigned char *)t13))
        goto LAB96;

LAB100:    t4 = (t4 + 1);
    goto LAB98;

LAB101:    xsi_size_not_matching(4U, t5, 0);
    goto LAB102;

}


extern void work_a_1731506050_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1731506050_3212880686_p_0,(void *)work_a_1731506050_3212880686_p_1};
	xsi_register_didat("work_a_1731506050_3212880686", "isim/lagartijax4_sim_isim_beh.exe.sim/work/a_1731506050_3212880686.didat");
	xsi_register_executes(pe);
}
