/** @file     OsTask_22.c
  *
  * @brief    Task OsTask_22 body
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS GmbH  RTA-RTE v5.10.0  (R4.0 backend version: v7.10.4 (Build 52732))
  */

#define RTE_CORE

#include "Rte_Const.h"
#if !defined(RTE_VENDOR_MODE)
#pragma message "Compiling an individual task file but RTE_VENDOR_MODE not defined. Compiling a stale file?"
#endif /* !defined(RTE_VENDOR_MODE) */
#if defined(RTE_USE_TASK_HEADER)
#include "OsTask_22.h"
#else /* !defined(RTE_USE_TASK_HEADER) */
#include "Os.h"
#endif /* !defined(RTE_USE_TASK_HEADER) */
#if defined(RTE_REQUIRES_IOC)
#include "Ioc.h"
#endif /* defined(RTE_REQUIRES_IOC) */
#include "Rte.h"
#include "Rte_Intl.h"
#include "Rte_Type.h"
#include "Rte_DataHandleType.h"

#define RTE_START_SEC_VAR_CLEARED_8
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(Rte_REActCounterType, RTE_DATA) Rte_ActCount_CPT_APP_BRAKE_CONTROLL_COMP_DataReceivedEvent_1;
#define RTE_STOP_SEC_VAR_CLEARED_8
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Runnable entity prototypes */
#define APP_BRAKE_CONTROLL_COMP_START_SEC_CODE
#include "APP_BRAKE_CONTROLL_COMP_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, APP_BRAKE_CONTROLL_COMP_CODE) RE_APP_FR_DATA_RECEV_func(void);
#define APP_BRAKE_CONTROLL_COMP_STOP_SEC_CODE
#include "APP_BRAKE_CONTROLL_COMP_MemMap.h" /*lint !e537 permit multiple inclusion */

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
TASK(OsTask_22)
{
   /* Box: Implicit Buffer Initialization begin */
   /* Box: Implicit Buffer Initialization end */
   /* Box: Implicit Buffer Fill begin */
   /* Box: Implicit Buffer Fill end */
   /* Box: CPT_APP_BRAKE_CONTROLL_COMP begin */
   if ( Rte_ActCount_CPT_APP_BRAKE_CONTROLL_COMP_DataReceivedEvent_1 != FALSE )
   {
      Rte_ActCount_CPT_APP_BRAKE_CONTROLL_COMP_DataReceivedEvent_1 = FALSE;
      RE_APP_FR_DATA_RECEV_func();
   }
   /* Box: CPT_APP_BRAKE_CONTROLL_COMP end */
   /* Box: Implicit Buffer Flush begin */
   /* Box: Implicit Buffer Flush end */
   TerminateTask();
} /* OsTask_22 */
#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */

