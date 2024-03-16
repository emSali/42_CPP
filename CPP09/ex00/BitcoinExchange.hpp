#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <cstring>
#include <sstream>
#include <limits>
#include <exception>
#include <map>
#include <stdlib.h>

class BitcoinExchange {

	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange &copy);
		~BitcoinExchange();
		BitcoinExchange & operator=(const BitcoinExchange &assign);

		void	printValue(std::string filename) const;

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
			public:
				WrongFormat(const char * errorArea);
				virtual ~WrongFormat() throw();
				virtual const char * what() const throw();
			private:
				const char * _error;
		};

	private:
		void	fillPrices(std::string Filename);
		void	calcPrice(std::string line) const;
		float	getPrice(char * date) const;
		float	getAmount(char * amount) const;


		std::map<std::string, float> _prices;

};

#endif
