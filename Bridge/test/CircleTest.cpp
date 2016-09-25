#include "CircleTest.h"

CircleTest::CircleTest() {

}

CircleTest::~CircleTest() {

}

void CircleTest::SetUp() {
	sut = new Circle();
}

void CircleTest::TearDown() {
	delete sut;
}

TEST_F (CircleTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
