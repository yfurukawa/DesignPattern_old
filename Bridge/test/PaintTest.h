#ifndef PAINTTEST_H_
#define PAINTTEST_H_

#include <gtest/gtest.h>
#include "Paint.h"

class PaintTest : public ::testing::Test {
protected:
	Paint* sut;
	void SetUp();
	void TearDown();

public:
	PaintTest();
	virtual ~PaintTest();

};

#endif
