#ifndef STOPWATCHARGSTEST_H_
#define STOPWATCHARGSTEST_H_

#include <gtest/gtest.h>
#include "StopWatchArgs.h"

class StopWatchArgsTest : public ::testing::Test {
protected:
	StopWatchArgs* sut;
	void SetUp();
	void TearDown();

public:
	StopWatchArgsTest();
	virtual ~StopWatchArgsTest();

};

#endif
