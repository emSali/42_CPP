
#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class PresidentialPardonForm: public AForm {

	public:
		PresidentialPardonForm(void);
		PresidentialPardonForm(const PresidentialPardonForm &copy);
		PresidentialPardonForm(std::string target);
		PresidentialPardonForm &operator=(const PresidentialPardonForm &b);
		virtual ~PresidentialPardonForm(void);

		virtual void execute(Bureaucrat &b) const;
		std::string getTarget() const;

	private:
		std::string	_target;
};

#endif
