
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>
#include "AForm.hpp"

// Forward declaration to break circular dependency
class AForm;

class Bureaucrat {

    public:
        Bureaucrat(void);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat(std::string name, int grade);
        Bureaucrat &operator=(const Bureaucrat &b);
        virtual ~Bureaucrat(void);

        void	incrementGrade() ;
        void	decrementGrade() ;
		void	signForm(AForm &form);
		void	executeForm(AForm const &form);
		std::string	getName() const;
		int			getGrade() const;

		class GradeTooHighException: public std::exception {
			public:
				virtual const char* what() const throw();
		};
		class GradeTooLowException: public std::exception {
			public:
				virtual const char* what() const throw();
		};

	private:
		const std::string	_name;
		int					_grade;

		void	checkGrade(int grade);
};

std::ostream & operator<<(std::ostream &o, const Bureaucrat &b);

#endif
