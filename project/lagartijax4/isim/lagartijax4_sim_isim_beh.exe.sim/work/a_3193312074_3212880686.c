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
static const char *ng0 = "/home/ivan/Escom/Arquitectura/microprocessor/source/basic/logic_op_1bit.vhd";
extern char *IEEE_P_2592010699;

unsigned char ieee_p_2592010699_sub_3488546069778340532_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768496604610246_503743352(char *, unsigned char , unsigned char );
unsigned char ieee_p_2592010699_sub_3488768497506413324_503743352(char *, unsigned char , unsigned char );


static void work_a_3193312074_3212880686_p_0(char *t0)
{
    char *t1;
    char *t2;
    unsigned char t4;
    unsigned int t5;
    char *t6;
    char *t7;
    char *t8;
    char *t9;
    unsigned char t10;
    char *t11;
    unsigned char t12;
    char *t13;
    unsigned char t14;
    unsigned char t15;
    unsigned char t16;
    char *t17;
    char *t18;
    char *t19;
    char *t20;
    char *t21;
    char *t22;
    unsigned char t24;
    unsigned int t25;
    char *t26;
    char *t27;
    char *t28;
    char *t29;
    unsigned char t30;
    char *t31;
    unsigned char t32;
    char *t33;
    unsigned char t34;
    unsigned char t35;
    unsigned char t36;
    char *t37;
    char *t38;
    char *t39;
    char *t40;
    char *t41;
    char *t42;
    unsigned char t44;
    unsigned int t45;
    char *t46;
    char *t47;
    char *t48;
    char *t49;
    unsigned char t50;
    char *t51;
    unsigned char t52;
    char *t53;
    unsigned char t54;
    unsigned char t55;
    unsigned char t56;
    char *t57;
    char *t58;
    char *t59;
    char *t60;
    char *t61;

LAB0:    xsi_set_current_line(15, ng0);
    t1 = (t0 + 1352U);
    t2 = *((char **)t1);
    t1 = (t0 + 5094);
    t4 = 1;
    if (3U == 3U)
        goto LAB5;

LAB6:    t4 = 0;

LAB7:    if (t4 != 0)
        goto LAB3;

LAB4:    t21 = (t0 + 1352U);
    t22 = *((char **)t21);
    t21 = (t0 + 5097);
    t24 = 1;
    if (3U == 3U)
        goto LAB13;

LAB14:    t24 = 0;

LAB15:    if (t24 != 0)
        goto LAB11;

LAB12:    t41 = (t0 + 1352U);
    t42 = *((char **)t41);
    t41 = (t0 + 5100);
    t44 = 1;
    if (3U == 3U)
        goto LAB21;

LAB22:    t44 = 0;

LAB23:    if (t44 != 0)
        goto LAB19;

LAB20:
LAB2:    t61 = (t0 + 3144);
    *((int *)t61) = 1;

LAB1:    return;
LAB3:    t8 = (t0 + 1512U);
    t9 = *((char **)t8);
    t10 = *((unsigned char *)t9);
    t8 = (t0 + 1032U);
    t11 = *((char **)t8);
    t12 = *((unsigned char *)t11);
    t8 = (t0 + 1192U);
    t13 = *((char **)t8);
    t14 = *((unsigned char *)t13);
    t15 = ieee_p_2592010699_sub_3488768496604610246_503743352(IEEE_P_2592010699, t12, t14);
    t16 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t10, t15);
    t8 = (t0 + 3224);
    t17 = (t8 + 56U);
    t18 = *((char **)t17);
    t19 = (t18 + 56U);
    t20 = *((char **)t19);
    *((unsigned char *)t20) = t16;
    xsi_driver_first_trans_fast_port(t8);
    goto LAB2;

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

LAB11:    t28 = (t0 + 1512U);
    t29 = *((char **)t28);
    t30 = *((unsigned char *)t29);
    t28 = (t0 + 1032U);
    t31 = *((char **)t28);
    t32 = *((unsigned char *)t31);
    t28 = (t0 + 1192U);
    t33 = *((char **)t28);
    t34 = *((unsigned char *)t33);
    t35 = ieee_p_2592010699_sub_3488546069778340532_503743352(IEEE_P_2592010699, t32, t34);
    t36 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t30, t35);
    t28 = (t0 + 3224);
    t37 = (t28 + 56U);
    t38 = *((char **)t37);
    t39 = (t38 + 56U);
    t40 = *((char **)t39);
    *((unsigned char *)t40) = t36;
    xsi_driver_first_trans_fast_port(t28);
    goto LAB2;

LAB13:    t25 = 0;

LAB16:    if (t25 < 3U)
        goto LAB17;
    else
        goto LAB15;

LAB17:    t26 = (t22 + t25);
    t27 = (t21 + t25);
    if (*((unsigned char *)t26) != *((unsigned char *)t27))
        goto LAB14;

LAB18:    t25 = (t25 + 1);
    goto LAB16;

LAB19:    t48 = (t0 + 1512U);
    t49 = *((char **)t48);
    t50 = *((unsigned char *)t49);
    t48 = (t0 + 1032U);
    t51 = *((char **)t48);
    t52 = *((unsigned char *)t51);
    t48 = (t0 + 1192U);
    t53 = *((char **)t48);
    t54 = *((unsigned char *)t53);
    t55 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t52, t54);
    t56 = ieee_p_2592010699_sub_3488768497506413324_503743352(IEEE_P_2592010699, t50, t55);
    t48 = (t0 + 3224);
    t57 = (t48 + 56U);
    t58 = *((char **)t57);
    t59 = (t58 + 56U);
    t60 = *((char **)t59);
    *((unsigned char *)t60) = t56;
    xsi_driver_first_trans_fast_port(t48);
    goto LAB2;

LAB21:    t45 = 0;

LAB24:    if (t45 < 3U)
        goto LAB25;
    else
        goto LAB23;

LAB25:    t46 = (t42 + t45);
    t47 = (t41 + t45);
    if (*((unsigned char *)t46) != *((unsigned char *)t47))
        goto LAB22;

LAB26:    t45 = (t45 + 1);
    goto LAB24;

}


extern void work_a_3193312074_3212880686_init()
{
	static char *pe[] = {(void *)work_a_3193312074_3212880686_p_0};
	xsi_register_didat("work_a_3193312074_3212880686", "isim/lagartijax4_sim_isim_beh.exe.sim/work/a_3193312074_3212880686.didat");
	xsi_register_executes(pe);
}
