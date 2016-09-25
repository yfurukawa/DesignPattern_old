#include "ShapeTest.h"

ShapeTest::ShapeTest() {

}

ShapeTest::~ShapeTest() {

}

void ShapeTest::SetUp() {
	sut = new Shape();
}

void ShapeTest::TearDown() {
	delete sut;
}

TEST_F (ShapeTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
