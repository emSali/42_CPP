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

std::string ShrubberyCreationForm::getTarget() const {
	return this->_target;
}

void ShrubberyCreationForm::execute (Bureaucrat &b) const {
	AForm::checkExecute(b);
		std::string filename = getTarget() + "_shrubbery";
	//c_str() returns a pointer to an array that contains a constant null-terminated sequence of characters
	std::ofstream ofs(filename.c_str());
	if (ofs.is_open())
	{
		ofs << "               ,@@@@@@@,\n       ,,,.   ,@@@@@@/@@,  .oo8888o.\n    ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o\n   ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'\n   %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'\n   %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'\n   `&%\\ ` /%&'    |.|        \\ '|8'\n       |o|        | |         | |\n       |.|        | |         | |\n_//__\\/._\\//_/__/  ,\\_//__\\/.  \\_//__/_\n" << std::endl;;
	}
	else
	{
		std::cout << "Error: could not open file." << std::endl;
	}
}
