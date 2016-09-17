#include "TimeoutTest.h"

TimeoutTest::TimeoutTest() {

}

TimeoutTest::~TimeoutTest() {

}

void TimeoutTest::SetUp() {
	sut = new Timeout();
}

void TimeoutTest::TearDown() {
	delete sut;
}

TEST_F (TimeoutTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
