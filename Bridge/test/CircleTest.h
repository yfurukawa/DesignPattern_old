#ifndef CIRCLETEST_H_
#define CIRCLETEST_H_

#include <gtest/gtest.h>
#include "Circle.h"

class CircleTest : public ::testing::Test {
protected:
	Circle* sut;
	void SetUp();
	void TearDown();

public:
	CircleTest();
	virtual ~CircleTest();

};

#endif
