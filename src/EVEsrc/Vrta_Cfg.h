/** \file         Vrta_Cfg.h
  *
  * \brief        Target initialization and timing functions for ISOLAR-EVE ( target platform: VRTA-ux/VRTA-win )
  *
  * \copyright    Copyright 2020 ETAS GmbH
  *
  * \note         PLATFORM DEPENDENT [yes/no]: yes
  *
  * \note         TO BE CHANGED BY USER [yes/no]: no
  */

#ifdef __cplusplus
extern "C"{
void vrtaActionHandler(void);
void EnableVrtaFlash ( void (*f) (void));
void EnableVrtaAdc ( void (*f) (void));
void EnableVrtaPwm ( void (*f) (void));
void EnableVrtaPort ( void (*f) (void));
void EnableVrtaIcu ( void (*f) (void));
void EnableVrtaCan ( void (*f) (void));
void EnableVrtaCanTrcv ( void (*f) (void));
}
#endif
