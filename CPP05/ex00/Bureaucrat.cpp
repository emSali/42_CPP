
#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(void) : _name(""), _grade(150){
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) {
    *this = copy;
}

Bureaucrat::Bureaucrat(string name, int grade) : _name(name)
{
    checkGrade(grade);
    this->_grade = grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &b) {
    this->_grade = b._grade;
    this->_name = b._name;
    return (*this);
}

void    Bureaucrat::increaseGrade() {
    try {
        if (this->_grade <= 1)
            throw Bureaucrat::GradeTooHighException;
        grade--;
    }
    catch (GradeTooHighException &e) {
        std::cout << e.what() << std::endl;
    }
}

void    Bureaucrat::decreaseGrade() {
    try {
        if (this->_grade >= 150)
            throw Bureaucrat::GradeTooLowException;
        grade--;
    }
    catch (GradeTooLowException &e) {
        std::cout << e.what() << std::endl;
    }
}

Bureaucrat::~Bureaucrat(void) {
}

void    Bureaucrat::checkGrade(int grade) throw() {
    if (grade > 150)
        throw Bureaucrat::GradeTooLowException;
    else if (grade < 1)
        throw Bureaucrat::GradeTooHighException;
}

virtual const char* GradeTooHighException::Bureaucrat::what() const throw() {
    return ("Grade too high (max grade = 1)")
}

virtual const char* GradeTooLowException::Bureaucrat::what() const throw() {
    return ("Grade too low (min grade = 150)")
}

std::ostream & operator<<(std::ostream &o, const Bureaucrat &b) {
    o << b._name << "has the grade " << b._grade;
    return (o);
}