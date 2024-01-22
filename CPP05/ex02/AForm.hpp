
#ifndef AFORM_HPP
#define AFORM_HPP

# include <iostream>
# include <string>
# include "Bureaucrat.hpp"

// Forward declaration to break circular dependency
class Bureaucrat;

class AForm {

	public:
		AForm(void);
		AForm(const AForm &copy);
		AForm(std::string name, int requiredGrade, int executeGrade);
		AForm &operator=(const AForm &b);
		virtual ~AForm(void);

		void			beSigned(Bureaucrat &b);
		virtual void	execute(Bureaucrat &b) const = 0;
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
		class FormNotSigned: public std::exception {
			public:
				virtual const char* what() const throw();
		};

	private:
		const std::string	_name;
		bool				_isSigned;
		const int			_requiredGrade;
		const int			_executeGrade;

};

std::ostream & operator<<(std::ostream &o, const AForm &f);

#endif
