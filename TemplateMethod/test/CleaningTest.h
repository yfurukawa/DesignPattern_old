#ifndef CLEANINGTEST_H_
#define CLEANINGTEST_H_

#include <gtest/gtest.h>
#include "Cleaning.h"

class CleaningTest : public ::testing::Test {
protected:
	Cleaning* sut;
	void SetUp();
	void TearDown();

public:
	CleaningTest();
	virtual ~CleaningTest();

};

#endif
