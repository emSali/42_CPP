#include "Span.hpp"

int main() {
	{
		Span sp = Span(5);
		sp.addNumber(-10);
		sp.addNumber(20);
		sp.addNumber(18);
		sp.addNumber(0);
		sp.addNumber(10);
		std::cout << std::endl << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl;
	}

	std::cout << std::endl << "----------------------------------------------" << std::endl << std::endl;

	{
		Span sp = Span(1);

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

	std::cout << std::endl << "----------------------------------------------" << std::endl << std::endl;

	{
		Span sp = Span(12000);
		try {
			sp.addRange(0, 12000);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		sp.addRange(0, 11999);
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl << std::endl;

	}
}
