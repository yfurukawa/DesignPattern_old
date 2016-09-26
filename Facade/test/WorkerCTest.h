#ifndef WORKERCTEST_H_
#define WORKERCTEST_H_

#include <gtest/gtest.h>
#include "WorkerC.h"

class WorkerCTest : public ::testing::Test {
protected:
	WorkerC* sut;
	void SetUp();
	void TearDown();

public:
	WorkerCTest();
	virtual ~WorkerCTest();

};

#endif
