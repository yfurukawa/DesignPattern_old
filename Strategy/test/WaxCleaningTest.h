#ifndef WAXCLEANINGTEST_H_
#define WAXCLEANINGTEST_H_

#include <gtest/gtest.h>
#include "WaxCleaning.h"

class WaxCleaningTest : public ::testing::Test {
protected:
	WaxCleaning* sut;
	void SetUp();
	void TearDown();

public:
	WaxCleaningTest();
	virtual ~WaxCleaningTest();

};

#endif
