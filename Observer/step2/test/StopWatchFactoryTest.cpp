#include "StopWatchFactoryTest.h"

StopWatchFactoryTest::StopWatchFactoryTest() {

}

StopWatchFactoryTest::~StopWatchFactoryTest() {

}

void StopWatchFactoryTest::SetUp() {
	sut = new StopWatchFactory();
}

void StopWatchFactoryTest::TearDown() {
	delete sut;
}

TEST_F (StopWatchFactoryTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
