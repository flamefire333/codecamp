#include "parser.h"
#include <string>

ExpressionNode* parseLevel7(std::string e) {
    int value = 0;
    for(int i = 0; i < e.length(); i++) {
        value *= 10;
        value += (e[i] - '0');
    }
    return new IntNode(value);
}

ExpressionNode* parseLevel1(std::string e);

ExpressionNode* parseLevel6(std::string e) {
    if(e[0] == '(') {
        return parseLevel1(e.substr(1, e.length() - 2));
    }
    return parseLevel7(e);
}

ExpressionNode* parseLevel5(std::string e) {
    int depth = 0;
    for(int i = e.length() - 1; i >= 0; i--) {
        if(e[i] == '(') {
            depth++;
        } else if(e[i] == ')') {
            depth--;
        }
        if(depth == 0) {
            if(e[i] == '!') {
                return new FactorialNode(parseLevel6(e.substr(0, i)));           
            }
        }
    }
    return parseLevel6(e);
}

ExpressionNode* parseLevel4(std::string e) {
    int depth = 0;
    for(int i = 0; i < e.length(); i++) {
        if(e[i] == '(') {
            depth++;
        } else if(e[i] == ')') {
            depth--;
        }
        if(depth == 0) {
            if(e[i] == '-') {
                return new NegationNode(parseLevel5(e.substr(i + 1)));           
            }
        }
    }
    return parseLevel5(e);
}

ExpressionNode* parseLevel3(std::string e) {
    int depth = 0;
    for(int i = e.length() - 1; i >= 0; i--) {
        if(e[i] == '(') {
            depth++;
        } else if(e[i] == ')') {
            depth--;
        }
        if(depth == 0) {
            if(e[i] == '^') {
                return new PowNode(parseLevel3(e.substr(0, i)), parseLevel4(e.substr(i + 1)));           
            }
        }
    }
    return parseLevel4(e);
}

ExpressionNode* parseLevel2(std::string e) {
    int depth = 0;
    for(int i = e.length() - 1; i >= 0; i--) {
        if(e[i] == '(') {
            depth++;
        } else if(e[i] == ')') {
            depth--;
        }
        if(depth == 0) {
            if(e[i] == '*') {
                return new MultiplyNode(parseLevel2(e.substr(0, i)), parseLevel3(e.substr(i + 1)));           
            } else if(e[i] == '/') {
                return new DivideNode(parseLevel2(e.substr(0, i)), parseLevel3(e.substr(i + 1)));     
            } else if(e[i] == '%') {
                return new ModNode(parseLevel2(e.substr(0, i)), parseLevel3(e.substr(i + 1)));     
            } 
        }
    }
    return parseLevel3(e);
}

bool isTwoParameterOperation(std::string e, int index) {
    char c = e[index];
    return c == '+' || c == '-' || c == '*' || c == '/' || c == '%';
}

bool isNegation(std::string e, int index) {
    return index == 0 || isTwoParameterOperation(e, index - 1);
}

ExpressionNode* parseLevel1(std::string e) {
    int depth = 0;
    for(int i = e.length() - 1; i >= 0; i--) {
        if(e[i] == '(') {
            depth++;
        } else if(e[i] == ')') {
            depth--;
        }
        if(depth == 0) {
            if(e[i] == '+') {
                return new PlusNode(parseLevel1(e.substr(0, i)), parseLevel2(e.substr(i + 1)));           
            } else if(e[i] == '-' && !isNegation(e, i)) {
                return new MinusNode(parseLevel1(e.substr(0, i)), parseLevel2(e.substr(i + 1)));     
            }
        }
    }
    return parseLevel2(e);
}

ExpressionNode* parse(std::string expressionString) {
    // Remove spaces from the string
    std::string cleanExpression = "";
    for(int i = 0; i < expressionString.length(); i++) {
        if(expressionString[i] != ' ') {
            cleanExpression += expressionString[i];
        }
    }
    return parseLevel1(cleanExpression);
}