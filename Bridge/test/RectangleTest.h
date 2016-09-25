#ifndef RECTANGLETEST_H_
#define RECTANGLETEST_H_

#include <gtest/gtest.h>
#include "Rectangle.h"

class RectangleTest : public ::testing::Test {
protected:
	Rectangle* sut;
	void SetUp();
	void TearDown();

public:
	RectangleTest();
	virtual ~RectangleTest();

};

#endif
