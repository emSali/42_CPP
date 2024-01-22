
# include "Form.hpp"

Form::Form(void) : _name(""), _isSigned(false), _requiredGrade(150), _executeGrade(150) {
}

//Why doesnt it need name?
Form::Form(const Form &copy): _requiredGrade(copy.getRequiredGrade()), _executeGrade(copy.getExecuteGrade()){
	*this = copy;
}

Form::Form(std::string name, int requiredGrade, int executeGrade) : _name(name), _isSigned(false), _requiredGrade(requiredGrade), _executeGrade(executeGrade)
{
	if (requiredGrade > 150 || executeGrade > 150)
		throw Form::GradeTooLowException();
	else if (requiredGrade < 1 || executeGrade < 1)
		throw Form::GradeTooHighException();
}

Form &Form::operator=(const Form &b) {
	this->_isSigned = b._isSigned;
	return (*this);
}

Form::~Form(void) {
}

void	Form::beSigned(Bureaucrat &b) {
	if (b.getGrade() > this->_requiredGrade)
		throw Form::GradeTooLowException();
	this->_isSigned = true;
}

std::string	Form::getName() const {
	return this->_name;
}

bool	Form::getIsSigned() const {
	return this->_isSigned;
}

int	Form::getRequiredGrade() const {
	return this->_requiredGrade;
}

int	Form::getExecuteGrade() const {
	return this->_executeGrade;
}

const char* Form::GradeTooHighException::what() const throw() {
	return ("Grade too high");
}

const char* Form::GradeTooLowException::what() const throw() {
	return ("Grade too low");
}

std::ostream & operator<<(std::ostream &o, const Form &f){
	o << f.getName() << " has the required Grade: " << f.getRequiredGrade() << ", the execute Grade: " << f.getExecuteGrade() << " and is " << (f.getIsSigned() ? "signed" : "not signed");
	return o;
}
