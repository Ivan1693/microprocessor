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
char *WORK_P_2363495891;
char *WORK_P_3419143329;
char *WORK_P_0674221568;
char *WORK_P_4021828688;
char *IEEE_P_1242562249;


int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    ieee_p_2592010699_init();
    work_p_4021828688_init();
    work_p_3419143329_init();
    work_a_1057416116_3212880686_init();
    work_p_0674221568_init();
    work_p_2363495891_init();
    work_a_1082377108_3212880686_init();
    work_a_4288625000_3212880686_init();
    work_a_3823634089_3212880686_init();
    work_a_0215327561_3212880686_init();
    work_a_1731506050_3212880686_init();
    work_a_3112044328_3212880686_init();
    work_a_4266567250_3212880686_init();
    work_a_2643071753_3212880686_init();
    work_a_3765326506_3212880686_init();
    work_a_3193312074_3212880686_init();
    work_a_2253917047_3212880686_init();
    work_a_1541122100_3212880686_init();
    work_a_2612810001_3212880686_init();
    work_a_2868578428_3212880686_init();
    work_a_0932517539_3212880686_init();
    work_a_2284138887_3212880686_init();
    ieee_p_1242562249_init();
    work_a_4241658529_3212880686_init();
    work_a_0278279886_3212880686_init();
    work_a_3540323257_3212880686_init();
    work_a_1381716451_3212880686_init();
    work_a_2980580674_3212880686_init();
    work_a_3979877283_3212880686_init();
    work_a_3342043759_3212880686_init();


    xsi_register_tops("work_a_3342043759_3212880686");

    IEEE_P_2592010699 = xsi_get_engine_memory("ieee_p_2592010699");
    xsi_register_ieee_std_logic_1164(IEEE_P_2592010699);
    STD_STANDARD = xsi_get_engine_memory("std_standard");
    WORK_P_2363495891 = xsi_get_engine_memory("work_p_2363495891");
    WORK_P_3419143329 = xsi_get_engine_memory("work_p_3419143329");
    WORK_P_0674221568 = xsi_get_engine_memory("work_p_0674221568");
    WORK_P_4021828688 = xsi_get_engine_memory("work_p_4021828688");
    IEEE_P_1242562249 = xsi_get_engine_memory("ieee_p_1242562249");

    return xsi_run_simulation(argc, argv);

}
