#include "FacadeClientTest.h"

FacadeClientTest::FacadeClientTest() {

}

FacadeClientTest::~FacadeClientTest() {

}

void FacadeClientTest::SetUp() {
	sut = new FacadeClient();
}

void FacadeClientTest::TearDown() {
	delete sut;
}

TEST_F (FacadeClientTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
