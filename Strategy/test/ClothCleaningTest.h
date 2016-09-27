#ifndef CLOTHCLEANINGTEST_H_
#define CLOTHCLEANINGTEST_H_

#include <gtest/gtest.h>
#include "ClothCleaning.h"

class ClothCleaningTest : public ::testing::Test {
protected:
	ClothCleaning* sut;
	void SetUp();
	void TearDown();

public:
	ClothCleaningTest();
	virtual ~ClothCleaningTest();

};

#endif
