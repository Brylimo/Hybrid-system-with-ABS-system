/** @file     Rte_AccelControlAPP.c
  *
  * @brief    RTE Sample SWC implementation skeleton file
  *
  * @note     AUTOMATICALLY GENERATED FILE! DO NOT EDIT!
  *
  * @note     Generated by ETAS GmbH  RTA-RTE v5.10.0  (R4.0 backend version: v7.10.4 (Build 52732))
  */

#include "Rte_AccelControlAPP.h"
#include "virtualdevices.h"

/* --------------------------------------------------------------------------- */
/* RTE Event: /AComp/AccelControlAPP/IB_AccelControlAPP/ExternalTriggerOccurredEvent_0 */
int motor_on=1;;
FUNC(void, AccelControlAPP_CODE) RE_battary_is_normal_func(void)
{
   motor_on=1;
}

/* --------------------------------------------------------------------------- */
/* RTE Event: /AComp/AccelControlAPP/IB_AccelControlAPP/ExternalTriggerOccurredEvent_1 */

FUNC(void, AccelControlAPP_CODE) RE_battary_is_low_func(void)
{
   motor_on=0;
}

/* --------------------------------------------------------------------------- */
/* RTE Event: /AComp/AccelControlAPP/IB_AccelControlAPP/TimingEvent_0 */

FUNC(void, AccelControlAPP_CODE) RE_Control_func(void)
{
   int accel_power;
   int brake_power=0;
   float speed;
   int gear_mode;


   accel_power = Rte_DRead_R_Accel_accel_value();
   brake_power = Rte_DRead_R_Brake_brake_value();
   speed = Rte_DRead_R_AvgSpeed_avg_speed_data();
   gear_mode = Rte_DRead_R_Gear_gear_value();

   //status_printf("accel : %d, brake : %d, speed : %f, gear : %d\n", accel_power, brake_power, speed, gear_mode);

   int power_set;

   if(gear_mode==0 || gear_mode==3){
     Rte_Write_P_PWM_pwm_data(0);
     Rte_Write_P_EnginePower_powerValue(0);

   }
   else if(gear_mode==1){
     if(brake_power!=0){
       Rte_Write_P_PWM_pwm_data(0);
       Rte_Write_P_EnginePower_powerValue(0);
     }
     else{
       if(2*accel_power>speed){
            power_set = accel_power-speed/2;
            //status_printf("speed, power_set : %d\r\n", speed, power_set);
       }
       else{
            power_set=0;
       }


       if(motor_on==0){
         Rte_Write_P_EnginePower_powerValue(power_set);
         Rte_Write_P_PWM_pwm_data(0);
       }
       else{
          if(power_set == 0) {
             Rte_Write_P_PWM_pwm_data(0);
             Rte_Write_P_EnginePower_powerValue(0);
          }
          else if(speed<=40 && power_set<=30){
            Rte_Write_P_PWM_pwm_data(power_set);
            Rte_Write_P_EnginePower_powerValue(0);
          }
          else if(speed>40 && power_set<=30){
            Rte_Write_P_PWM_pwm_data(0);
            Rte_Write_P_EnginePower_powerValue(power_set);
          }
          else{
            Rte_Write_P_EnginePower_powerValue(power_set);
            Rte_Write_P_PWM_pwm_data(power_set/2);
          }
       }
     }
   }

   else if(gear_mode==2){
        if(brake_power!=0){
          Rte_Write_P_PWM_pwm_data(0);
          Rte_Write_P_EnginePower_powerValue(0);
        }//
        else{
          if(2*accel_power>-speed){
               power_set = -(accel_power+speed/2);
               //status_printf("speed, power_set : %d\r\n", speed, power_set);
          }
          else{
               power_set=0;
          }


          if(motor_on==0){
            Rte_Write_P_EnginePower_powerValue(power_set);
            Rte_Write_P_PWM_pwm_data(0);
          }
          else{
             if(power_set == 0) {
                Rte_Write_P_PWM_pwm_data(0);
                Rte_Write_P_EnginePower_powerValue(0);
             }
             else if(speed>=-40 && -power_set<=30){
               Rte_Write_P_PWM_pwm_data(power_set);
               Rte_Write_P_EnginePower_powerValue(0);
             }
             else if(speed<-40 && -power_set<=30){
               Rte_Write_P_PWM_pwm_data(0);
               Rte_Write_P_EnginePower_powerValue(power_set);
             }
             else{
               Rte_Write_P_EnginePower_powerValue(power_set);
               Rte_Write_P_PWM_pwm_data(power_set/2);
             }
          }
        }
      }

}
