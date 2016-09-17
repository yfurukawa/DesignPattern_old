#ifndef TIMEOUTTEST_H_
#define TIMEOUTTEST_H_

#include <gtest/gtest.h>
#include "Timeout.h"

class TimeoutTest : public ::testing::Test {
protected:
	Timeout* sut;
	void SetUp();
	void TearDown();

public:
	TimeoutTest();
	virtual ~TimeoutTest();

};

#endif
