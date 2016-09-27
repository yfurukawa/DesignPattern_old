#include "ICleaningTest.h"

ICleaningTest::ICleaningTest() {

}

ICleaningTest::~ICleaningTest() {

}

void ICleaningTest::SetUp() {
	sut = new ICleaning();
}

void ICleaningTest::TearDown() {
	delete sut;
}

TEST_F (ICleaningTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
