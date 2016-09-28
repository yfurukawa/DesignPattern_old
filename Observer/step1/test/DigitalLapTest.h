#ifndef DIGITALLAPTEST_H_
#define DIGITALLAPTEST_H_

#include <gtest/gtest.h>
#include "DigitalLap.h"

class DigitalLapTest : public ::testing::Test {
protected:
	DigitalLap* sut;
	void SetUp();
	void TearDown();

public:
	DigitalLapTest();
	virtual ~DigitalLapTest();

};

#endif
