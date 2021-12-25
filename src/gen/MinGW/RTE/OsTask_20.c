/** @file     OsTask_20.c
  *
  * @brief    Task OsTask_20 body
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
#include "OsTask_20.h"
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

/* Runnable entity prototypes */
#define Engine_Gear_ACT_START_SEC_CODE
#include "Engine_Gear_ACT_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, Engine_Gear_ACT_CODE) RE_EG_level2_ACT_func(void);
#define Engine_Gear_ACT_STOP_SEC_CODE
#include "Engine_Gear_ACT_MemMap.h" /*lint !e537 permit multiple inclusion */

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
TASK(OsTask_20)
{
   for ( ; ; )
   {
      WaitEvent(Rte_Ev_CPT_Engine_Gear_ACT_ExternalTriggerOccurredEvent_1);
      ClearEvent(Rte_Ev_CPT_Engine_Gear_ACT_ExternalTriggerOccurredEvent_1);
      /* Box: Implicit Buffer Initialization begin */
      /* Box: Implicit Buffer Initialization end */
      /* Box: Implicit Buffer Fill begin */
      /* Box: Implicit Buffer Fill end */
      {
         /* Box: CPT_Engine_Gear_ACT begin */
         RE_EG_level2_ACT_func();
         /* Box: CPT_Engine_Gear_ACT end */
      }
      /* Box: Implicit Buffer Flush begin */
      /* Box: Implicit Buffer Flush end */
   }
} /* OsTask_20 */
#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */

