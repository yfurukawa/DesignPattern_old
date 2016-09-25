#ifndef CLIENTTEST_H_
#define CLIENTTEST_H_

#include <gtest/gtest.h>

#include "../src/BridgeClient.h"

class BridgeClientTest : public ::testing::Test {
protected:
	BridgeClient* sut;
	void SetUp();
	void TearDown();

public:
	BridgeClientTest();
	virtual ~BridgeClientTest();

};

#endif
