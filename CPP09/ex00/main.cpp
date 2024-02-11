#include "BitcoinExchange.hpp"

int main() {
	try {
		BitcoinExchange::printValue("input.txt");
	} catch  (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

}
