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



int main(int argc, char **argv)
{
    xsi_init_design(argc, argv);
    xsi_register_info(&xsi_info);

    xsi_register_min_prec_unit(-12);
    work_m_03587244318804628560_3946639935_init();
    work_m_01637101176819416792_3177748342_init();
    work_m_05037988253933784608_1639948592_init();
    work_m_14661893338896705067_0212316856_init();
    work_m_13146663994241165925_2138410698_init();
    work_m_00459571833554295152_1671855396_init();
    work_m_16541823861846354283_2073120511_init();


    xsi_register_tops("work_m_00459571833554295152_1671855396");
    xsi_register_tops("work_m_16541823861846354283_2073120511");


    return xsi_run_simulation(argc, argv);

}
