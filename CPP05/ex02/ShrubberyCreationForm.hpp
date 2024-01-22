
#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class ShrubberyCreationForm: public AForm {

	public:
		ShrubberyCreationForm(void);
		ShrubberyCreationForm(const ShrubberyCreationForm &copy);
		ShrubberyCreationForm(std::string target);
		ShrubberyCreationForm &operator=(const ShrubberyCreationForm &b);
		virtual ~ShrubberyCreationForm(void);

		virtual void execute(Bureaucrat &b) const;
		std::string getTarget() const;

	private:
		std::string	_target;
};

#endif
