#ifndef STOPWATCHFACTORYTEST_H_
#define STOPWATCHFACTORYTEST_H_

#include <gtest/gtest.h>
#include "StopWatchFactory.h"

class StopWatchFactoryTest : public ::testing::Test {
protected:
	StopWatchFactory* sut;
	void SetUp();
	void TearDown();

public:
	StopWatchFactoryTest();
	virtual ~StopWatchFactoryTest();

};

#endif
