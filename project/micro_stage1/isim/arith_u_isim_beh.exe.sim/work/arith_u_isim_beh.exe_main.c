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

#include "xsi.h"

struct XSI_INFO xsi_info;

char *IEEE_P_2592010699;
char *STD_STANDARD;
char *WORK_P_3419143329;
char *WORK_P_0674221568;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_p_0674221568_init();
    work_p_3419143329_init();
    work_a_4288625000_3212880686_init();
    work_a_3823634089_3212880686_init();
    work_a_0215327561_3212880686_init();
    work_a_1731506050_3212880686_init();
    work_a_3112044328_3212880686_init();
    work_a_4266567250_3212880686_init();
    work_a_2643071753_3212880686_init();
    work_a_2239474002_3212880686_init();


    xsi_register_tops("work_a_2239474002_3212880686");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    WORK_P_3419143329 = xsi_get_engine_memory("work_p_3419143329");
    WORK_P_0674221568 = xsi_get_engine_memory("work_p_0674221568");

    return xsi_run_simulation(argc, argv);

}
