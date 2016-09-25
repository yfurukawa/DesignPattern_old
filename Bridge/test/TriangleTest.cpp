#include "TriangleTest.h"

TriangleTest::TriangleTest() {

}

TriangleTest::~TriangleTest() {

}

void TriangleTest::SetUp() {
	sut = new Triangle();
}

void TriangleTest::TearDown() {
	delete sut;
}

TEST_F (TriangleTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
