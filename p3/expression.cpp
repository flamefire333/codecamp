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

PlusNode::PlusNode(ExpressionNode* left, ExpressionNode* right): TwoChildExpressionNode(left, right) {}

int PlusNode::evaluate() {
	// Should return the sum of the two children
	return this->leftChild->evaluate() + this->rightChild->evaluate();
}

MinusNode::MinusNode(ExpressionNode* left, ExpressionNode* right): TwoChildExpressionNode(left, right) {}

int MinusNode::evaluate() {
	// Should return left minus right
	return this->leftChild->evaluate() - this->rightChild->evaluate();
}

MultiplyNode::MultiplyNode(ExpressionNode* left, ExpressionNode* right): TwoChildExpressionNode(left, right) {}

int MultiplyNode::evaluate() {
	// Should return the product of the two children
	return this->leftChild->evaluate() * this->rightChild->evaluate();
}

DivideNode::DivideNode(ExpressionNode* left, ExpressionNode* right): TwoChildExpressionNode(left, right) {}

int DivideNode::evaluate() {
	// Should return the left divided by right
	return this->leftChild->evaluate() / this->rightChild->evaluate();
}

ModNode::ModNode(ExpressionNode* left, ExpressionNode* right): TwoChildExpressionNode(left, right) {}

int ModNode::evaluate() {
	// Should return left modulo right (if you don't know what mod is look up the C++ mod operator)
	return this->leftChild->evaluate() % this->rightChild->evaluate();
}

PowNode::PowNode(ExpressionNode* left, ExpressionNode* right): TwoChildExpressionNode(left, right) {}

int PowNode::evaluate() {
	// should return left raised to the power of right
	int ret = 1;
	int base = this->leftChild->evaluate();
	int power = this->rightChild->evaluate();
	for(int i = 0; i < power; i++) {
		ret *= base;
	}
	return ret;
}

OneChildExpressionNode::OneChildExpressionNode(ExpressionNode* e) {
			this->child = e;
}

NegationNode::NegationNode(ExpressionNode* e): OneChildExpressionNode(e) {}

int NegationNode::evaluate() {
	// Should return the negation of the child
	// (example: the negation of 1 is -1, the negation of -2 is 2)
	return -this->child->evaluate();
}

FactorialNode::FactorialNode(ExpressionNode* e): OneChildExpressionNode(e) {}

int FactorialNode::evaluate() {
	// Should return the factorial of the child
	int n = this->child->evaluate();
	int ret = 1;
	for(int i = 1; i <= n; i++) {
		ret *= i;
	}
	return ret;
}