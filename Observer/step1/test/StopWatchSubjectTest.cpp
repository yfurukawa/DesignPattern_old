#include "StopWatchSubjectTest.h"

StopWatchSubjectTest::StopWatchSubjectTest() {

}

StopWatchSubjectTest::~StopWatchSubjectTest() {

}

void StopWatchSubjectTest::SetUp() {
	sut = new StopWatchSubject();
}

void StopWatchSubjectTest::TearDown() {
	delete sut;
}

TEST_F (StopWatchSubjectTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
