
#ifndef FORM_HPP
#define FORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

// Forward declaration to break circular dependency
class Bureaucrat;

class Form {

	public:
		Form(void);
		Form(const Form &copy);
		Form(std::string name, int requiredGrade, int executeGrade);
		Form &operator=(const Form &b);
		virtual ~Form(void);

		void	beSigned(Bureaucrat &b);
		std::string	getName() const;
		bool		getIsSigned() const;
		int			getRequiredGrade() const;
		int			getExecuteGrade() const;

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
		bool				_isSigned;
		const int			_requiredGrade;
		const int			_executeGrade;

};

std::ostream & operator<<(std::ostream &o, const Form &f);

#endif
