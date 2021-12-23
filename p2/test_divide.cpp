#include "expression.cpp"
#include <iostream>

int main() {
	auto nodeA = IntNode(300);
	auto nodeB = IntNode(10);
	std::cout << DivideNode(&nodeA, &nodeB).evaluate() << "\n";
	auto nodeC = IntNode(305);
	auto nodeD = IntNode(10);
	std::cout << DivideNode(&nodeC, &nodeD).evaluate() << "\n";
	auto nodeE = IntNode(17);
	auto nodeF = IntNode(2);
	std::cout << DivideNode(&nodeE, &nodeF).evaluate() << "\n";
}
