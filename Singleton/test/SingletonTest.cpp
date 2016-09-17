#include "SingletonTest.h"

SingletonTest::SingletonTest() {

}

SingletonTest::~SingletonTest() {

}

void SingletonTest::SetUp() {
	sut = new Singleton();
}

void SingletonTest::TearDown() {
	delete sut;
}

TEST_F (SingletonTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
