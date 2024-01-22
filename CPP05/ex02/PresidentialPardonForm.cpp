
#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(void) : AForm("PresidentialPardonForm", 25, 5){
	this->_target = "";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &copy): AForm(copy.getName(), copy.getRequiredGrade(), copy.getExecuteGrade()) {
    *this = copy;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm("PresidentialPardonForm", 25, 5) {
	this->_target = target;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &b) {
	AForm::operator=(b);
	this->_target = b._target;
	return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm(void) {
}
