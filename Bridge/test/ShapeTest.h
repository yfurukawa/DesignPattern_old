#ifndef SHAPETEST_H_
#define SHAPETEST_H_

#include <gtest/gtest.h>
#include "Shape.h"

class ShapeTest : public ::testing::Test {
protected:
	Shape* sut;
	void SetUp();
	void TearDown();

public:
	ShapeTest();
	virtual ~ShapeTest();

};

#endif
