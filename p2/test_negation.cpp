#include "expression.cpp"
#include <iostream>

int main() {
	auto nodeA = IntNode(300);
	std::cout << NegationNode(&nodeA).evaluate() << "\n";
	auto nodeC = IntNode(-305);
	std::cout << NegationNode(&nodeC).evaluate() << "\n";
	auto nodeE = IntNode(17);
	std::cout << NegationNode(&nodeE).evaluate() << "\n";
}
