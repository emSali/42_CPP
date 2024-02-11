
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
			price = getPrice(line);
			amount = getAmount(line);
			std::cout << line.substr(0, 10) << " => " << amount << " = " << (price * amount) << std::endl;
		} catch(std::exception &e) {
			std::cout << e.what() << std::endl;
		}
	}
}

float	BitcoinExchange::getPrice(std::string line) {
	std::istringstream ss(line);
	int year, month, day;
	char dash1, dash2;
	if (!(ss >> year >> dash1 >> month >> dash2 >> day))
		throw BitcoinExchange::WrongFormat("line.substr(0, 10)");
	std::cout << year << dash1 << month << dash2 << day << std::endl;
	return (1.0);
}

float	BitcoinExchange::getAmount(std::string line) {
	std::cout << line << std::endl;
	return 1.0;
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

BitcoinExchange::WrongFormat::WrongFormat(const char *error) : _error(error){}

const char *BitcoinExchange::WrongFormat::what() const throw() {
	return _error;
}
