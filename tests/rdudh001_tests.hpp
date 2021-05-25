#ifndef __RDUDH001_HPP__
#define __RDUDH001_HPP__

#include "../header/base.hpp"
#include "../header/factory.hpp"

TEST(TestsRdudh001, SimpleDiv) {
        Factory test;
	char* args[] = {"./calculator", "6", "/", "3"};
	Base* op = test.parse(args,4);
	
	EXPECT_DOUBLE_EQ(op->evaluate(), 2);

	delete op;
}

TEST(TestsRdudh001, AddThenDivide) {
        Factory test;
        char* args[] = {"./calculator", "6", "+", "2", "/", "4"};
        Base* op = test.parse(args,6);

        EXPECT_DOUBLE_EQ(op->evaluate(), 2);

        delete op;
}

TEST(TestsRdudh001, DivThenSub) {
        Factory test;
        char* args[] = {"./calculator", "6", "/", "3", "-", "-8"};
        Base* op = test.parse(args,6);

        EXPECT_DOUBLE_EQ(op->evaluate(), 10);

        delete op;
}

TEST(TestsRdudh001, MultThenDivide) {
        Factory test;
        char* args[] = {"./calculator", "6", "*", "2", "/", "4"};
        Base* op = test.parse(args,6);

        EXPECT_DOUBLE_EQ(op->evaluate(), 3);

        delete op;
}

TEST(TestsRdudh001, SimplePow) {
        Factory test;
        char* args[] = {"./calculator", "6", "**", "2"};
        Base* op = test.parse(args,4);

        EXPECT_DOUBLE_EQ(op->evaluate(), 36);

        delete op;
}

TEST(TestsRdudh001, PowThenSub) {
        Factory test;
        char* args[] = {"./calculator", "6", "**", "2", "-", "3.5"};
        Base* op = test.parse(args,6);

        EXPECT_DOUBLE_EQ(op->evaluate(), 32.5);

        delete op;
}
TEST(TestsRdudh001, PowToMult) {
        Factory test;
        char* args[] = {"./calculator", "6", "**", "2", "*", ".25"};
        Base* op = test.parse(args,6);

        EXPECT_DOUBLE_EQ(op->evaluate(), 9);

        delete op;
}

TEST(TestsRdudh001, Long) {
        Factory test;
        char* args[] = {"./calculator", "6", "**", "2", "/", "9", "+", "8.4"};
        Base* op = test.parse(args,8);

        EXPECT_DOUBLE_EQ(op->evaluate(), 12.4);

        delete op;
}


#endif
