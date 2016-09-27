#include "StrategyClientTest.h"

StrategyClientTest::StrategyClientTest() {

}

StrategyClientTest::~StrategyClientTest() {

}

void StrategyClientTest::SetUp() {
	sut = new StrategyClient();
}

void StrategyClientTest::TearDown() {
	delete sut;
}

TEST_F (StrategyClientTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
