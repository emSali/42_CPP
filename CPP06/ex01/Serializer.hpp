#ifndef SERIALIZER_HPP
#define SERIALIZER_HPP

#include <iostream>
#include <string>
#include <limits>
#include <iomanip>
#include <stdlib.h>
#include "Data.hpp"

class Serializer {

	public:
		// has to be static to be used without creating instance
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);

	private:
		Serializer(void);
		Serializer(const Serializer &copy);
		Serializer &operator=(const Serializer &sc);
		virtual ~Serializer(void);

};

#endif
