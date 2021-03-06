#include "expression.h"
#include <iostream>

int main() {
	auto nodeFive = IntNode(5);
	auto nodeSix = IntNode(6);
	std::cout << MinusNode(&nodeFive, &nodeSix).evaluate() << "\n";
	auto nodeOne = IntNode(1);
	auto nodeThree = IntNode(3);
	std::cout << MinusNode(&nodeOne, &nodeThree).evaluate() << "\n";
	auto nodeSeventeen = IntNode(17);
	auto nodeThirtyFour = IntNode(34);
	std::cout << MinusNode(&nodeSeventeen, &nodeThirtyFour).evaluate() << "\n";
}
