#include "ClothCleaningTest.h"

ClothCleaningTest::ClothCleaningTest() {

}

ClothCleaningTest::~ClothCleaningTest() {

}

void ClothCleaningTest::SetUp() {
	sut = new ClothCleaning();
}

void ClothCleaningTest::TearDown() {
	delete sut;
}

TEST_F (ClothCleaningTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
