#include "NetworkConnectionTest.h"

NetworkConnectionTest::NetworkConnectionTest() {

}

NetworkConnectionTest::~NetworkConnectionTest() {

}

void NetworkConnectionTest::SetUp() {
	sut = new NetworkConnection();
}

void NetworkConnectionTest::TearDown() {
	delete sut;
}

TEST_F (NetworkConnectionTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
