#include "..//header//factory.hpp"

Base* Factory::parse(char** input, int length) {
	int i = 1;
	Base* root = nullptr;
	stack<Base*> expressions;
	string curr = "";
	string next = "";

	while (i < length) {
		curr = (string)input[i];
		next = (string)input[i+1];

		if (isdigit(stoi(curr)) != 0) { //checks if operand
			root = new Op(stod(curr));
		}
		else if (isdigit(stoi(next)) != 0 && curr == "+") {
			root = new Add(expressions.top(), new Op(stod(curr)));
		}
		else if (isdigit(stoi(next)) != 0 && curr == "-") {
			root = new Sub(expressions.top(), new Op(stod(curr)));
		}
		else if (isdigit(stoi(next)) != 0 && curr == "*") {
			root = new Mult(expressions.top(), new Op(stod(curr)));
		}
		else if (isdigit(stoi(next)) != 0 && curr == "/") {
			root = new Div(expressions.top(), new Op(stod(curr)));
		}
		else if (isdigit(stoi(next)) != 0 && curr == "**") {
			root = new Pow(expressions.top(), new Op(stod(curr)));
		}
		else {
			cout << "ERROR!" << endl;
			delete root;
			return nullptr;
		}

		expressions.push(root);
		++i;
	}
	
	int size = expressions.size();
	for (int j = 0; j < size; ++j) {
		expressions.pop();
	}
	return root;
}
