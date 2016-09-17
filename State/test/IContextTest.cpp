#include "IContextTest.h"

IContextTest::IContextTest() {

}

IContextTest::~IContextTest() {

}

void IContextTest::SetUp() {
	sut = new IContext();
}

void IContextTest::TearDown() {
	delete sut;
}

TEST_F (IContextTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
