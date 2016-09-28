#include "DigitalLapTest.h"

DigitalLapTest::DigitalLapTest() {

}

DigitalLapTest::~DigitalLapTest() {

}

void DigitalLapTest::SetUp() {
	sut = new DigitalLap();
}

void DigitalLapTest::TearDown() {
	delete sut;
}

TEST_F (DigitalLapTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
