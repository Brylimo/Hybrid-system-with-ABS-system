/** \file         StartVecu.h
  *
  * \brief        Entry Point To start vECU when created as a DLL for ISOLAR-EVE ( target platform: VRTA-ux/VRTA-win )
  *
  * [$crn:2007:dox
  * \copyright Copyright 2020 ETAS GmbH
  * $]
  *
  * \note         PLATFORM DEPENDENT [yes/no]: yes
  *
  * \note         TO BE CHANGED BY USER [yes/no]: no
  *
  */

#ifndef STARTVECU_H_
#define STARTVECU_H_

#ifndef unix
/* does not work for RTPC or WSL */

#ifdef VECU_FMU_EXPORTS
#define VECU_FMU_API __declspec(dllexport)
#else
#define VECU_FMU_API __declspec(dllimport)
#endif

#ifdef __cplusplus
extern "C" {
#endif

extern VECU_FMU_API void startVecu(int argc, const char **argv);

#ifdef __cplusplus
}
#endif

#endif /* unix */

#endif /* STARTVECU_H_ */
