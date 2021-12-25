/** \file         EVE_SystemClock.h
  *
  * \brief        System clock functions for ISOLAR-EVE ( target platform: VRTA-ux/VRTA-win )
  *
  * \copyright    Copyright 2020 ETAS GmbH
  *
  * \note         PLATFORM DEPENDENT [yes/no]: yes
  *
  * \note         TO BE CHANGED BY USER [yes/no]: no
  */

#include "vrtaCore.h"

#ifdef __cplusplus
extern "C" {
#endif

void VECU_SystemClock_Init();
void VECU_SystemClock_Start();

vrtaUInt VECU_SystemClock_GetValue();


#ifdef __cplusplus
}
#endif
