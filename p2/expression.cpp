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
		IntNode(int _value) {
			this->value = _value;
		}

		virtual int evaluate() {
			return this->value;
		}
};

// Expression Nodes have 2 children and evaluate to a value based on the expression they represent.

class TwoChildExpressionNode: public ExpressionNode {
	protected:
		ExpressionNode* leftChild;
		ExpressionNode* rightChild;

		TwoChildExpressionNode() {}

		TwoChildExpressionNode(ExpressionNode* left, ExpressionNode* right) {
			this->leftChild = left;
			this->rightChild = right;
		}

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
		PlusNode(ExpressionNode* left, ExpressionNode* right) {}

		virtual int evaluate() {
			// Should return the sum of the two children
			return 0;
		}
};

class MinusNode: public TwoChildExpressionNode {
	public:
		MinusNode(ExpressionNode* left, ExpressionNode* right) {}

		virtual int evaluate() {
			// Should return left minus right
			return 0;
		}
};

class MultiplyNode: public TwoChildExpressionNode {
	public:
		MultiplyNode(ExpressionNode* left, ExpressionNode* right) {}

		virtual int evaluate() {
			// Should return the product of the two children
			return 0;
		}
};

class DivideNode: public TwoChildExpressionNode {
	public:
		DivideNode(ExpressionNode* left, ExpressionNode* right) {}

		virtual int evaluate() {
			// Should return the left divided by right
			return 0;
		}
};

class ModNode: public TwoChildExpressionNode {
	public:
		ModNode(ExpressionNode* left, ExpressionNode* right) {}

		virtual int evaluate() {
			// Should return left modulo right (if you don't know what mod is look up the C++ mod operator)
			return 0;
		}
};

class PowNode: public TwoChildExpressionNode {
	public:
		PowNode(ExpressionNode* left, ExpressionNode* right) {}

		virtual int evaluate() {
			// should return left raised to the power of right
			return 0;
		}
};

// Define Expression Nodes for those with 1 child

class OneChildExpressionNode: public ExpressionNode {
	protected:
		ExpressionNode* child;

		OneChildExpressionNode() {

		}

		OneChildExpressionNode(ExpressionNode* e) {
			this->child = e;
		}

	public:
		virtual int evaluate()=0;
};

// Define specific Expression Nodes with 1 child

class NegationNode: public OneChildExpressionNode {
	public:
		NegationNode(ExpressionNode* e) {}

		virtual int evaluate() {
			// Should return the negation of the child
			// (example: the negation of 1 is -1, the negation of -2 is 2)
			return 0;
		}
};

class FactorialNode: public OneChildExpressionNode {
	public:
		FactorialNode(ExpressionNode* e) {}

		virtual int evaluate() {
			// Should return the factorial of the child
			return 0;
		}
};
