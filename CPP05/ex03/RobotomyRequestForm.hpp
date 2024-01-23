
#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"

class RobotomyRequestForm: public AForm {

	public:
		RobotomyRequestForm(void);
		RobotomyRequestForm(const RobotomyRequestForm &copy);
		RobotomyRequestForm(std::string target);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &b);
		virtual ~RobotomyRequestForm(void);

		virtual void execute(Bureaucrat &b) const;
		std::string getTarget() const;

	private:
		std::string	_target;
};

#endif
