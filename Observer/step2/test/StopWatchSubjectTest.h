#ifndef STOPWATCHSUBJECTTEST_H_
#define STOPWATCHSUBJECTTEST_H_

#include <gtest/gtest.h>
#include "StopWatchSubject.h"

class StopWatchSubjectTest : public ::testing::Test {
protected:
	StopWatchSubject* sut;
	void SetUp();
	void TearDown();

public:
	StopWatchSubjectTest();
	virtual ~StopWatchSubjectTest();

};

#endif
