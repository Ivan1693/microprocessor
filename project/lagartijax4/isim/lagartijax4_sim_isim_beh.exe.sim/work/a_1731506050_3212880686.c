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


static void work_a_1731506050_3212880686_p_0(char *t0)
{
    char t23[16];
    char *t1;
    char *t2;
    unsigned char t3;
    unsigned char t4;
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
    int t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned int t24;
    unsigned int t25;
    char *t26;
    char *t27;
    unsigned char t28;
    unsigned int t29;
    unsigned char t30;

LAB0:    xsi_set_current_line(27, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB2;

LAB4:    xsi_set_current_line(37, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6818);
    t7 = xsi_mem_cmp(t1, t2, 2U);
    if (t7 == 1)
        goto LAB17;

LAB22:    t6 = (t0 + 6820);
    t10 = xsi_mem_cmp(t6, t2, 2U);
    if (t10 == 1)
        goto LAB18;

LAB23:    t9 = (t0 + 6822);
    t13 = xsi_mem_cmp(t9, t2, 2U);
    if (t13 == 1)
        goto LAB19;

LAB24:    t12 = (t0 + 6824);
    t16 = xsi_mem_cmp(t12, t2, 2U);
    if (t16 == 1)
        goto LAB20;

LAB25:
LAB21:    xsi_set_current_line(43, ng0);
    t1 = (t0 + 6830);
    t5 = (t0 + 4024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);

LAB16:    xsi_set_current_line(45, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6834);
    t3 = 1;
    if (2U == 2U)
        goto LAB32;

LAB33:    t3 = 0;

LAB34:    if (t3 != 0)
        goto LAB29;

LAB31:
LAB30:
LAB3:    xsi_set_current_line(56, ng0);
    t1 = (t0 + 1192U);
    t2 = *((char **)t1);
    t3 = *((unsigned char *)t2);
    t4 = (t3 == (unsigned char)2);
    if (t4 != 0)
        goto LAB45;

LAB47:    xsi_set_current_line(66, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6852);
    t7 = xsi_mem_cmp(t1, t2, 2U);
    if (t7 == 1)
        goto LAB60;

LAB65:    t6 = (t0 + 6854);
    t10 = xsi_mem_cmp(t6, t2, 2U);
    if (t10 == 1)
        goto LAB61;

LAB66:    t9 = (t0 + 6856);
    t13 = xsi_mem_cmp(t9, t2, 2U);
    if (t13 == 1)
        goto LAB62;

LAB67:    t12 = (t0 + 6858);
    t16 = xsi_mem_cmp(t12, t2, 2U);
    if (t16 == 1)
        goto LAB63;

LAB68:
LAB64:    xsi_set_current_line(71, ng0);
    t1 = (t0 + 6868);
    t5 = (t0 + 4024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);

LAB59:    xsi_set_current_line(73, ng0);
    t1 = (t0 + 1032U);
    t2 = *((char **)t1);
    t1 = (t0 + 6872);
    t3 = 1;
    if (2U == 2U)
        goto LAB73;

LAB74:    t3 = 0;

LAB75:    if (t3 != 0)
        goto LAB70;

LAB72:
LAB71:
LAB46:    t1 = (t0 + 3944);
    *((int *)t1) = 1;

LAB1:    return;
LAB2:    xsi_set_current_line(28, ng0);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 6798);
    t7 = xsi_mem_cmp(t1, t5, 2U);
    if (t7 == 1)
        goto LAB6;

LAB11:    t8 = (t0 + 6800);
    t10 = xsi_mem_cmp(t8, t5, 2U);
    if (t10 == 1)
        goto LAB7;

LAB12:    t11 = (t0 + 6802);
    t13 = xsi_mem_cmp(t11, t5, 2U);
    if (t13 == 1)
        goto LAB8;

LAB13:    t14 = (t0 + 6804);
    t16 = xsi_mem_cmp(t14, t5, 2U);
    if (t16 == 1)
        goto LAB9;

LAB14:
LAB10:    xsi_set_current_line(33, ng0);
    t1 = (t0 + 6814);
    t5 = (t0 + 4024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);

LAB5:    xsi_set_current_line(35, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB3;

LAB6:    xsi_set_current_line(29, ng0);
    t17 = (t0 + 1512U);
    t18 = *((char **)t17);
    t17 = (t0 + 4024);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t18, 4U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB5;

LAB7:    xsi_set_current_line(30, ng0);
    t1 = (t0 + 6806);
    t5 = (t0 + 4024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB5;

LAB8:    xsi_set_current_line(31, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4024);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB5;

LAB9:    xsi_set_current_line(32, ng0);
    t1 = (t0 + 6810);
    t5 = (t0 + 4024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB5;

LAB15:;
LAB17:    xsi_set_current_line(38, ng0);
    t15 = (t0 + 1352U);
    t17 = *((char **)t15);
    t15 = (t0 + 6712U);
    t18 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t23, t17, t15);
    t19 = (t23 + 12U);
    t24 = *((unsigned int *)t19);
    t25 = (1U * t24);
    t3 = (4U != t25);
    if (t3 == 1)
        goto LAB27;

LAB28:    t20 = (t0 + 4024);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    t26 = (t22 + 56U);
    t27 = *((char **)t26);
    memcpy(t27, t18, 4U);
    xsi_driver_first_trans_fast_port(t20);
    goto LAB16;

LAB18:    xsi_set_current_line(39, ng0);
    t1 = (t0 + 6826);
    t5 = (t0 + 4024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB16;

LAB19:    xsi_set_current_line(40, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4024);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB20:    xsi_set_current_line(41, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4024);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(42, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB16;

LAB26:;
LAB27:    xsi_size_not_matching(4U, t25, 0);
    goto LAB28;

LAB29:    xsi_set_current_line(46, ng0);
    t9 = (t0 + 2152U);
    t11 = *((char **)t9);
    t4 = *((unsigned char *)t11);
    t28 = (t4 == (unsigned char)3);
    if (t28 != 0)
        goto LAB38;

LAB40:    xsi_set_current_line(50, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 6712U);
    t5 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t23, t2, t1);
    t6 = (t23 + 12U);
    t24 = *((unsigned int *)t6);
    t25 = (1U * t24);
    t3 = (4U != t25);
    if (t3 == 1)
        goto LAB43;

LAB44:    t8 = (t0 + 4024);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    t12 = (t11 + 56U);
    t14 = *((char **)t12);
    memcpy(t14, t5, 4U);
    xsi_driver_first_trans_fast_port(t8);
    xsi_set_current_line(51, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);

LAB39:    goto LAB30;

LAB32:    t24 = 0;

LAB35:    if (t24 < 2U)
        goto LAB36;
    else
        goto LAB34;

LAB36:    t6 = (t2 + t24);
    t8 = (t1 + t24);
    if (*((unsigned char *)t6) != *((unsigned char *)t8))
        goto LAB33;

LAB37:    t24 = (t24 + 1);
    goto LAB35;

LAB38:    xsi_set_current_line(47, ng0);
    t9 = (t0 + 1512U);
    t12 = *((char **)t9);
    t9 = (t0 + 6728U);
    t14 = ieee_p_2592010699_sub_207919886985903570_503743352(IEEE_P_2592010699, t23, t12, t9);
    t15 = (t23 + 12U);
    t25 = *((unsigned int *)t15);
    t29 = (1U * t25);
    t30 = (4U != t29);
    if (t30 == 1)
        goto LAB41;

LAB42:    t17 = (t0 + 4024);
    t18 = (t17 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t14, 4U);
    xsi_driver_first_trans_fast_port(t17);
    xsi_set_current_line(48, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)2;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB39;

LAB41:    xsi_size_not_matching(4U, t29, 0);
    goto LAB42;

LAB43:    xsi_size_not_matching(4U, t25, 0);
    goto LAB44;

LAB45:    xsi_set_current_line(57, ng0);
    t1 = (t0 + 1032U);
    t5 = *((char **)t1);
    t1 = (t0 + 6836);
    t7 = xsi_mem_cmp(t1, t5, 2U);
    if (t7 == 1)
        goto LAB49;

LAB54:    t8 = (t0 + 6838);
    t10 = xsi_mem_cmp(t8, t5, 2U);
    if (t10 == 1)
        goto LAB50;

LAB55:    t11 = (t0 + 6840);
    t13 = xsi_mem_cmp(t11, t5, 2U);
    if (t13 == 1)
        goto LAB51;

LAB56:    t14 = (t0 + 6842);
    t16 = xsi_mem_cmp(t14, t5, 2U);
    if (t16 == 1)
        goto LAB52;

LAB57:
LAB53:    xsi_set_current_line(63, ng0);
    t1 = (t0 + 6848);
    t5 = (t0 + 4024);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);

LAB48:    goto LAB46;

LAB49:    xsi_set_current_line(58, ng0);
    t17 = (t0 + 1352U);
    t18 = *((char **)t17);
    t17 = (t0 + 4152);
    t19 = (t17 + 56U);
    t20 = *((char **)t19);
    t21 = (t20 + 56U);
    t22 = *((char **)t21);
    memcpy(t22, t18, 4U);
    xsi_driver_first_trans_fast_port(t17);
    goto LAB48;

LAB50:    xsi_set_current_line(59, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4152);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB48;

LAB51:    xsi_set_current_line(60, ng0);
    t1 = (t0 + 6844);
    t5 = (t0 + 4152);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB48;

LAB52:    xsi_set_current_line(61, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4152);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    xsi_set_current_line(62, ng0);
    t1 = (t0 + 4088);
    t2 = (t1 + 56U);
    t5 = *((char **)t2);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    *((unsigned char *)t8) = (unsigned char)3;
    xsi_driver_first_trans_fast_port(t1);
    goto LAB48;

LAB58:;
LAB60:    xsi_set_current_line(67, ng0);
    t15 = (t0 + 1512U);
    t17 = *((char **)t15);
    t15 = (t0 + 4152);
    t18 = (t15 + 56U);
    t19 = *((char **)t18);
    t20 = (t19 + 56U);
    t21 = *((char **)t20);
    memcpy(t21, t17, 4U);
    xsi_driver_first_trans_fast_port(t15);
    goto LAB59;

LAB61:    xsi_set_current_line(68, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 4152);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);
    goto LAB59;

LAB62:    xsi_set_current_line(69, ng0);
    t1 = (t0 + 6860);
    t5 = (t0 + 4152);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB59;

LAB63:    xsi_set_current_line(70, ng0);
    t1 = (t0 + 6864);
    t5 = (t0 + 4152);
    t6 = (t5 + 56U);
    t8 = *((char **)t6);
    t9 = (t8 + 56U);
    t11 = *((char **)t9);
    memcpy(t11, t1, 4U);
    xsi_driver_first_trans_fast_port(t5);
    goto LAB59;

LAB69:;
LAB70:    xsi_set_current_line(74, ng0);
    t9 = (t0 + 2152U);
    t11 = *((char **)t9);
    t4 = *((unsigned char *)t11);
    t28 = (t4 == (unsigned char)3);
    if (t28 != 0)
        goto LAB79;

LAB81:    xsi_set_current_line(77, ng0);
    t1 = (t0 + 1512U);
    t2 = *((char **)t1);
    t1 = (t0 + 4152);
    t5 = (t1 + 56U);
    t6 = *((char **)t5);
    t8 = (t6 + 56U);
    t9 = *((char **)t8);
    memcpy(t9, t2, 4U);
    xsi_driver_first_trans_fast_port(t1);

LAB80:    goto LAB71;

LAB73:    t24 = 0;

LAB76:    if (t24 < 2U)
        goto LAB77;
    else
        goto LAB75;

LAB77:    t6 = (t2 + t24);
    t8 = (t1 + t24);
    if (*((unsigned char *)t6) != *((unsigned char *)t8))
        goto LAB74;

LAB78:    t24 = (t24 + 1);
    goto LAB76;

LAB79:    xsi_set_current_line(75, ng0);
    t9 = (t0 + 1352U);
    t12 = *((char **)t9);
    t9 = (t0 + 4152);
    t14 = (t9 + 56U);
    t15 = *((char **)t14);
    t17 = (t15 + 56U);
    t18 = *((char **)t17);
    memcpy(t18, t12, 4U);
    xsi_driver_first_trans_fast_port(t9);
    goto LAB80;

}


extern void work_a_1731506050_3212880686_init()
{
	static char *pe[] = {(void *)work_a_1731506050_3212880686_p_0};
	xsi_register_didat("work_a_1731506050_3212880686", "isim/lagartijax4_sim_isim_beh.exe.sim/work/a_1731506050_3212880686.didat");
	xsi_register_executes(pe);
}
