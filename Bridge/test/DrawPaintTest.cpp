#include "DrawPaintTest.h"

DrawPaintTest::DrawPaintTest() {

}

DrawPaintTest::~DrawPaintTest() {

}

void DrawPaintTest::SetUp() {
	sut = new DrawPaint();
}

void DrawPaintTest::TearDown() {
	delete sut;
}

TEST_F (DrawPaintTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
