#ifndef SINGLETONTEST_H_
#define SINGLETONTEST_H_

#include <gtest/gtest.h>
#include "Singleton.h"

class SingletonTest : public ::testing::Test {
protected:
	Singleton* sut;
	void SetUp();
	void TearDown();

public:
	SingletonTest();
	virtual ~SingletonTest();

};

#endif
