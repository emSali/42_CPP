
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

void	BitcoinExchange::fillPrices(std::string filename) {
	std::ifstream	file(filename);
	std::string		line;
	std::string		key;
	float			value;

	if (!file.is_open())
		throw BitcoinExchange::FileError();
	while (std::getline(file, line)) {
		key = line.substr(0, 10);
		value = static_cast<float>(atof(line.c_str() + 11));
		_prices[key] = value;
	}
	file.close();
}

void	BitcoinExchange::printValue(std::string filename) {
	std::ifstream	file(filename);
	std::string		line;
	float			price;
	float			amount;

	if (!file.is_open())
		throw BitcoinExchange::FileError();
	while (std::getline(file, line)) {
		try {
			price = BitcoinExchange::getPrice(line);
			amount = BitcoinExchange::getAmount(line);
			std::cout << line.substr(0, 10) << " => " << amount << " = " << (price * amount) << std::endl;
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
}

float	BitcoinExchange::getPrice(std::string line) {
	std::string year = line.substr(0,4);
}

float	BitcoinExchange::getAmount(std::string line) {

}

const char *BitcoinExchange::FileError::what() const throw() {
	return "Error: Could not open file";
}

const char *BitcoinExchange::TooLargeNumber::what() const throw() {
	return "Error: Number too Large";
}

const char *BitcoinExchange::NegativeNumber::what() const throw() {
	return "Error: not a positive number";
}

BitcoinExchange::WrongFormat::WrongFormat(std::string errorMessage) : _error(errorMessage){}

const char *BitcoinExchange::WrongFormat::what() const throw() {
	std::string errorMessage = "Error: bad input => " + _error;
	return errorMessage.c_str();
}
