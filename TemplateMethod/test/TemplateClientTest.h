#ifndef TEMPLATECLIENTTEST_H_
#define TEMPLATECLIENTTEST_H_

#include <gtest/gtest.h>
#include "TemplateClient.h"

class TemplateClientTest : public ::testing::Test {
protected:
	TemplateClient* sut;
	void SetUp();
	void TearDown();

public:
	TemplateClientTest();
	virtual ~TemplateClientTest();

};

#endif
