#ifndef EXPRESSION_H
#define EXPRESSION_H

/* A Node in our tree. */
class ExpressionNode {
	public:

	virtual int evaluate()=0;
};

// Leaf Nodes (Direct Values)

/* An IntNode represents just an actual integer (like the number 5)*/
class IntNode: public ExpressionNode {
	private:
		int value;

	public:
		IntNode(int _value);
		virtual int evaluate();
};

// Expression Nodes have 2 children and evaluate to a value based on the expression they represent.

class TwoChildExpressionNode: public ExpressionNode {
	protected:
		ExpressionNode* leftChild;
		ExpressionNode* rightChild;

		TwoChildExpressionNode() {}

		TwoChildExpressionNode(ExpressionNode* left, ExpressionNode* right);

	public:
		virtual int evaluate()=0; // when a method = 0, it must be defined by subclasses
};

// Define specific Expression Nodes with 2 children

/*
	The following line of code
		class PlusNode: public TwoChildExpressionNode
	means that this class is called PlusNode and it inherits the methods and members of TwoChildExpressionNode.

	For more information, look at resources about class inheritance.
*/
class PlusNode: public TwoChildExpressionNode {
	public:
		PlusNode(ExpressionNode* left, ExpressionNode* right);
		virtual int evaluate();
};

class MinusNode: public TwoChildExpressionNode {
	public:
		MinusNode(ExpressionNode* left, ExpressionNode* right);
		virtual int evaluate();
};

class MultiplyNode: public TwoChildExpressionNode {
	public:
		MultiplyNode(ExpressionNode* left, ExpressionNode* right);
		virtual int evaluate();
};

class DivideNode: public TwoChildExpressionNode {
	public:
		DivideNode(ExpressionNode* left, ExpressionNode* right);
		virtual int evaluate();
};

class ModNode: public TwoChildExpressionNode {
	public:
		ModNode(ExpressionNode* left, ExpressionNode* right);
		virtual int evaluate();
};

class PowNode: public TwoChildExpressionNode {
	public:
		PowNode(ExpressionNode* left, ExpressionNode* right);
		virtual int evaluate();
};

// Define Expression Nodes for those with 1 child

class OneChildExpressionNode: public ExpressionNode {
	protected:
		ExpressionNode* child;

		OneChildExpressionNode() {}

		OneChildExpressionNode(ExpressionNode* e);

	public:
		virtual int evaluate()=0;
};

// Define specific Expression Nodes with 1 child

class NegationNode: public OneChildExpressionNode {
	public:
		NegationNode(ExpressionNode* e);

		virtual int evaluate();
};

class FactorialNode: public OneChildExpressionNode {
	public:
		FactorialNode(ExpressionNode* e);

		virtual int evaluate();
};

#endif