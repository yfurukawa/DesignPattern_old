#include "StopWatchFormTest.h"

StopWatchFormTest::StopWatchFormTest() {

}

StopWatchFormTest::~StopWatchFormTest() {

}

void StopWatchFormTest::SetUp() {
	sut = new StopWatchForm();
}

void StopWatchFormTest::TearDown() {
	delete sut;
}

TEST_F (StopWatchFormTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
