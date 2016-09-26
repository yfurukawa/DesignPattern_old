#include "WorkerCTest.h"

WorkerCTest::WorkerCTest() {

}

WorkerCTest::~WorkerCTest() {

}

void WorkerCTest::SetUp() {
	sut = new WorkerC();
}

void WorkerCTest::TearDown() {
	delete sut;
}

TEST_F (WorkerCTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
