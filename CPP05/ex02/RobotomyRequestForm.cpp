#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(void) : AForm("RobotomyRequestForm", 74, 45){
	this->_target = "";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &copy): AForm(copy.getName(), copy.getRequiredGrade(), copy.getExecuteGrade()) {
    *this = copy;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm("RobotomyRequestForm", 74, 45) {
	this->_target = target;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &b) {
	AForm::operator=(b);
	this->_target = b._target;
	return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm(void) {
}

void RobotomyRequestForm::execute (Bureaucrat &b) const {
	AForm::checkExecute(b);
	// TODO
}
