#ifndef ISTOPWATCHOBSERVERTEST_H_
#define ISTOPWATCHOBSERVERTEST_H_

#include <gtest/gtest.h>
#include "IStopWatchObserver.h"

class IStopWatchObserverTest : public ::testing::Test {
protected:
	IStopWatchObserver* sut;
	void SetUp();
	void TearDown();

public:
	IStopWatchObserverTest();
	virtual ~IStopWatchObserverTest();

};

#endif
