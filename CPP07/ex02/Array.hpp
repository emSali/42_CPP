#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <string>
#include <exception>
#include <iostream>
#include <stdlib.h>

template <typename T>
class Array {

	public:
		Array(void);
		Array(const Array &copy);
		Array(uint n);
		~Array(void);
		Array &operator=(const Array &b);
		T &operator[](const int i) const;

		uint size() const;

		class OutOfBond : public std::exception {
			public:
				virtual const char *what() const throw();
		};

	private:
		T *_arr;
		uint _size;

};

template <typename T>
std::ostream & operator<<(std::ostream &o, const Array<T> &b);

#endif
