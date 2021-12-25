/** @file     OsTask_21.c
  *
  * @brief    Task OsTask_21 body
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
#include "OsTask_21.h"
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
#define Cylinder_Sen_START_SEC_CODE
#include "Cylinder_Sen_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, Cylinder_Sen_CODE) RunnableEntity_0_func(void);
#define Cylinder_Sen_STOP_SEC_CODE
#include "Cylinder_Sen_MemMap.h" /*lint !e537 permit multiple inclusion */

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
TASK(OsTask_21)
{
   for ( ; ; )
   {
      WaitEvent(Rte_Ev_300000000_0);
      ClearEvent(Rte_Ev_300000000_0);
      /* Box: Implicit Buffer Initialization begin */
      /* Box: Implicit Buffer Initialization end */
      /* Box: Implicit Buffer Fill begin */
      /* Box: Implicit Buffer Fill end */
      {
         /* Box: CPT_Cylinder_Sen begin */
         RunnableEntity_0_func();
         /* Box: CPT_Cylinder_Sen end */
      }
      /* Box: Implicit Buffer Flush begin */
      /* Box: Implicit Buffer Flush end */
   }
} /* OsTask_21 */
#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */

