
#include "Base.hpp"

Base::~Base(void) {

}

// generates a random class A, B or C with real randomness (generated with seed from time)
Base *generate(void) {
	Base *base;

	std::srand(static_cast<unsigned int>(std::time(NULL)));
	int randomValue = (std::rand() % 3);

	switch (randomValue){
		case 0:
			base = new A;
			break;
		case 1:
			base = new B;
			break;
		case 2:
			base = new C;
			break;
	}
	return (base);
}

// dynamic cast retuns null in case its
void identify(Base* p){
	A *a = dynamic_cast<A *>(p);
	B *b = dynamic_cast<B *>(p);
	C *c = dynamic_cast<C *>(p);
	if (a != NULL) {
		std::cout << "p points to the A object type." << std::endl;
	} else if (b != NULL) {
		std::cout << "p points to the B object type." << std::endl;
	} else if (c != NULL) {
		std::cout << "p points to the C object type." << std::endl;
	}
}

// Since references can't be NULL, it'll run a bad_cast exception if it fails
void identify(Base &p){
	Base base;
	try {
		base = dynamic_cast<A &>(p);
		std::cout << "p is a refernece to the A object type." << std::endl;
	} catch (std::exception &e) {}
	try {
		base = dynamic_cast<B &>(p);
		std::cout << "p is a reference to the B object type." << std::endl;
	} catch (std::exception &e) {}
	try {
		base = dynamic_cast<C &>(p);
		std::cout << "p is a reference to the C object type." << std::endl;
	} catch (std::exception &e) {}
}

