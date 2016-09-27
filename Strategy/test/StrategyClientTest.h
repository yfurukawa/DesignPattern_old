#ifndef STRATEGYCLIENTTEST_H_
#define STRATEGYCLIENTTEST_H_

#include <gtest/gtest.h>
#include "StrategyClient.h"

class StrategyClientTest : public ::testing::Test {
protected:
	StrategyClient* sut;
	void SetUp();
	void TearDown();

public:
	StrategyClientTest();
	virtual ~StrategyClientTest();

};

#endif
