
# include "AForm.hpp"

AForm::AForm(void) : _name(""), _isSigned(false), _requiredGrade(150), _executeGrade(150) {
}

//Why doesnt it need name?
AForm::AForm(const AForm &copy): _requiredGrade(copy.getRequiredGrade()), _executeGrade(copy.getExecuteGrade()){
	*this = copy;
}

AForm::AForm(std::string name, int requiredGrade, int executeGrade) : _name(name), _isSigned(false), _requiredGrade(requiredGrade), _executeGrade(executeGrade)
{
	if (requiredGrade > 150 || executeGrade > 150)
		throw AForm::GradeTooLowException();
	else if (requiredGrade < 1 || executeGrade < 1)
		throw AForm::GradeTooHighException();
}

AForm &AForm::operator=(const AForm &b) {
	this->_isSigned = b._isSigned;
	return (*this);
}

AForm::~AForm(void) {
}

void	AForm::beSigned(Bureaucrat &b) {
	if (b.getGrade() > this->_requiredGrade)
		throw AForm::GradeTooLowException();
	this->_isSigned = true;
}

std::string	AForm::getName() const {
	return this->_name;
}

bool	AForm::getIsSigned() const {
	return this->_isSigned;
}

int	AForm::getRequiredGrade() const {
	return this->_requiredGrade;
}

int	AForm::getExecuteGrade() const {
	return this->_executeGrade;
}

const char* AForm::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char* AForm::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

std::ostream & operator<<(std::ostream &o, const AForm &f){
	o << f.getName() << " has the required Grade: " << f.getRequiredGrade() << ", the execute Grade: " << f.getExecuteGrade() << " and is " << (f.getIsSigned() ? "signed" : "not signed");
	return o;
}
