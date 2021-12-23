#include "expression.cpp"
#include <iostream>

int main() {
	auto nodeFive = IntNode(5);
	auto nodeSix = IntNode(6);
	std::cout << PlusNode(&nodeFive, &nodeSix).evaluate() << "\n";
	auto nodeOne = IntNode(1);
	auto nodeThree = IntNode(3);
	std::cout << PlusNode(&nodeOne, &nodeThree).evaluate() << "\n";
	auto nodeSeventeen = IntNode(17);
	auto nodeThirtyFour = IntNode(34);
	std::cout << PlusNode(&nodeSeventeen, &nodeThirtyFour).evaluate() << "\n";
}
