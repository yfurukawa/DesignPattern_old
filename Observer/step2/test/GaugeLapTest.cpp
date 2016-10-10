#include "GaugeLapTest.h"

GaugeLapTest::GaugeLapTest() {

}

GaugeLapTest::~GaugeLapTest() {

}

void GaugeLapTest::SetUp() {
	sut = new GaugeLap();
}

void GaugeLapTest::TearDown() {
	delete sut;
}

TEST_F (GaugeLapTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
