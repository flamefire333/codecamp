#include "expression.h"

IntNode::IntNode(int _value) {
	this->value = _value;
}

int IntNode::evaluate() {
	return this->value;
}

TwoChildExpressionNode::TwoChildExpressionNode (ExpressionNode* left, ExpressionNode* right) {
	this->leftChild = left;
	this->rightChild = right;
}

PlusNode::PlusNode(ExpressionNode* left, ExpressionNode* right) {}

int PlusNode::evaluate() {
	// Should return the sum of the two children
	return 0;
}

MinusNode::MinusNode(ExpressionNode* left, ExpressionNode* right) {}

int MinusNode::evaluate() {
	// Should return left minus right
	return 0;
}

MultiplyNode::MultiplyNode(ExpressionNode* left, ExpressionNode* right) {}

int MultiplyNode::evaluate() {
	// Should return the product of the two children
	return 0;
}

DivideNode::DivideNode(ExpressionNode* left, ExpressionNode* right) {}

int DivideNode::evaluate() {
	// Should return the left divided by right
	return 0;
}

ModNode::ModNode(ExpressionNode* left, ExpressionNode* right) {}

int ModNode::evaluate() {
	// Should return left modulo right (if you don't know what mod is look up the C++ mod operator)
	return 0;
}

PowNode::PowNode(ExpressionNode* left, ExpressionNode* right) {}

int PowNode::evaluate() {
	// should return left raised to the power of right
	return 0;
}

OneChildExpressionNode::OneChildExpressionNode(ExpressionNode* e) {
			this->child = e;
}

NegationNode::NegationNode(ExpressionNode* e) {}

int NegationNode::evaluate() {
	// Should return the negation of the child
	// (example: the negation of 1 is -1, the negation of -2 is 2)
	return 0;
}

FactorialNode::FactorialNode(ExpressionNode* e) {}

int FactorialNode::evaluate() {
	// Should return the factorial of the child
	return 0;
}