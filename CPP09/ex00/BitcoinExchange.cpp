
#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange() {
	try {
		fillPrices("data.csv");
	} catch (std::exception &e) {
		std::cout << e.what() << ": data.csv" <<  std::endl;
	}
}

BitcoinExchange::BitcoinExchange(BitcoinExchange &copy) {
	*this = copy;
}

BitcoinExchange::~BitcoinExchange() {
}

BitcoinExchange & BitcoinExchange::operator=(const BitcoinExchange &assign) {
	(void) assign;
	return (*this);
}

void	BitcoinExchange::printValue(std::string filename) {

}

void	BitcoinExchange::fillPrices(std::string filename) {
	std::ifstream file(filename);
	if (!file.is_open())
		throw BitcoinExchange::FileError();

	file.close();
}

const char *BitcoinExchange::FileError::what() const throw() {
	return "Could not open file";
}

const char *BitcoinExchange::TooLargeNumber::what() const throw() {
	return "Number too Large";
}

const char *BitcoinExchange::NegativeNumber::what() const throw() {
	return "Price cannot be negative";
}

const char *BitcoinExchange::WrongFormat::what() const throw() {
	return "Wrong Format";
}
