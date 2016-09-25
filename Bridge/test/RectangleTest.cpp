#include "RectangleTest.h"

RectangleTest::RectangleTest() {

}

RectangleTest::~RectangleTest() {

}

void RectangleTest::SetUp() {
	sut = new Rectangle();
}

void RectangleTest::TearDown() {
	delete sut;
}

TEST_F (RectangleTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
