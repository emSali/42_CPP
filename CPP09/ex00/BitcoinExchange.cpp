
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
	std::ifstream	file(filename.c_str(), std::ifstream::in);
	std::string		line;
	std::string		key;
	float			value;

	if (!file.is_open())
		throw BitcoinExchange::FileError();
	while (std::getline(file, line)) {
		key = line.substr(0, 10);
		value = std::atof(line.c_str() + 11);
		_prices[key] = value;
	}
	file.close();
}

void BitcoinExchange::printValue(std::string filename) const {
	std::ifstream file(filename.c_str());
	std::string line;
	int i = 0;

	if (!file.is_open())
		throw BitcoinExchange::FileError();
	while (std::getline(file, line)) {
		if (line.empty())
			continue;
		if (i++ == 0 && std::strcmp(line.c_str(), "date | value") == 0) 
			continue;
		try {
			calcPrice(line);
		} catch (std::exception& e) {
			std::cout << e.what() << std::endl;
		}
		
	}
	file.close();
}

void	BitcoinExchange::calcPrice(std::string line) const{
	char *date;
	float price;
	float amount;
	char *splitamount;
	char *delimiter;

	date = std::strtok((char *)line.c_str(), " ");
	if (date == NULL)
		throw BitcoinExchange::WrongFormat("DD-MM-YYYY");
	price = BitcoinExchange::getPrice(date);

	delimiter = std::strtok(NULL, " ");
	if (delimiter == NULL || delimiter[0] != '|' || delimiter[1] != '\0')
		throw BitcoinExchange::WrongFormat(date);

	splitamount = std::strtok(NULL, " ");
	if (splitamount == NULL || splitamount[0] == '\0')
		throw BitcoinExchange::WrongFormat(date);
	amount = BitcoinExchange::getAmount(splitamount);
	std::cout << date << " => " << amount << " = " << price * amount << std::endl;
}


float	BitcoinExchange::getPrice(char * date) const {
	int year, month, day;
	char dash1, dash2;
	
	std::istringstream ss(date);

	if (!(ss >> year >> dash1 >> month >> dash2 >> day))
		throw BitcoinExchange::WrongFormat(date);
	else if (dash1 != '-' || dash2 != '-')
		throw BitcoinExchange::WrongFormat(date);
	if (day < 1 || day > 31 || month < 1 || month > 12 || year < 2009)
		throw BitcoinExchange::WrongFormat(date);

	std::string key = date;
	// lower bond is using lexicographical comparison to get the value just before the one that is input.
	// it->first returns the key. it->second returns the value
	std::map<std::string, float>::const_iterator it = _prices.lower_bound(key);
	// If the exact date is found in the map
	if (it != _prices.end() && it->first == key) {
		return it->second;
	}

	// If the date is not found, but there is a lower date
	if (it != _prices.begin()) {
		--it;	// go to the value before, it being an initialize value.
		return it->second;
	}

	// If the date is earlier than all dates in the map
	return it->second;
}

float BitcoinExchange::getAmount(char * amount) const {
	float value;
	
	try {
		value = std::atof(amount);
	} catch (std::exception &e) {
		throw BitcoinExchange::WrongFormat(amount);
	}
	if (value < 0)
		throw BitcoinExchange::NegativeNumber();
	else if (value > 1000)
		throw BitcoinExchange::TooLargeNumber();
	return (value);
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

BitcoinExchange::WrongFormat::WrongFormat(const char * errorArea){
	char message[] = "Error: bad input => ";
	char* tmp = new char[std::strlen(errorArea) + std::strlen(message) + 1];
	std::strcpy(tmp, message);
	std::strcat(tmp, errorArea);
	_error = tmp;
}

BitcoinExchange::WrongFormat::~WrongFormat() throw() {
    delete[] _error; 
}

const char *BitcoinExchange::WrongFormat::what() const throw() {
	
	return _error;
}

