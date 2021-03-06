/** @file     Rte_SpeedSen.c
  *
  * @brief    RTE Sample SWC implementation skeleton file
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS GmbH  RTA-RTE v5.10.0  (R4.0 backend version: v7.10.4 (Build 52732))
  */

#include "Rte_SpeedSen.h"
#include "virtualdevices.h"

/* --------------------------------------------------------------------------- */
/* RTE Event: /Sensors/SpeedSen/IB_SpeedSen/SpeedSensorEvnet */

FUNC(void, SpeedSen_CODE) RE_SpeedSen_func(void)
{
	sint16 fr, fl, br, bl;
	Rte_Call_RPort_get_Tire_RPM(&fl, &fr, &bl, &br);

	//1 rpm -> 0.1205km/h
	float bl_speed = (float)bl * 0.1205;
	float br_speed = (float)bl * 0.1205;
	float fl_speed = (float)bl * 0.1205;
	float fr_speed = (float)bl * 0.1205;

	Rte_Write_toApp_PPort_backleft( bl_speed );
	Rte_Write_toApp_PPort_backright( br_speed );
	Rte_Write_toApp_PPort_frontleft( fl_speed );
	Rte_Write_toApp_PPort_frontright( fr_speed );

}

