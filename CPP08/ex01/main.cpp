#include "Span.hpp"

int main() {
	 std::cout << "----------------------------------------------" << std::endl;
	{
		Span sp = Span(5);
		sp.addNumber(-10);
		sp.addNumber(20);
		sp.addNumber(18);
		sp.addNumber(0);
		sp.addNumber(10);
		//std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl << "----------------------------------------------" << std::endl;

	{
		Span sp;
		sp = Span(1);

		try {
			sp.shortestSpan();
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		try {
			sp.longestSpan();
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		sp.addNumber(6);
		try {
			sp.shortestSpan();
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		try {
			sp.longestSpan();
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		try {
			sp.addNumber(42);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
	}

	std::cout << std::endl << "----------------------------------------------" << std::endl;


}
