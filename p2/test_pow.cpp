#include "expression.cpp"
#include <iostream>

int main() {
	auto nodeA = IntNode(2);
	auto nodeB = IntNode(10);
	std::cout << PowNode(&nodeA, &nodeB).evaluate() << "\n";
	auto nodeC = IntNode(3);
	auto nodeD = IntNode(4);
	std::cout << PowNode(&nodeC, &nodeD).evaluate() << "\n";
	auto nodeE = IntNode(333);
	auto nodeF = IntNode(0);
	std::cout << PowNode(&nodeE, &nodeF).evaluate() << "\n";
}
