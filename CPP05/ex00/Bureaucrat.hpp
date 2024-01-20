
#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP

# include <iostream>
# include <string>

class Bureaucrat {

    public:
        Bureaucrat(void);
        Bureaucrat(const Bureaucrat &copy);
        Bureaucrat(string name, int grade);
        Bureaucrat &operator=(const Bureaucrat &b);
        virtual ~Bureaucrat(void);

        void    increaseGrade();
        void    decreaseGrade();

        class GradeTooHighException: public std::exception {
            public:
                virtual const char* what() const throw();
        }
        class GradeTooLowException: public std::exception {
            public:
                virtual const char* what() const throw();
        }

    private:
        std::string const   _name;
        int                 _grade;
        
        void    checkGrade(int grade) throw();
}

std::ostream & operator<<(std::ostream &o, const Bureaucrat &b);

#endif
