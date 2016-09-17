#ifndef NETWORKSTATETEST_H_
#define NETWORKSTATETEST_H_

#include <gtest/gtest.h>
#include "NetworkState.h"

class NetworkStateTest : public ::testing::Test {
protected:
	NetworkState* sut;
	void SetUp();
	void TearDown();

public:
	NetworkStateTest();
	virtual ~NetworkStateTest();

};

#endif
