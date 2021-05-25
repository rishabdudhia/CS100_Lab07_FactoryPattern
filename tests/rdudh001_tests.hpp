#ifndef __RDUDH001_HPP__
#define __RDUDH001_HPP__

#include "../header/base.hpp"
#include "../header/add.hpp"
#include "../header/pow.hpp"
#include "../header/op.hpp"
#include "../header/sub.hpp"
#include "../header/mult.hpp"
#include "../header/div.hpp"
#include "../header/rand.hpp"
#include "../header/factory.hpp"

TEST(TestsRdudh001, OnlyOp) {
	Factory test;
	char* args[] = {3};
	Base* op = test.parse(args,1);
	
	EXPECT_DOUBLE_EQ(op->evaluate(), 3);
}

#endif
