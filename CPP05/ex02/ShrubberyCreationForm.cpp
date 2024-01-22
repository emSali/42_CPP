#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void) : AForm("ShrubberyCreationForm", 145, 137){
	this->_target = "";
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &copy): AForm(copy.getName(), copy.getRequiredGrade(), copy.getExecuteGrade()) {
    *this = copy;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target) : AForm("ShrubberyCreationForm", 145, 137) {
	this->_target = target;
}

ShrubberyCreationForm &ShrubberyCreationForm::operator=(const ShrubberyCreationForm &b) {
	AForm::operator=(b);
	this->_target = b._target;
	return (*this);
}

ShrubberyCreationForm::~ShrubberyCreationForm(void) {
}

void ShrubberyCreationForm::execute (Bureaucrat &b) const {
	AForm::checkExecute(b);
	// TODO
}
