#ifndef __FACTORY_HPP__
#define __FACTORY_HPP__

#include "add.hpp"
#include "base.hpp"
#include "div.hpp"
#include "mult.hpp"
#include "op.hpp"
#include "pow.hpp"
#include "rand.hpp"
#include "sub.hpp"

#include <stack>
#include "ctype.h"

using namespace std;

class Factory {
    public:
	Fact() {}
	Base* parse (char** input, int length); 
};

#endif
