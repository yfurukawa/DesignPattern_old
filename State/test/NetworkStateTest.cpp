#include "NetworkStateTest.h"

NetworkStateTest::NetworkStateTest() {

}

NetworkStateTest::~NetworkStateTest() {

}

void NetworkStateTest::SetUp() {
	sut = new NetworkState();
}

void NetworkStateTest::TearDown() {
	delete sut;
}

TEST_F (NetworkStateTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
