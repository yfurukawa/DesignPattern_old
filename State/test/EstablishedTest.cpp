#include "EstablishedTest.h"

EstablishedTest::EstablishedTest() {

}

EstablishedTest::~EstablishedTest() {

}

void EstablishedTest::SetUp() {
	sut = new Established();
}

void EstablishedTest::TearDown() {
	delete sut;
}

TEST_F (EstablishedTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
