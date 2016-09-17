#ifndef NETWORKCONNECTIONTEST_H_
#define NETWORKCONNECTIONTEST_H_

#include <gtest/gtest.h>
#include "NetworkConnection.h"

class NetworkConnectionTest : public ::testing::Test {
protected:
	NetworkConnection* sut;
	void SetUp();
	void TearDown();

public:
	NetworkConnectionTest();
	virtual ~NetworkConnectionTest();

};

#endif
