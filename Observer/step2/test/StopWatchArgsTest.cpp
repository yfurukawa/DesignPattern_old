#include "StopWatchArgsTest.h"

StopWatchArgsTest::StopWatchArgsTest() {

}

StopWatchArgsTest::~StopWatchArgsTest() {

}

void StopWatchArgsTest::SetUp() {
	sut = new StopWatchArgs();
}

void StopWatchArgsTest::TearDown() {
	delete sut;
}

TEST_F (StopWatchArgsTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
