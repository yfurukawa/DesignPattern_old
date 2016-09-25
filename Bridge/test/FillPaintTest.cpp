#include "FillPaintTest.h"

FillPaintTest::FillPaintTest() {

}

FillPaintTest::~FillPaintTest() {

}

void FillPaintTest::SetUp() {
	sut = new FillPaint();
}

void FillPaintTest::TearDown() {
	delete sut;
}

TEST_F (FillPaintTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
