
#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP

# include <iostream>
# include <string>

class ScalarConverter {

	public:
		// has to be static to be used without creating instance
		static void	convert(std::string str);

	private:
		ScalarConverter(void);
		ScalarConverter(const ScalarConverter &copy);
		ScalarConverter &operator=(const ScalarConverter &sc);
		virtual ~ScalarConverter(void);

		bool isNumber(const std::string str);

};

#endif
