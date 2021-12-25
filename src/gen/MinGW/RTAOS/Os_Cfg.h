/*
 * This is Os_Cfg.h, auto-generated for:
 *   Project: Fproject2_5
 *   Target:  VRTA
 *   Variant: MinGW
 *   Version: 3.0.41
 *   [$UKS 650]
 */
#ifndef OS_CFG_H
#define OS_CFG_H
/* -- Start expansion of <Os_Safe_Cfg.h> -- */
/* -- Start expansion of <Os_Target_Cfg.h> -- */
#define OS_TARGET_VARIANT_MinGW
#define OS_ISR_VECTOR_VECU_SystemClock_ISR (7U)

/* -- End expansion of <Os_Target_Cfg.h> -- */
#define OS_NUM_APPMODES (2U)
#define OS_NUM_APPLICATIONS (0U)
#define OS_NUM_SPINLOCKS (0U)
#define OS_NUM_TRUSTED_FUNCTIONS (0U)
#define OS_NUM_IOC_CALLBACK_FUNCTIONS (Os_const_ioc_function_count)
#define OS_NUM_EVENTS (12U)
#define OS_NUM_TASKS (25U)
#define OS_NUM_ISRS (1U)
#define OS_NUM_RESOURCES (2U)
#define OS_NUM_ALARMS (14U)
#define OS_NUM_SCHEDULETABLES (1U)
#define OS_NUM_PERIPHERALAREAS (0U)
#define OS_NUM_TRACEPOINTS (0U)
#define OS_NUM_TASKTRACEPOINTS (0U)
#define OS_NUM_INTERVALS (0U)
#define OS_NUM_TRACECATEGORIES (0U)
#define OS_TRACE_CATEGORY_ALWAYS ((Os_TraceCategoriesType)(0x80000000UL))
#define OS_TRACE_CATEGORY_NEVER  ((Os_TraceCategoriesType)(0x00000000UL))
/* [MISRA 2012 Dir 4.9] */ /*lint -estring(9026, OS_TICKS2*) */
#define OS_NUM_COUNTERS (2U)
#define OSCYCLEDURATION (1000) /* [$UKS 1224] */
#define OSCYCLESPERSECOND (1000000U) /* [$UKS 1225] */
#define OSSWTICKDURATION (1000000) /* [$UKS 1226] */
#define OSSWTICKSPERSECOND (1000U) /* [$UKS 1227] */
#define OS_TICKS2NS_Rte_TOutCounter(ticks) ((PhysicalTimeType)((ticks) * 1000000000U /* Default: SecondsPerTick not set */)) /* [$UKS 843] */
#define OS_TICKS2US_Rte_TOutCounter(ticks) ((PhysicalTimeType)((ticks) * 1000000U /* Default: SecondsPerTick not set */)) /* [$UKS 843] */
#define OS_TICKS2MS_Rte_TOutCounter(ticks) ((PhysicalTimeType)((ticks) * 1000U /* Default: SecondsPerTick not set */)) /* [$UKS 843] */
#define OS_TICKS2SEC_Rte_TOutCounter(ticks) ((PhysicalTimeType)((ticks) * 1U /* Default: SecondsPerTick not set */)) /* [$UKS 843] */
#define OSMAXALLOWEDVALUE_Rte_TOutCounter (65535U) /* [$UKS 219] */
#define OSTICKSPERBASE_Rte_TOutCounter (1U) /* [$UKS 220] */
#define OSTICKDURATION_Rte_TOutCounter OS_TICKS2NS_Rte_TOutCounter(1U) /* [$UKS 221] */
#define OSMINCYCLE_Rte_TOutCounter (1U) /* [$UKS 222] */
#define OS_TICKS2NS_Rte_TickCounter(ticks) ((PhysicalTimeType)((ticks) * 1000000000U /* Default: SecondsPerTick not set */)) /* [$UKS 843] */
#define OS_TICKS2US_Rte_TickCounter(ticks) ((PhysicalTimeType)((ticks) * 1000000U /* Default: SecondsPerTick not set */)) /* [$UKS 843] */
#define OS_TICKS2MS_Rte_TickCounter(ticks) ((PhysicalTimeType)((ticks) * 1000U /* Default: SecondsPerTick not set */)) /* [$UKS 843] */
#define OS_TICKS2SEC_Rte_TickCounter(ticks) ((PhysicalTimeType)((ticks) * 1U /* Default: SecondsPerTick not set */)) /* [$UKS 843] */
#define OSMAXALLOWEDVALUE_Rte_TickCounter (65535U) /* [$UKS 219] */
#define OSTICKSPERBASE_Rte_TickCounter (1U) /* [$UKS 220] */
#define OSTICKDURATION_Rte_TickCounter OS_TICKS2NS_Rte_TickCounter(1U) /* [$UKS 221] */
#define OSMINCYCLE_Rte_TickCounter (1U) /* [$UKS 222] */
#define OSMAXALLOWEDVALUE OSMAXALLOWEDVALUE_SystemCounter /* [$UKS 215] */
#define OSTICKSPERBASE OSTICKSPERBASE_SystemCounter /* [$UKS 216] */
#define OSMINCYCLE OSMINCYCLE_SystemCounter /* [$UKS 218] */
#define OSTICKDURATION OSTICKDURATION_SystemCounter /* [$UKS 217] */
#define OS_NUM_CORES (1U)
#define OS_NUM_OS_CORES (1U)
#define OS_CORE_ID_MASTER (0U)  /* [$UKS 1609] */

