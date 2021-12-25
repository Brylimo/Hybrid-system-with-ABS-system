/** \file         StartVecu.cpp
  *
  * \brief        ~Entry Point To start vECU when created as a DLL for ISOLAR-EVE ( target platform: VRTA-ux/VRTA-win )
  *
  * [$crn:2007:dox
  * \copyright Copyright 2020 ETAS GmbH
  * $]
  *
  * \note         PLATFORM DEPENDENT [yes/no]: no
  *
  * \note         TO BE CHANGED BY USER [yes/no]: no
  *
  */

#ifndef unix
/* does not work for RTPC or WSL */

#include "vrtaCore.h"
#include "startVecu.h"
#include "vrtaAppMain.h"
#include "vrtaTypes.h"

void startVecu(int argc, const char **argv)
{
	main(( vrtaInt)argc, (const vrtaTextPtr *)argv);
}

#endif /* unix */

