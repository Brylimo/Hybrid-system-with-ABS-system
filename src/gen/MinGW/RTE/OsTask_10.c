/** @file     OsTask_10.c
  *
  * @brief    Task OsTask_10 body
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
#include "OsTask_10.h"
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
#define GearModeSen_START_SEC_CODE
#include "GearModeSen_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, GearModeSen_CODE) RE_GearModeSen_func(void);
#define GearModeSen_STOP_SEC_CODE
#include "GearModeSen_MemMap.h" /*lint !e537 permit multiple inclusion */

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
TASK(OsTask_10)
{
   for ( ; ; )
   {
      WaitEvent(Rte_Ev_100000000_0);
      ClearEvent(Rte_Ev_100000000_0);
      /* Box: Implicit Buffer Initialization begin */
      /* Box: Implicit Buffer Initialization end */
      /* Box: Implicit Buffer Fill begin */
      /* Box: Implicit Buffer Fill end */
      {
         /* Box: CPT_GearModeSen begin */
         RE_GearModeSen_func();
         /* Box: CPT_GearModeSen end */
      }
      /* Box: Implicit Buffer Flush begin */
      /* Box: Implicit Buffer Flush end */
   }
} /* OsTask_10 */
#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
