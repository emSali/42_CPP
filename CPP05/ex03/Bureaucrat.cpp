
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name(""), _grade(150){
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
    *this = copy;
}

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    checkGrade(grade);
    this->_grade = grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b) {
    this->_grade = b._grade;
    return (*this);
}

Bureaucrat::~Bureaucrat(void) {
}

void    Bureaucrat::incrementGrade() {
    try {
        if (this->_grade <= 1)
            throw Bureaucrat::GradeTooHighException();
		_grade--;
    }
    catch (GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
}

void	Bureaucrat::decrementGrade() {
	try {
		if (this->_grade >= 150)
			throw Bureaucrat::GradeTooLowException();
		this->_grade++;
	}
	catch (GradeTooLowException &e) {
		std::cout << e.what() << std::endl;
	}
}

void	Bureaucrat::signForm(AForm &form) {
	try {
		form.beSigned(*this);
		std::cout << this->_name << " signed " << form.getName() << std::endl;
	}
	catch (AForm::GradeTooLowException &e)
	{
		std::cout << this->_name << " couldn't sign " << form.getName() << " because " << e.what() << std::endl;
	}
}

void	Bureaucrat::executeForm(AForm const &form) {
	try {
		form.execute(*this);
		std::cout << this->_name << " executed " << form.getName() << std::endl;
	}
	catch(std::exception &e) {
		std::cout << this->_name << " can't execute " << form.getName() << " because " << e.what() << std::endl;
	}
}

std::string	Bureaucrat::getName() const {
	return this->_name;
}

int	Bureaucrat::getGrade() const {
	return this->_grade;
}

void    Bureaucrat::checkGrade(int grade) {
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException();
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException();
}

const char* Bureaucrat::GradeTooHighException::what() const throw() {
    return ("Grade too high (max grade = 1)");
}

const char* Bureaucrat::GradeTooLowException::what() const throw() {
    return ("Grade too low (min grade = 150)");
}

std::ostream & operator<<(std::ostream &o, const Bureaucrat &b) {
    o << b.getName() << " has the grade " << b.getGrade();
    return (o);
}
