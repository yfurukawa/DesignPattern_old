#ifndef TRIANGLETEST_H_
#define TRIANGLETEST_H_

#include <gtest/gtest.h>
#include "Triangle.h"

class TriangleTest : public ::testing::Test {
protected:
	Triangle* sut;
	void SetUp();
	void TearDown();

public:
	TriangleTest();
	virtual ~TriangleTest();

};

#endif
