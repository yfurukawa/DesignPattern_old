#include "IStopWatchObserverTest.h"

IStopWatchObserverTest::IStopWatchObserverTest() {

}

IStopWatchObserverTest::~IStopWatchObserverTest() {

}

void IStopWatchObserverTest::SetUp() {
	sut = new IStopWatchObserver();
}

void IStopWatchObserverTest::TearDown() {
	delete sut;
}

TEST_F (IStopWatchObserverTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
