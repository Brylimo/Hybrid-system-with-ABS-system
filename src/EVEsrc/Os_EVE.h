/** \file         Os_EVE.h
  *
  * \brief        Task and ISR macros for ISOLAR-EVE ( target platform: VRTA-ux/VRTA-win )
  *
  * \copyright    Copyright 2020 ETAS GmbH
  *
  * \note         PLATFORM DEPENDENT [yes/no]: yes
  *
  * \note         TO BE CHANGED BY USER [yes/no]: no
  */

#ifndef OS_EVE_H
#define OS_EVE_H

/* Include OS structure definitions but exclude the project
 * specific configuration.
 */
#define OS_CFG_H

#include "Os.h"

/* This macro enables us to use macro expansion for x.
 * TASK(x) will do a simple concatenation, _without_
 * prior expansion of x. The indirection will trigger
 * that expansion before passing the result to TASK().
 */
#define EVE_TASK(x) TASK(x)

/* Same thing for ISRs.
 */
#define EVE_ISR(x) ISR(x)

#endif /* OS_EVE_H */
