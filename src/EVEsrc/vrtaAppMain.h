/** \file        vrtaAppMain.h
  *
  * \brief        Entry Point to start vECU when created as a DLL for ISOLAR-EVE ( target platform: VRTA-ux/VRTA-win )
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



#ifndef vrtaAppMain_H_
#define vrtaAppMain_H_

#ifndef unix
/* does not work for RTPC or WSL */

extern vrtaInt main(vrtaInt argc, const vrtaTextPtr argv[]);

#endif /* unix */

#endif /* vrtaAppMain_H_ */
