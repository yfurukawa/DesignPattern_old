#include "PaintTest.h"

PaintTest::PaintTest() {

}

PaintTest::~PaintTest() {

}

void PaintTest::SetUp() {
	sut = new Paint();
}

void PaintTest::TearDown() {
	delete sut;
}

TEST_F (PaintTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
