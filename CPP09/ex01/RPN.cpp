#include "RPN.hpp"

RPN::RPN() {
}

RPN::RPN(const RPN &copy) {
    *this = copy;
}

RPN::~RPN() {
}

RPN & RPN::operator=(const RPN &copy) {
    this->_stack = copy._stack;
    return *this;
}

int RPN::rpn(std::string str) {
    for (int i = 0; i < int(str.length()); i++) {
        if (RPN::isValidChar(str[i]) == 0) 
            throw RPN::IllegalCharacter();
        else if (RPN::isValidChar(str[i]) == 3) 
            continue;
        else if (RPN::isValidChar(str[i]) == 2) {
            int value = str[i] - '0'; 
            _stack.push(value);
        }
        else 
            RPN::useOperator(str[i]);
    }
    if (_stack.size() != 1)
        throw RPN::IllegalCharacter();
    return _stack.top();
}

void RPN::useOperator(char c) {
    if (_stack.size() < 2)
        throw RPN::IllegalCharacter();
    int i2 = _stack.top();
    _stack.pop();
    int i1 = _stack.top();
    _stack.pop();
    if (c == '+')
        _stack.push(i1 + i2);
    else if (c == '-')
        _stack.push(i1 - i2);
    else if (c == '*')
        _stack.push(i1 * i2);
    else if (c == '/')
        _stack.push(i1 / i2);
}

const char * RPN::IllegalCharacter::what() const throw() {
    return "Error";
}

int RPN::isValidChar(char c) {
    if (c == '+' || c == '-' || c == '*' || c == '/' ) 
        return 1;
    else if ((c >= '0' && c <= '9'))
        return 2;
    else if (c == ' ')
        return 3;
    return 0;
}