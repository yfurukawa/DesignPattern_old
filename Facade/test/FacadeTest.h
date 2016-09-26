#ifndef FACADETEST_H_
#define FACADETEST_H_

#include <gtest/gtest.h>
#include "Facade.h"

class FacadeTest : public ::testing::Test {
protected:
	Facade* sut;
	void SetUp();
	void TearDown();

public:
	FacadeTest();
	virtual ~FacadeTest();

};

#endif
