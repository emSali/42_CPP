
#include "Intern.hpp"

Intern::Intern(void){
}

Intern::Intern(const Intern &copy) {
	*this = copy;
}

Intern &Intern::operator=(const Intern &i) {
	(void) i;
	return (*this);
}

Intern::~Intern(void) {
}

AForm * Intern::shrubbery (std::string target)
{
	std::cout << "Intern creates the Shrubbery Creation Form" << std::endl;
	return new ShrubberyCreationForm(target);
}

AForm * Intern::robotomy (std::string target)
{
	std::cout << "Intern creates the Robotomy Request Form" << std::endl;
	return new RobotomyRequestForm(target);
}

AForm * Intern::presidential (std::string target)
{
	std::cout << "Intern creates the Presidential Pardon Form" << std::endl;
	return new PresidentialPardonForm(target);
}

AForm *	Intern::makeForm(std::string name, std::string target) {
	std::string form[9] =	{"ShrubberyCreationForm", "RobotomyRequestForm", "PresidentialPardonForm", \
							"ShrubberyCreation", "RobotomyRequest", "PresidentialPardon", "shrubbery creation", \
							"robotomy request", "presidential pardon"};

	AForm * (Intern::*funcs[])(std::string target) = {&Intern::shrubbery, &Intern::robotomy, &Intern::presidential};

	for (int i = 0; i < 9; i++)
			if (form[i].compare(name) == 0)
				return (this->*funcs[i % 3])(target);

	std::cout << "The form can't be created, it doesn't exist." << std::endl;
	return NULL;
}
