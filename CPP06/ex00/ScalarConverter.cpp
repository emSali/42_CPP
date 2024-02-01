
#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter(void) {
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) {
	*this = copy;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &sc) {
	(void) sc;
	return (*this);
}

ScalarConverter::~ScalarConverter(void) {
}

void ScalarConverter::convert(std::string str) {

	double	d;
	float	f;
	char	c;
	int		i;

	char *endPtr;
	//changes string into its long double representation. removes leading whitespaces an sets value of endPtr to first char after nr
	long double doub = strtod(&str[0], &endPtr);

	//std::cout << "doub: " << doub << " enPtr: " << endPtr << std::endl;
	if (((endPtr[0] != '\0' && endPtr[1] == '\0' && doub == 0) || endPtr[0] == '\0' || (endPtr[0] == 'f' && endPtr[1] == '\0' && doub != 0)) \
	&& str != "inff" && str != "inf" && str != "-nan" && str != "+nan" && str != "+nanf" && str != "-nanf") {

		if (str == "nan" || str == "nanf" || str == "-inf" || str == "-inff" || str == "+inf" || str == "+inff") {
			d = doub;
			f = static_cast<float>(doub);

			std::cout << "char: Impossible!" << std::endl;
			std::cout << "int: Impossible!" << std::endl;
			std::cout << "float: " << f << 'f' << std::endl;
			std::cout << "double: " << d << std::endl;
			return ;
		}

		// CHAR
		if (!isNumber(str) && !(str[0] == '-' && isNumber(&str[1]))) {
			doub = static_cast<double>(endPtr[0]);
			std::cout << "char: '" << endPtr[0] << "'"<< std::endl;
		} else {
			c = static_cast<char>(doub);
			if (isprint(c))
				std::cout << "char: '" << c << "'"<< std::endl;
			else
				std::cout << "char: Non displayable" << std::endl;
		}

		//INT
		if (doub > std::numeric_limits<int>::max() || doub < std::numeric_limits<int>::min()) {
			std::cout << "int: impossible" << std::endl;
		} else {
			i = static_cast<int>(doub);
			std::cout << "int: " << i << std::endl;
		}

		// FLOAT
		if (doub > std::numeric_limits<float>::max() || doub < (std::numeric_limits<float>::max() * -1))
			std::cout << "float: impossible" << std::endl;
		else {
			f = static_cast<float>(doub);	// precision loss is expected
			std::cout << "float: " << std::fixed << std::setprecision(1) << f << "f" << std::endl;
		}

		// DOUBLE
		if (doub > std::numeric_limits<double>::max() || doub < (std::numeric_limits<double>::max() * -1))
			std::cout << "double: impossible" << std::endl;
		else {
			d = static_cast<double>(doub);
			std::cout << "double: " << std::fixed << std::setprecision(1) << d << std::endl;
		}

	} else {

		std::cout << "Invalid Parameter" << std::endl;

	}
}

bool isNumber(const std::string str) {
	int len = str.size();
	for (int i = 0; i < len; i++) {
		if (std::isdigit(str[i]) == 0 && str[i] != '.' && str[i] != 'f') {
			return false;
		}
	}
	return true;
}
