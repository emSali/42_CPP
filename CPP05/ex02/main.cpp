
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"

int main(void) {

	Bureaucrat b1("b1", 5);
	Bureaucrat b2("b2", 25);
	Bureaucrat b3("b3", 72);
	Bureaucrat b4("b4", 145);
	Bureaucrat b5("b5", 150);


	ShrubberyCreationForm scf4("scf4");
	ShrubberyCreationForm scf3("scf3");
	ShrubberyCreationForm scf5("scf5");

	std::cout << b5 << std::endl;
	b5.executeForm(scf5);
	b5.signForm(scf5);
	std::cout << scf5 << std::endl;

	std::cout << std::endl << b4 << std::endl;
	b4.executeForm(scf4);
	b4.signForm(scf4);
	b4.executeForm(scf4);
	std::cout << scf4 << std::endl;

	std::cout << std::endl << b3 << std::endl;
	b3.executeForm(scf3);
	b3.signForm(scf3);
	b3.executeForm(scf3);
	std::cout << scf3 << std::endl;

	std::cout << std::endl << std::endl;

	RobotomyRequestForm rrf2("rrf2");
	RobotomyRequestForm rrf3("rrf3");
	RobotomyRequestForm rrf4("rrf4");

	std::cout << std::endl << b4 << std::endl;
	b4.executeForm(rrf4);
	b4.signForm(rrf4);
	b4.executeForm(rrf4);
	std::cout << rrf4 << std::endl;

	std::cout << std::endl << b3 << std::endl;
	b3.executeForm(rrf3);
	b3.signForm(rrf3);
	b3.executeForm(rrf3);
	std::cout << rrf3 << std::endl;

	std::cout << std::endl << b2 << std::endl;
	b2.executeForm(rrf2);
	b2.signForm(rrf2);
	b2.executeForm(rrf2);
	std::cout << rrf2 << std::endl;

	std::cout << std::endl << std::endl;

	PresidentialPardonForm ppf1("PPF1");
	PresidentialPardonForm ppf2("PPF2");
	PresidentialPardonForm ppf3("PPF3");

	std::cout << std::endl << b3 << std::endl;
	b3.executeForm(ppf3);
	b3.signForm(ppf3);
	std::cout << ppf2 << std::endl;

	std::cout << std::endl << b2 << std::endl;
	b2.executeForm(ppf2);
	b2.signForm(ppf2);
	b2.executeForm(ppf2);
	std::cout << ppf2 << std::endl;

	std::cout << std::endl << b1 << std::endl;
	b1.executeForm(ppf1);
	b1.signForm(ppf1);
	b1.executeForm(ppf1);
	std::cout << ppf1 << std::endl;

	return (0);

}
