#ifndef __FACTORY_TESTS_HPP__
#define __FACTORY_TESTS_HPP__


#include "../header/factory.hpp"
#include "../header/base.hpp"

TEST(FactoryTest, Add_int) {
        Factory test;
	char* args[]={"./calculator", "5", "+", "3"};
        Base* temp = Factory().parse(args, 4);
        EXPECT_DOUBLE_EQ(temp->evaluate(), 8);	
	delete temp;
}

TEST(FactoryTest, Add_double) {
        Factory test;
        char* args[]={"./calculator", "2.5", "+", "3.5"};
        Base* temp = Factory().parse(args, 4);
        EXPECT_DOUBLE_EQ(temp->evaluate(), 6);     
        delete temp;
}

TEST(FactoryTest, Add_first_neg) {
        Factory test;
        char* args[]={"./calculator", "-5", "+", "3"};
        Base* temp = Factory().parse(args, 4);
        EXPECT_DOUBLE_EQ(temp->evaluate(), -2);     
        delete temp;
}

TEST(FactoryTest, Add_second_neg) {
        Factory test;
        char* args[]={"./calculator", "5", "+", "-3"};
        Base* temp = Factory().parse(args, 4);
        EXPECT_DOUBLE_EQ(temp->evaluate(), 2);
        delete temp;
}

TEST(FactoryTest, Sub_ints) {
        Factory test;
        char* args[]={"./calculator", "5", "-", "2"};
        Base* temp = Factory().parse(args, 4);
        EXPECT_DOUBLE_EQ(temp->evaluate(), 3);
        delete temp;
}

TEST(FactoryTest, Sub_double) {
        Factory test;
        char* args[]={"./calculator", "7.5", "-", "2"};
        Base* temp = Factory().parse(args, 4);
        EXPECT_DOUBLE_EQ(temp->evaluate(), 5.5);
        delete temp;
}

TEST(FactoryTest, Sub_neg) {
        Factory test;
        char* args[]={"./calculator", "-5", "-", "2"};
        Base* temp = Factory().parse(args, 4);
        EXPECT_DOUBLE_EQ(temp->evaluate(), -7);
        delete temp;
}

TEST(FactoryTest, Mult_int) {
        Factory test;
        char* args[]={"./calculator", "5", "*", "2"};
        Base* temp = Factory().parse(args, 4);
        EXPECT_DOUBLE_EQ(temp->evaluate(), 10);
        delete temp;
}

TEST(FactoryTest, Mult_double) {
        Factory test;
        char* args[]={"./calculator", "2.5", "*", "5.5"};
        Base* temp = Factory().parse(args, 4);
        EXPECT_DOUBLE_EQ(temp->evaluate(), 13.75);
        delete temp;
}

TEST(FactoryTest, Mult_two_neg) {
        Factory test;
        char* args[]={"./calculator", "-5", "*", "-5"};
        Base* temp = Factory().parse(args, 4);
        EXPECT_DOUBLE_EQ(temp->evaluate(), 25);
        delete temp;
}

TEST(FactoryTest, Mult_one_neg) {
        Factory test;
        char* args[]={"./calculator", "2", "*", "-5"};
        Base* temp = Factory().parse(args, 4);
        EXPECT_DOUBLE_EQ(temp->evaluate(), -10);
        delete temp;
}

TEST(FactoryTest, Sub_and_Add_int) {
        Factory test;
        char* args[]={"./calculator", "2", "-", "5", "+", "3"};
        Base* temp = Factory().parse(args, 6);
        EXPECT_DOUBLE_EQ(temp->evaluate(), 0);
        delete temp;
}

TEST(FactoryTest, pos_Sub_and_Add_int) {
        Factory test;
        char* args[]={"./calculator", "7", "-", "5", "+", "3"};
        Base* temp = Factory().parse(args, 6);
        EXPECT_DOUBLE_EQ(temp->evaluate(), 5);
        delete temp;
}

#endif
