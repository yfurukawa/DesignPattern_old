#ifndef FACADECLIENTTEST_H_
#define FACADECLIENTTEST_H_

#include <gtest/gtest.h>
#include "FacadeClient.h"

class FacadeClientTest : public ::testing::Test {
protected:
	FacadeClient* sut;
	void SetUp();
	void TearDown();

public:
	FacadeClientTest();
	virtual ~FacadeClientTest();

};

#endif
