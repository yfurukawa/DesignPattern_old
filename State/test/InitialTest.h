#ifndef INITIALTEST_H_
#define INITIALTEST_H_

#include <gtest/gtest.h>
#include "Initial.h"

class InitialTest : public ::testing::Test {
protected:
	Initial* sut;
	void SetUp();
	void TearDown();

public:
	InitialTest();
	virtual ~InitialTest();

};

#endif
