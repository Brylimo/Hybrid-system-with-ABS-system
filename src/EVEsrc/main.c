/** \file         main.c
  *
  * \brief        Main loop for ISOLAR-EVE ( target platform: VRTA-ux/VRTA-win )
  *
  * \copyright    Copyright 2020 ETAS GmbH
  *
  * \note         PLATFORM DEPENDENT [yes/no]: yes
  *
  * \note         TO BE CHANGED BY USER [yes/no]: no
  */

#include "Os.h"
#include "Std_Types.h"
#include "Main_Cfg.h"
#include "target.h"


#ifdef USES_BSW
#   include "EcuM.h"
#endif

void StartAUTOSAR()
{
#ifdef USES_BSW
    /* Call Autosar EcuM_Init() */
    EcuM_Init();
#else
    StartOS(OSDEFAULTAPPMODE);
#endif
}

OS_MAIN()
{
#ifdef EVE_RTPC_SUPPORT
    char *argv[] = { "VECU" };
    rtos_init(1, argv);
#endif
    TargetInit();
    StartAUTOSAR();
}
