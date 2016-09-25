#ifndef DRAWPAINTTEST_H_
#define DRAWPAINTTEST_H_

#include <gtest/gtest.h>
#include "DrawPaint.h"

class DrawPaintTest : public ::testing::Test {
protected:
	DrawPaint* sut;
	void SetUp();
	void TearDown();

public:
	DrawPaintTest();
	virtual ~DrawPaintTest();

};

#endif
