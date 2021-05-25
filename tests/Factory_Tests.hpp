#ifndef __FACTORY_TESTS_HPP__
#define __FACTORY_TESTS_HPP__

#include <cmath>

#include "gtest/gtest.h"
#include "../header/factory.hpp"

TEST(FactoryTest, Add_int) {
        Factory test;
	char *args[]={"5", "+", "3"};
        Base* temp = Factory().parse(args, 3);
        EXPECT_EQ(temp->evaluate(), 8);	
	delete temp;
}

TEST(FactoryTest, Add_double) {
        Factory test;
        char *args[]={"2.5", "+", "3.5"};
        Base* temp = Factory().parse(args, 3);
        EXPECT_EQ(temp->evaluate(), 6);     
        delete temp;
}

TEST(FactoryTest, Add_first_neg) {
        Factory test;
        char *args[]={"-5", "+", "3"};
        Base* temp = Factory().parse(args, 3);
        EXPECT_EQ(temp->evaluate(), -2);     
        delete temp;
}

TEST(FactoryTest, Add_first_neg) {
        Factory test;
        char *args[]={"5", "+", "-3"};
        Base* temp = Factory().parse(args, 3);
        EXPECT_EQ(temp->evaluate(), 2);
        delete temp;
}

TEST(FactoryTest, Sub_ints) {
        Factory test;
        char *args[]={"5", "-", "2"};
        Base* temp = Factory().parse(args, 3);
        EXPECT_EQ(temp->evaluate(), 3);
        delete temp;
}

TEST(FactoryTest, Sub_double) {
        Factory test;
        char *args[]={"7.5", "-", "2"};
        Base* temp = Factory().parse(args, 3);
        EXPECT_EQ(temp->evaluate(), 5.5);
        delete temp;
}

TEST(FactoryTest, Sub_neg) {
        Factory test;
        char *args[]={"-5", "-", "2"};
        Base* temp = Factory().parse(args, 3);
        EXPECT_EQ(temp->evaluate(), -7);
        delete temp;
}

TEST(FactoryTest, Mult_int) {
        Factory test;
        char *args[]={"5", "*", "2"};
        Base* temp = Factory().parse(args, 3);
        EXPECT_EQ(temp->evaluate(), 10);
        delete temp;
}

TEST(FactoryTest, Mult_double) {
        Factory test;
        char *args[]={"2.5", "*", "5.5"};
        Base* temp = Factory().parse(args, 3);
        EXPECT_EQ(temp->evaluate(), 13.75);
        delete temp;
}

TEST(FactoryTest, Mult_two_neg) {
        Factory test;
        char *args[]={"-5", "*", "-5"};
        Base* temp = Factory().parse(args, 3);
        EXPECT_EQ(temp->evaluate(), 25);
        delete temp;
}

TEST(FactoryTest, Mult_two_neg) {
        Factory test;
        char *args[]={"2", "*", "-5"};
        Base* temp = Factory().parse(args, 3);
        EXPECT_EQ(temp->evaluate(), -10);
        delete temp;
}

#endif
