#ifndef RPN_HPP
#define RPN_HPP

#include <iostream>
#include <stack>
#include <string>

class RPN {

    public:
        RPN();
        RPN(const RPN &copy);
        ~RPN();
        RPN & operator=(const RPN &copy);

        int rpn(std::string str);

        class IllegalCharacter: public std::exception {
			virtual const char * what() const throw();
		};
    
    private:
        std::stack<int> _stack;
        int isValidChar(char c);
        void useOperator(char c);

};



#endif