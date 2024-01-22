
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"

int main(void) {

	Bureaucrat b1("b1", 50);
	Bureaucrat b2("b3", 25);
	Bureaucrat b3("b3", 5);

	PresidentialPardonForm ppf1("PPF1");
	PresidentialPardonForm ppf2("PPF2");
	PresidentialPardonForm ppf3("PPF3");

	std::cout << b1 << std::endl;
	b1.executeForm(ppf1);
	b1.signForm(ppf1);
	std::cout << ppf1 << std::endl;

	std::cout << std::endl << b2 << std::endl;
	b2.executeForm(ppf2);
	b2.signForm(ppf2);
	b2.executeForm(ppf2);
	std::cout << ppf2 << std::endl;

	std::cout << std::endl << b3 << std::endl;
	b3.executeForm(ppf3);
	b3.signForm(ppf3);
	b3.executeForm(ppf3);
	std::cout << ppf2 << std::endl;

	return (0);

}
