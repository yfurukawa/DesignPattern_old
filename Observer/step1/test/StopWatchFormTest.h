#ifndef STOPWATCHFORMTEST_H_
#define STOPWATCHFORMTEST_H_

#include <gtest/gtest.h>
#include "StopWatchForm.h"

class StopWatchFormTest : public ::testing::Test {
protected:
	StopWatchForm* sut;
	void SetUp();
	void TearDown();

public:
	StopWatchFormTest();
	virtual ~StopWatchFormTest();

};

#endif
