#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <exception>
#include <vector>
#include <algorithm>
#include <numeric>

class Span {
	public:
		Span();
		Span(const Span &copy);
		Span(unsigned int N);
		Span &operator=(const Span &b);
		~Span(void);

		void				addNumber(int nr);
		void				addRange(int rangeSize);
		int					shortestSpan() const;
		int					longestSpan() const;
		unsigned int		getSpace() const;
		std::vector<int>	getVector() const;

		class TooManyElements: public std::exception {
			virtual const char *what() const throw();
		};

		class NoSpanFound: public std::exception {
			virtual const char *what() const throw();
		};

	private:
		unsigned int		_space;
		std::vector<int>	_vec;


};

#endif
