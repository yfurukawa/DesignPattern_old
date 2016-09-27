#ifndef ICLEANINGTEST_H_
#define ICLEANINGTEST_H_

#include <gtest/gtest.h>
#include "ICleaning.h"

class ICleaningTest : public ::testing::Test {
protected:
	ICleaning* sut;
	void SetUp();
	void TearDown();

public:
	ICleaningTest();
	virtual ~ICleaningTest();

};

#endif
