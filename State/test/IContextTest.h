#ifndef ICONTEXTTEST_H_
#define ICONTEXTTEST_H_

#include <gtest/gtest.h>
#include "IContext.h"

class IContextTest : public ::testing::Test {
protected:
	IContext* sut;
	void SetUp();
	void TearDown();

public:
	IContextTest();
	virtual ~IContextTest();

};

#endif
