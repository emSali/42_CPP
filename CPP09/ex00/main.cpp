#include "BitcoinExchange.hpp"

int main(int ac, char *av[]) {
	BitcoinExchange exchange;
	if (ac == 2) {
		try {
			exchange.printValue(av[1]);
		} catch (std::exception &e) {
			std::cout << e.what() << ": " << av[1] << std::endl;
		}
	}
	else
		std::cout << "Usage: ./bitcoin [filename]" << std::endl;
}
