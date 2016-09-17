#include "fffTest.h"

fffTest::fffTest() {

}

fffTest::~fffTest() {

}

void fffTest::SetUp() {
	sut = new fff();
}

void fffTest::TearDown() {
	delete sut;
}

TEST_F (fffTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
