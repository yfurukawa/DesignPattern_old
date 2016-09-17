#include "InitialTest.h"

InitialTest::InitialTest() {

}

InitialTest::~InitialTest() {

}

void InitialTest::SetUp() {
	sut = new Initial();
}

void InitialTest::TearDown() {
	delete sut;
}

TEST_F (InitialTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
