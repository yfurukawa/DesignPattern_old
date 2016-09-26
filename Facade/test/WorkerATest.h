#ifndef WORKERATEST_H_
#define WORKERATEST_H_

#include <gtest/gtest.h>
#include "WorkerA.h"

class WorkerATest : public ::testing::Test {
protected:
	WorkerA* sut;
	void SetUp();
	void TearDown();

public:
	WorkerATest();
	virtual ~WorkerATest();

};

#endif
