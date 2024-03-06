#include "BitcoinExchange.hpp"

int main() {
	BitcoinExchange exchange;
	try {
		exchange.printValue("input.txt");
	} catch  (std::exception &e) {
		std::cout << e.what() << std::endl;
	}

}
