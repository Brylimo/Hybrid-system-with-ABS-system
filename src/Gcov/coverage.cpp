/*********************************************************
 * File:    coverage.cpp
 *
 * Copyright 2020 ETAS GmbH
 *
 *********************************************************/

#include "Os.h"

extern "C" void __gcov_flush(void);

static const unsigned int MAX_COUNT = 50;

static void gcov_flush(void)
{
	#ifdef ENABLE_GCOV_FLUSH
	#warning GCOV CodeCoverage is active - this will significantly slow the vECU execution speed

	unsigned int count = MAX_COUNT;
	while(!vrtaIsAppFinished())
	{
		count--;
		if(0==count)
		{
			count = MAX_COUNT;
			vrtaEnterGlobalUninterruptibleSection();
			__gcov_flush();
			vrtaLeaveGlobalUninterruptibleSection();
		}
		vrtaIsIdle(100);
	}
	#endif
}

class coverage
{
  public:
  coverage() { vrtaSpawnThread(gcov_flush); }
};

static coverage cov;

