#include "WorkerATest.h"

WorkerATest::WorkerATest() {

}

WorkerATest::~WorkerATest() {

}

void WorkerATest::SetUp() {
	sut = new WorkerA();
}

void WorkerATest::TearDown() {
	delete sut;
}

TEST_F (WorkerATest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
