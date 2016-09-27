#ifndef FLAPCLEANINGTEST_H_
#define FLAPCLEANINGTEST_H_

#include <gtest/gtest.h>
#include "FlapCleaning.h"

class FlapCleaningTest : public ::testing::Test {
protected:
	FlapCleaning* sut;
	void SetUp();
	void TearDown();

public:
	FlapCleaningTest();
	virtual ~FlapCleaningTest();

};

#endif
