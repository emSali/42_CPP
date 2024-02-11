#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <algorithm>
#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <limits>
#include <exception>
#include <map>

class BitcoinExchange {

	public:
		BitcoinExchange();
		BitcoinExchange(BitcoinExchange &copy);
		~BitcoinExchange();
		BitcoinExchange & operator=(const BitcoinExchange &assign);

		static void	printValue(std::string filename);

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
				WrongFormat(const char * errorMessage);
				virtual const char * what() const throw();
			private:
				const char * _error;
		};

	private:
		void	fillPrices(std::string Filename);
		static float	getPrice(std::string line);
		static float	getAmount(std::string line);


		std::map<std::string, float> _prices;

};

#endif
