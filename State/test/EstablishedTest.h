#ifndef ESTABLISHEDTEST_H_
#define ESTABLISHEDTEST_H_

#include <gtest/gtest.h>
#include "Established.h"

class EstablishedTest : public ::testing::Test {
protected:
	Established* sut;
	void SetUp();
	void TearDown();

public:
	EstablishedTest();
	virtual ~EstablishedTest();

};

#endif
