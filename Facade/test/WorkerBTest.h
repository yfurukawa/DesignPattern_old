#ifndef WORKERBTEST_H_
#define WORKERBTEST_H_

#include <gtest/gtest.h>
#include "WorkerB.h"

class WorkerBTest : public ::testing::Test {
protected:
	WorkerB* sut;
	void SetUp();
	void TearDown();

public:
	WorkerBTest();
	virtual ~WorkerBTest();

};

#endif
