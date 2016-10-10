#ifndef GAUGELAPTEST_H_
#define GAUGELAPTEST_H_

#include <gtest/gtest.h>
#include "GaugeLap.h"

class GaugeLapTest : public ::testing::Test {
protected:
	GaugeLap* sut;
	void SetUp();
	void TearDown();

public:
	GaugeLapTest();
	virtual ~GaugeLapTest();

};

#endif
