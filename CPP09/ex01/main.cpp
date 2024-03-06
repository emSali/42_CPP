#include "RPN.hpp"

int main(int ac, char **av) {
    if (ac != 2) {
        std::cout << "Usage: ./RPN \"[string]\"" << std::endl;
        return 1;
    }
    RPN rpn;
    try {
        std::cout << rpn.rpn(av[1]) << std::endl;
    }
    catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    return 0;
}