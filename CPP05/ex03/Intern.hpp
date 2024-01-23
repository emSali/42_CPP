#ifndef INTERN_HPP
#define INTERN_HPP

# include <iostream>
# include <string>
# include "ShrubberyCreationForm.hpp"
# include "RobotomyRequestForm.hpp"
# include "PresidentialPardonForm.hpp"

class Intern {

	public:
		Intern(void);
		Intern(const Intern &copy);
		Intern &operator=(const Intern &b);
		virtual ~Intern(void);

		AForm *	makeForm(std::string name, std::string target);

	private:
		AForm * shrubbery (std::string target);
		AForm * robotomy (std::string target);
		AForm * presidential (std::string target);
};

#endif
