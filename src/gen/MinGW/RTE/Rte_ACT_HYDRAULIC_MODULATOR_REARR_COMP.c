/** @file     Rte_ACT_HYDRAULIC_MODULATOR_REARR_COMP.c
  *
  * @brief    RTE Sample SWC implementation skeleton file
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS GmbH  RTA-RTE v5.10.0  (R4.0 backend version: v7.10.4 (Build 52732))
  */

#include "Rte_ACT_HYDRAULIC_MODULATOR_REARR_COMP.h"

/* --------------------------------------------------------------------------- */
/* RTE Event: /Actuators/ACT_HYDRAULIC_MODULATOR_REARR_COMP/IB_HM_RR/DataReceivedEvent_0 */

FUNC(void, ACT_HYDRAULIC_MODULATOR_REARR_COMP_CODE) RE_ACT_RR_Data_Recev_func(void)
{
	int mode = Rte_DRead_ACT_HM_RR_Recv_modedata();

	if (mode == 0) {
		Rte_Call_ACT_HYDRAULIC_MODULATOR_REARR_COMP_ACT_HM_RR_Client_set_E_op(0);
	} else if (mode == 1) {
		Rte_Call_ACT_HYDRAULIC_MODULATOR_REARR_COMP_ACT_HM_RR_Client_set_E_op(15); //abs1, 15V
	} else if (mode == 2) {
		Rte_Call_ACT_HYDRAULIC_MODULATOR_REARR_COMP_ACT_HM_RR_Client_set_E_op(30); //abs2, 30V
	}
}

