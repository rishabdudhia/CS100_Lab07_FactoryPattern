#ifndef __RDUDH001_HPP__
#define __RDUDH001_HPP__

#include "../header/base.hpp"
#include "../header/factory.hpp"

TEST(TestsRdudh001, SimpleDiv) {
	Factory test;
	char* args[3] = {"6", "/", "3"};
	Base* op = test.parse(args,3);
	
	EXPECT_DOUBLE_EQ(op->evaluate(), 2);

	delete op;
}

#endif
