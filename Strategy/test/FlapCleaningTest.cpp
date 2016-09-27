#include "FlapCleaningTest.h"

FlapCleaningTest::FlapCleaningTest() {

}

FlapCleaningTest::~FlapCleaningTest() {

}

void FlapCleaningTest::SetUp() {
	sut = new FlapCleaning();
}

void FlapCleaningTest::TearDown() {
	delete sut;
}

TEST_F (FlapCleaningTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
