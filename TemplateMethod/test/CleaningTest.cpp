#include "CleaningTest.h"

CleaningTest::CleaningTest() {

}

CleaningTest::~CleaningTest() {

}

void CleaningTest::SetUp() {
	sut = new Cleaning();
}

void CleaningTest::TearDown() {
	delete sut;
}

TEST_F (CleaningTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
