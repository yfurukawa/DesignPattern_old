#ifndef FILLPAINTTEST_H_
#define FILLPAINTTEST_H_

#include <gtest/gtest.h>
#include "FillPaint.h"

class FillPaintTest : public ::testing::Test {
protected:
	FillPaint* sut;
	void SetUp();
	void TearDown();

public:
	FillPaintTest();
	virtual ~FillPaintTest();

};

#endif
