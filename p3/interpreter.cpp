#include <iostream>
#include <string>
#include "parser.h"
int main() {
    while(true) {
        std::string expression;
        std::getline(std::cin, expression);
        if(expression.length() == 0) {
            break;
        }
        std::cout << parse(expression)->evaluate() << "\n";
    }
    return 0;
}