
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	*this = copy;
}

ScalarConverter & ScalarConverter::operator=(const ScalarConverter &sc) {
	(void) sc;
	return (*this);
}

ScalarConverter::~ScalarConverter(void) {
}

bool ScalarConverter(const std::string str) {
	int len = str.size();
	for (int i = 0; i < len; i++) {
		if (std::isdigit(str[i]) == 0 && str[i] != '.' && str[i] != 'f')
			return false;
	}
	return true;
}

void ScalarConverter::convert(std::string std) {

}
