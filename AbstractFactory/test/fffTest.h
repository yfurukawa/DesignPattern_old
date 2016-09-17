#ifndef FFFTEST_H_
#define FFFTEST_H_

#include <gtest/gtest.h>
#include "fff.h"

class fffTest : public ::testing::Test {
protected:
	fff* sut;
	void SetUp();
	void TearDown();

public:
	fffTest();
	virtual ~fffTest();

};

#endif
