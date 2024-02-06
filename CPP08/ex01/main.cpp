#include "Span.hpp"

int getRandom() {

    //Generate a random number between int min and int max
    int randomValue = (std::rand() % std::numeric_limits<int>::max()) + std::numeric_limits<int>::min();

    return randomValue;
}

int main() {
	{
		Span sp = Span(5);
		sp.addNumber(6);
		sp.addNumber(3);
		sp.addNumber(17);
		sp.addNumber(9);
		sp.addNumber(11);
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
		Span sp = Span(10000);
		std::vector<int> nums1 (10001);
		std::generate (nums1.begin(), nums1.end(), getRandom);
		std::vector<int> nums2 (10000);
		std::generate (nums2.begin(), nums2.end(), getRandom);
		try {
			sp.addNumbers(nums1);
		} catch (std::exception & e) {
			std::cout << e.what() << std::endl;
		}
		sp.addNumbers(nums2);
		std::cout << "first element: " << sp.getVector()[0] << " Last Element: " << sp.getVector()[9999] << std::endl;
		std::cout << sp.shortestSpan() << std::endl;
		std::cout << sp.longestSpan() << std::endl << std::endl;

	}

	return (0);
}
