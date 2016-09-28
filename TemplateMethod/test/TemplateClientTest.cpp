#include "TemplateClientTest.h"

TemplateClientTest::TemplateClientTest() {

}

TemplateClientTest::~TemplateClientTest() {

}

void TemplateClientTest::SetUp() {
	sut = new TemplateClient();
}

void TemplateClientTest::TearDown() {
	delete sut;
}

TEST_F (TemplateClientTest, testNameIsHere_ChangeThis) {
/* Write a test code here. */

}
