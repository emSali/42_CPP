
#include "Bureaucrat.hpp"

int main(void) {

	try {
        Form f1("Test", 42, -1);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Form f2("Test", -1, 42);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Form f3("Test", 151, 42);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }
    try {
        Form f4("Test", 42, 151);
    } catch (std::exception &e) {
        std::cout << e.what() << std::endl;
    }

    std::cout << std::endl;

    Bureaucrat b1("Ben", 2);
    Bureaucrat b2("Elon", 150);
    Bureaucrat b3("Mark", 51);
    std::cout << b1 << std::endl;
    std::cout << b2 << std::endl;
    std::cout << b3 << std::endl << std::endl;

    Form f1("some Form", 10, 1);
    Form f2("another Form", 100, 10);
    Form f3("third form doing the same", 50, 50);
    std::cout << f1 << std::endl;
    std::cout << f2 << std::endl;
    std::cout << f3 << std::endl << std::endl;

    b1.signForm(f1);
    b2.signForm(f2);
    b3.signForm(f3);

	std::cout << std::endl;

	b3.incrementGrade();
	std::cout << b3 << std::endl;
	b3.signForm(f3);
	std::cout << f3 << std::endl;

	return (0);

}
