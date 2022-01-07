#include "expression.h"
#include <iostream>

int main() {
	auto nodeA = IntNode(3);
	std::cout << FactorialNode(&nodeA).evaluate() << "\n";
	auto nodeC = IntNode(5);
	std::cout << FactorialNode(&nodeC).evaluate() << "\n";
	auto nodeE = IntNode(0);
	std::cout << FactorialNode(&nodeE).evaluate() << "\n";
}
