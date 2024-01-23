
#include "Bureaucrat.hpp"
#include "Intern.hpp"

int main(void) {

	Bureaucrat b1("b1", 140);
	Bureaucrat b2("b2", 65);
	Bureaucrat b3("b3", 5);
	std::cout << b1 << std::endl;
	std::cout << b2 << std::endl;
	std::cout << b3 << std::endl << std::endl;

	Intern i1;
	AForm *scf = i1.makeForm("ShrubberyCreationForm", "SCF");
	AForm *rrf = i1.makeForm("RobotomyRequest", "RRF");
	AForm *ppf = i1.makeForm("presidential pardon", "PPF");
	AForm *whoopsie = i1.makeForm("Emergency Climate Act", "Whoopsie");
	if (whoopsie == NULL){
		std::cout << "whoopsie = NULL" << std::endl;
	}

	std::cout << std::endl;
	b1.executeForm(*scf);
	std::cout << std::endl;

	scf->beSigned(b1);
	rrf->beSigned(b2);
	ppf->beSigned(b3);
	std::cout << std::endl;

	b1.executeForm(*scf);
	std::cout << std::endl;

	b3.executeForm(*scf);
	b3.executeForm(*rrf);
	b3.executeForm(*ppf);

	delete scf;
	delete rrf;
	delete ppf;

}
