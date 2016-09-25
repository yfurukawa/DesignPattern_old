#include "BridgeClientTest.h"

BridgeClientTest::BridgeClientTest() : sut(NULL) {

}

BridgeClientTest::~BridgeClientTest() {

}

void BridgeClientTest::SetUp() {
	sut = new Client();
}

void BridgeClientTest::TearDown() {
	delete sut;
}

TEST_F (BridgeClientTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
