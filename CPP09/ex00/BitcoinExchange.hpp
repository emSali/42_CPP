#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <map>

class BitcoinExchange {

	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange &copy);
		~BitcoinExchange();
		BitcoinExchange & operator=(const BitcoinExchange &assign);

		void	printValue(std::string filename);

		class FileError: public std::exception {
			virtual const char * what() const throw();
		};

		class TooLargeNumber: public std::exception {
			virtual const char * what() const throw();
		};

		class NegativeNumber: public std::exception {
			virtual const char * what() const throw();
		};

		class WrongFormat: public std::exception {
			virtual const char * what() const throw();
		};

	private:
		void	fillPrices(std::string Filename);

		std::map<std::string, std::string> _prices;



};

#endif
