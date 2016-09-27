#include "WaxCleaningTest.h"

WaxCleaningTest::WaxCleaningTest() {

}

WaxCleaningTest::~WaxCleaningTest() {

}

void WaxCleaningTest::SetUp() {
	sut = new WaxCleaning();
}

void WaxCleaningTest::TearDown() {
	delete sut;
}

TEST_F (WaxCleaningTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
