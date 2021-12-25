/** @file     Rte_AvgSpeed.h
  *
  * @brief    Application header file
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS GmbH  RTA-RTE v5.10.0  (R4.0 backend version: v7.10.4 (Build 52732))
  */

#ifndef RTE_AVGSPEED_H
#define RTE_AVGSPEED_H

#ifndef RTE_CORE
#ifdef RTE_APPLICATION_HEADER_FILE
#error Multiple application header files included.
#endif /* RTE_APPLICATION_HEADER_FILE */
#define RTE_APPLICATION_HEADER_FILE
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** Includes
 ***
 *******************************************************/

#include "Rte.h"
#include "Rte_Intl.h"
#include "Rte_AvgSpeed_Type.h"

#include "Rte_DataHandleType.h"

#ifdef __cplusplus
extern "C" {
#endif /* __cplusplus */

#if defined(RTE_RUNNABLEAPI_RE_Avg)
   /* Do nothing for this and all elif clauses below (rte_sws_2751) */
#else
   /* None of above defined so define value including all APIs (rte_sws_2751) */
   #define RTE_PRV_ALL_API
#endif

/*******************************************************
 ***
 *** Constants
 ***
 *******************************************************/


/*******************************************************
 ***
 *** Public Types
 ***
 *******************************************************/

/* BEGIN: SWC types (core visible) */
struct Rte_CDS_AvgSpeed {
   uint8 _dummy;
};
typedef struct Rte_CDS_AvgSpeed Rte_CDS_AvgSpeed;
/* END: SWC types (core visible) */

/*******************************************************
 ***
 *** Private Types
 ***
 *******************************************************/

/* BEGIN: SWC types (private) */
/* END: SWC types (private) */

/*******************************************************
 ***
 *** Instance Declarations
 ***
 *******************************************************/

#define RTE_START_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern CONST(struct Rte_CDS_AvgSpeed, RTE_CONST) Rte_Inst_AvgSpeed;
#define RTE_STOP_SEC_CONST_UNSPECIFIED
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */


#ifndef RTE_CORE
typedef CONSTP2CONST(struct Rte_CDS_AvgSpeed, AUTOMATIC, RTE_CONST) Rte_Instance;
#endif /* RTE_CORE */

/*******************************************************
 ***
 *** API Mapping macros
 ***
 *******************************************************/

/* API Mapping Macros */
#ifndef RTE_CORE

#define RTE_START_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(float32, RTE_CODE) Rte_DRead_AvgSpeed_R_4speeds_backleft(void);
FUNC(float32, RTE_CODE) Rte_DRead_AvgSpeed_R_4speeds_backright(void);
FUNC(float32, RTE_CODE) Rte_DRead_AvgSpeed_R_4speeds_frontleft(void);
FUNC(float32, RTE_CODE) Rte_DRead_AvgSpeed_R_4speeds_frontright(void);
#define RTE_STOP_SEC_CODE
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#define RTE_START_SEC_VAR_CLEARED_64
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
extern VAR(float64, RTE_DATA) Rte_Rx_000012_avg_speed_data;
#define RTE_STOP_SEC_VAR_CLEARED_64
#include "Rte_MemMap.h" /*lint !e537 permit multiple inclusion */
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_Avg)
#define Rte_DRead_R_4speeds_backleft() (Rte_DRead_AvgSpeed_R_4speeds_backleft())
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_Avg)
#define Rte_DRead_R_4speeds_backright() (Rte_DRead_AvgSpeed_R_4speeds_backright())
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_Avg)
#define Rte_DRead_R_4speeds_frontleft() (Rte_DRead_AvgSpeed_R_4speeds_frontleft())
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_Avg)
#define Rte_DRead_R_4speeds_frontright() (Rte_DRead_AvgSpeed_R_4speeds_frontright())
#endif
#if defined(RTE_PRV_ALL_API) || defined(RTE_RUNNABLEAPI_RE_Avg)
/* Inline Write optimization; Rte_Write_P_avg_speed_avg_speed_data to direct write */
#define Rte_Write_P_avg_speed_avg_speed_data( data ) ( (Rte_Rx_000012_avg_speed_data = data), RTE_E_OK )
#endif

#endif /* RTE_CORE */

/*******************************************************
 ***
 *** RE Prototypes
 ***
 *******************************************************/

#define AvgSpeed_START_SEC_CODE
#include "AvgSpeed_MemMap.h" /*lint !e537 permit multiple inclusion */
FUNC(void, AvgSpeed_CODE) RE_Avg_func(void);
#define AvgSpeed_STOP_SEC_CODE
#include "AvgSpeed_MemMap.h" /*lint !e537 permit multiple inclusion */

/* Initial values for data element prototypes */

#ifdef __cplusplus
} /* extern C */
#endif /* __cplusplus */

#endif /* !RTE_AVGSPEED_H */
