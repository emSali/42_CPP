
#include "Base.hpp"

int	main(void)
{
	Base *base = generate();

	std::cout << "Explict downcast (with pointer):" << std::endl;
	identify(base);
	std::cout << std::endl;

	std::cout << "Explict downcast (with reference):" << std::endl;
	identify(*base);

	delete base;
	return (0);
}
