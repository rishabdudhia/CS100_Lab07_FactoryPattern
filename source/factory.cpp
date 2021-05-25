#include "..//header//factory.hpp"

Base* Factory::parse(char** input, int length) {
	int i = 0;
	Base* root = nullptr;
	stack<Base*> expressions;
	string curr = "";
	string next = "";

	while (i < length) {
		curr = (string)input[i];
		next = (string)input[i+1];

		if (isdigit(curr) != 0) { //checks if operand
			root = new Op(stod(curr));
		}
		else if (isdigit(next) && curr == "+") {
			root = new Add(
