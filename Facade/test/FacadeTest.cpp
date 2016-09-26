#include "FacadeTest.h"

FacadeTest::FacadeTest() {

}

FacadeTest::~FacadeTest() {

}

void FacadeTest::SetUp() {
	sut = new Facade();
}

void FacadeTest::TearDown() {
	delete sut;
}

TEST_F (FacadeTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
