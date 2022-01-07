#include "expression.h"
#include <iostream>

int main() {
	auto nodeFive = IntNode(5);
	auto nodeSix = IntNode(6);
	std::cout << MultiplyNode(&nodeFive, &nodeSix).evaluate() << "\n";
	auto nodeOne = IntNode(1);
	auto nodeThree = IntNode(3);
	std::cout << MultiplyNode(&nodeOne, &nodeThree).evaluate() << "\n";
	auto nodeSeventeen = IntNode(17);
	auto nodeThirtyFour = IntNode(34);
	std::cout << MultiplyNode(&nodeSeventeen, &nodeThirtyFour).evaluate() << "\n";
}
