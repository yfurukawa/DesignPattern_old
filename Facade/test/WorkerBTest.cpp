#include "WorkerBTest.h"

WorkerBTest::WorkerBTest() {

}

WorkerBTest::~WorkerBTest() {

}

void WorkerBTest::SetUp() {
	sut = new WorkerB();
}

void WorkerBTest::TearDown() {
	delete sut;
}

TEST_F (WorkerBTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