/* ------------------------------------------------- */
/* [MISRA 2012 Rule 20.1] */ /*lint -save -estring(9019, *) */
#define OS_START_SEC_CODE_LIB
#include "MemMap.h" /* [MISRA 2012 Dir 4.10] */ /*lint !e537 !e451 */
/*lint -restore */
extern FUNC(StatusType, OS_CODE) Os_IncrementCounter_Rte_TOutCounter(void);
extern FUNC(StatusType, OS_CODE) Os_IncrementCounter_Rte_TickCounter(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_13(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_14(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_15(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_16(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_18(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_19(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_2(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_20(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_21(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_22(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_23(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_24(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_25(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_26(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_3(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_5(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_6(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_7(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_8(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_04(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_1(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_10(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_11(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_12(void);
extern FUNC(void, OS_CODE) Os_Entry_OsTask_0(void);
extern FUNC(void, OS_CODE) Os_Entry_VECU_SystemClock_ISR(void);
/* [MISRA 2012 Rule 20.1] */ /*lint -save -estring(9019, *) */
#define OS_STOP_SEC_CODE_LIB
#include "MemMap.h" /* [MISRA 2012 Dir 4.10] */ /*lint !e537 !e451 */
/*lint -restore */

/* -- End expansion of <Os_Safe_Cfg.h> -- */

/* -------- AppMode declarations --------- */

/* ----- OS-Application declarations ----- */

/* ----- PeripheralArea declarations ----- */

/* -------- Event declarations --------- */
#define Rte_Activity (1U)
#define Rte_Timeout (2U)
#define Rte_Ev_100000000_0 (4U)
#define Rte_Ev_300000000_0 (4U)
#define Rte_Ev_90000000_0 (4U)
#define Rte_Ev_CPT_ACT_HYDRAULIC_MODULATOR_FRONTL_COMP_DataReceivedEvent_0 (4U)
#define Rte_Ev_CPT_ACT_HYDRAULIC_MODULATOR_FRONTR_COMP_DataReceivedEvent_0 (4U)
#define Rte_Ev_CPT_ACT_HYDRAULIC_MODULATOR_REARL_COMP_DataReceivedEvent_0 (4U)
#define Rte_Ev_CPT_ACT_HYDRAULIC_MODULATOR_REARR_COMP_DataReceivedEvent_0 (4U)
#define Rte_Ev_CPT_Engine_Gear_ACT_ExternalTriggerOccurredEvent_0 (4U)
#define Rte_Ev_CPT_Engine_Gear_ACT_ExternalTriggerOccurredEvent_1 (4U)
#define Rte_Ev_CPT_Engine_Gear_ACT_ExternalTriggerOccurredEvent_2 (4U)
DeclareEvent(Rte_Activity)
DeclareEvent(Rte_Timeout)
DeclareEvent(Rte_Ev_100000000_0)
DeclareEvent(Rte_Ev_300000000_0)
DeclareEvent(Rte_Ev_90000000_0)
DeclareEvent(Rte_Ev_CPT_ACT_HYDRAULIC_MODULATOR_FRONTL_COMP_DataReceivedEvent_0)
DeclareEvent(Rte_Ev_CPT_ACT_HYDRAULIC_MODULATOR_FRONTR_COMP_DataReceivedEvent_0)
DeclareEvent(Rte_Ev_CPT_ACT_HYDRAULIC_MODULATOR_REARL_COMP_DataReceivedEvent_0)
DeclareEvent(Rte_Ev_CPT_ACT_HYDRAULIC_MODULATOR_REARR_COMP_DataReceivedEvent_0)
DeclareEvent(Rte_Ev_CPT_Engine_Gear_ACT_ExternalTriggerOccurredEvent_0)
DeclareEvent(Rte_Ev_CPT_Engine_Gear_ACT_ExternalTriggerOccurredEvent_1)
DeclareEvent(Rte_Ev_CPT_Engine_Gear_ACT_ExternalTriggerOccurredEvent_2)

/* -------- Task declarations --------- */
#define OsTask_13 (&Os_const_tasks0[0])
#define OS_TPL_FOR_OsTask_13 (0U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_13 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_13 (0U) /* [$UKS 2185] */
DeclareTask(OsTask_13)
#define OsTask_14 (&Os_const_tasks0[1])
#define OS_TPL_FOR_OsTask_14 (1U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_14 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_14 (1U) /* [$UKS 2185] */
DeclareTask(OsTask_14)
#define OsTask_15 (&Os_const_tasks0[2])
#define OS_TPL_FOR_OsTask_15 (2U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_15 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_15 (2U) /* [$UKS 2185] */
DeclareTask(OsTask_15)
#define OsTask_16 (&Os_const_tasks0[3])
#define OS_TPL_FOR_OsTask_16 (3U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_16 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_16 (3U) /* [$UKS 2185] */
DeclareTask(OsTask_16)
#define OsTask_18 (&Os_const_tasks0[4])
#define OS_TPL_FOR_OsTask_18 (4U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_18 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_18 (4U) /* [$UKS 2185] */
DeclareTask(OsTask_18)
#define OsTask_19 (&Os_const_tasks0[5])
#define OS_TPL_FOR_OsTask_19 (5U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_19 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_19 (5U) /* [$UKS 2185] */
DeclareTask(OsTask_19)
#define OsTask_2 (&Os_const_tasks0[6])
#define OS_TPL_FOR_OsTask_2 (6U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_2 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_2 (6U) /* [$UKS 2185] */
DeclareTask(OsTask_2)
#define OsTask_20 (&Os_const_tasks0[7])
#define OS_TPL_FOR_OsTask_20 (7U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_20 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_20 (7U) /* [$UKS 2185] */
DeclareTask(OsTask_20)
#define OsTask_21 (&Os_const_tasks0[8])
#define OS_TPL_FOR_OsTask_21 (8U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_21 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_21 (8U) /* [$UKS 2185] */
DeclareTask(OsTask_21)
#define OsTask_22 (&Os_const_tasks0[9])
#define OS_TPL_FOR_OsTask_22 (9U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_22 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_22 (9U) /* [$UKS 2185] */
DeclareTask(OsTask_22)
#define OsTask_23 (&Os_const_tasks0[10])
#define OS_TPL_FOR_OsTask_23 (10U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_23 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_23 (10U) /* [$UKS 2185] */
DeclareTask(OsTask_23)
#define OsTask_24 (&Os_const_tasks0[11])
#define OS_TPL_FOR_OsTask_24 (11U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_24 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_24 (11U) /* [$UKS 2185] */
DeclareTask(OsTask_24)
#define OsTask_25 (&Os_const_tasks0[12])
#define OS_TPL_FOR_OsTask_25 (12U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_25 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_25 (12U) /* [$UKS 2185] */
DeclareTask(OsTask_25)
#define OsTask_26 (&Os_const_tasks0[13])
#define OS_TPL_FOR_OsTask_26 (13U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_26 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_26 (13U) /* [$UKS 2185] */
DeclareTask(OsTask_26)
#define OsTask_3 (&Os_const_tasks0[14])
#define OS_TPL_FOR_OsTask_3 (14U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_3 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_3 (14U) /* [$UKS 2185] */
DeclareTask(OsTask_3)
#define OsTask_5 (&Os_const_tasks0[15])
#define OS_TPL_FOR_OsTask_5 (15U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_5 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_5 (15U) /* [$UKS 2185] */
DeclareTask(OsTask_5)
#define OsTask_6 (&Os_const_tasks0[16])
#define OS_TPL_FOR_OsTask_6 (16U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_6 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_6 (16U) /* [$UKS 2185] */
DeclareTask(OsTask_6)
#define OsTask_7 (&Os_const_tasks0[17])
#define OS_TPL_FOR_OsTask_7 (17U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_7 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_7 (17U) /* [$UKS 2185] */
DeclareTask(OsTask_7)
#define OsTask_8 (&Os_const_tasks0[18])
#define OS_TPL_FOR_OsTask_8 (18U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_8 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_8 (18U) /* [$UKS 2185] */
DeclareTask(OsTask_8)
#define OsTask_04 (&Os_const_tasks0[19])
#define OS_TPL_FOR_OsTask_04 (19U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_04 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_04 (19U) /* [$UKS 2185] */
DeclareTask(OsTask_04)
#define OsTask_1 (&Os_const_tasks0[20])
#define OS_TPL_FOR_OsTask_1 (20U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_1 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_1 (20U) /* [$UKS 2185] */
DeclareTask(OsTask_1)
#define OsTask_10 (&Os_const_tasks0[21])
#define OS_TPL_FOR_OsTask_10 (21U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_10 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_10 (21U) /* [$UKS 2185] */
DeclareTask(OsTask_10)
#define OsTask_11 (&Os_const_tasks0[22])
#define OS_TPL_FOR_OsTask_11 (22U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_11 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_11 (22U) /* [$UKS 2185] */
DeclareTask(OsTask_11)
#define OsTask_12 (&Os_const_tasks0[23])
#define OS_TPL_FOR_OsTask_12 (23U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_12 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_12 (23U) /* [$UKS 2185] */
DeclareTask(OsTask_12)
#define OsTask_0 (&Os_const_tasks0[24])
#define OS_TPL_FOR_OsTask_0 (24U) /* [$UKS 2007] */
#define OS_IMASK_FOR_OsTask_0 (0U) /* [$UKS 2009] */
#define OS_INDEX_FOR_OsTask_0 (24U) /* [$UKS 2185] */
DeclareTask(OsTask_0)
/* [MISRA 2012 Dir 4.9] */ /*lint -estring(9026, OS_TPL_FOR_TASK, OS_IMASK_FOR_TASK) */
/* [MISRA 2012 Rule 20.10] */ /*lint -estring(9024, OS_TPL_FOR_TASK) */
#define OS_TPL_FOR_TASK(n) OS_TPL_FOR_##n  /* [$UKS 2008] */
/* [MISRA 2012 Rule 20.10] */ /*lint -estring(9024, OS_IMASK_FOR_TASK) */
#define OS_IMASK_FOR_TASK(n) OS_IMASK_FOR_##n  /* [$UKS 2010] */

/* -------- ISR declarations --------- */
#define VECU_SystemClock_ISR (&Os_const_isrs[0U])
#define OS_IMASK_FOR_VECU_SystemClock_ISR (5U) /* [$UKS 2009] */
#define OS_INDEX_FOR_VECU_SystemClock_ISR (0U) /* [$UKS 2186] */
DeclareISR(VECU_SystemClock_ISR)
/* [MISRA 2012 Dir 4.9] */ /*lint -estring(9026, OS_IMASK_FOR_ISR) */
/* [MISRA 2012 Rule 20.10] */ /*lint -estring(9024, OS_IMASK_FOR_ISR) */
#define OS_IMASK_FOR_ISR(n) OS_IMASK_FOR_##n  /* [$UKS 2011] */

/* -------- Resource declarations --------- */
#define RTE_RESOURCE (&Os_const_resources[0U])
DeclareResource(RTE_RESOURCE)
#define RES_SCHEDULER (&Os_const_resources[1U])
DeclareResource(RES_SCHEDULER)

/* -------- Counter declarations --------- */
#define Rte_TOutCounter (&Os_const_counters[0U])
DeclareCounter(Rte_TOutCounter)
#define Rte_TickCounter (&Os_const_counters[1U])
DeclareCounter(Rte_TickCounter)

/* -------- Alarm declaration --------- */
#define Rte_TimeoutAlarm1 (0U)
DeclareAlarm(Rte_TimeoutAlarm1)
#define Rte_TimeoutAlarm10 (1U)
DeclareAlarm(Rte_TimeoutAlarm10)
#define Rte_TimeoutAlarm11 (2U)
DeclareAlarm(Rte_TimeoutAlarm11)
#define Rte_TimeoutAlarm12 (3U)
DeclareAlarm(Rte_TimeoutAlarm12)
#define Rte_TimeoutAlarm13 (4U)
DeclareAlarm(Rte_TimeoutAlarm13)
#define Rte_TimeoutAlarm14 (5U)
DeclareAlarm(Rte_TimeoutAlarm14)
#define Rte_TimeoutAlarm2 (6U)
DeclareAlarm(Rte_TimeoutAlarm2)
#define Rte_TimeoutAlarm3 (7U)
DeclareAlarm(Rte_TimeoutAlarm3)
#define Rte_TimeoutAlarm4 (8U)
DeclareAlarm(Rte_TimeoutAlarm4)
#define Rte_TimeoutAlarm5 (9U)
DeclareAlarm(Rte_TimeoutAlarm5)
#define Rte_TimeoutAlarm6 (10U)
DeclareAlarm(Rte_TimeoutAlarm6)
#define Rte_TimeoutAlarm7 (11U)
DeclareAlarm(Rte_TimeoutAlarm7)
#define Rte_TimeoutAlarm8 (12U)
DeclareAlarm(Rte_TimeoutAlarm8)
#define Rte_TimeoutAlarm9 (13U)
DeclareAlarm(Rte_TimeoutAlarm9)

/* -------- ScheduleTable declaration --------- */
#define Rte_ScheduleTable (&Os_const_scheduletables[0U])
#define OS_DURATION_Rte_ScheduleTable (360U)
DeclareScheduleTable(Rte_ScheduleTable)

/* -------- Tracepoint declarations --------- */

/* -------- TaskTracepoint declarations --------- */

/* -------- Interval declarations --------- */

/* -------- Filtered APIs --------- */
#define Os_LogTracepoint(TpointID,Category) /* never */
#define Os_LogTracepointValue(TpointID,Value,Category) /* never */
#define Os_LogTracepointData(TpointID,Data,Length,Category) /* never */
#define Os_LogTaskTracepoint(TTpointID,Category) /* never */
#define Os_LogTaskTracepointValue(TTpointID,Value,Category) /* never */
#define Os_LogTaskTracepointData(TTpointID,Data,Length,Category) /* never */
#define Os_LogIntervalStart(IntervalID,Category) /* never */
#define Os_LogIntervalStartValue(IntervalID,Value,Category) /* never */
#define Os_LogIntervalStartData(IntervalID,Data,Length,Category) /* never */
#define Os_LogIntervalEnd(IntervalID,Category) /* never */
#define Os_LogIntervalEndValue(IntervalID,Value,Category) /* never */
#define Os_LogIntervalEndData(IntervalID,Data,Length,Category) /* never */
#ifndef OS_TRACE_NAMESPACE_PURE /* [$UKS 1154] */
/* [MISRA 2012 Dir 4.9] */ /*lint -estring(9026, LogTrace*, LogTaskTrace*, LogInterval*) */  #define LogTracepoint(TpointID,Category) Os_LogTracepoint(TpointID,Category)
  #define LogTracepointValue(TpointID,Value,Category) Os_LogTracepointValue(TpointID,Value,Category)
  #define LogTracepointData(TpointID,Data,Length,Category) Os_LogTracepointData(TpointID,Data,Length,Category)
  #define LogTaskTracepoint(TTpointID,Category) Os_LogTaskTracepoint(TTpointID,Category)
  #define LogTaskTracepointValue(TTpointID,Value,Category) Os_LogTaskTracepointValue(TTpointID,Value,Category)
  #define LogTaskTracepointData(TTpointID,Data,Length,Category) Os_LogTaskTracepointData(TTpointID,Data,Length,Category)
  #define LogIntervalStart(IntervalID,Category) Os_LogIntervalStart(IntervalID,Category)
  #define LogIntervalStartValue(IntervalID,Value,Category) Os_LogIntervalStartValue(IntervalID,Value,Category)
  #define LogIntervalStartData(IntervalID,Data,Length,Category) Os_LogIntervalStartData(IntervalID,Data,Length,Category)
  #define LogIntervalEnd(IntervalID,Category) Os_LogIntervalEnd(IntervalID,Category)
  #define LogIntervalEndValue(IntervalID,Value,Category) Os_LogIntervalEndValue(IntervalID,Value,Category)
  #define LogIntervalEndData(IntervalID,Data,Length,Category) Os_LogIntervalEndData(IntervalID,Data,Length,Category)
#endif

#endif /* OS_CFG_H */
