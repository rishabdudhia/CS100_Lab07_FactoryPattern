#include <iostream>

#include "../header/base.hpp"
#include "../header/add.hpp"
#include "../header/pow.hpp"
#include "../header/op.hpp"
#include "../header/sub.hpp"
#include "../header/mult.hpp"
#include "../header/div.hpp"
#include "../header/rand.hpp"
#include "../header/factory.hpp"

int main(int argc, char** argv) {
	Factory example;
	
	Base* outcome = example.parse(argv, argc);
	if(outcome){
		cout << outcome->stringify() << " = " << outcome->evaluate();
		cout << endl;	
	}
	delete outcome;

return 0;
}
