/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:35:38 by esali             #+#    #+#             */
/*   Updated: 2023/11/25 17:51:36 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void)
{
	Fixed a;
	Fixed const b(Fixed(5.05f) * Fixed(2));

	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;

	std::cout << b << std::endl;

	std::cout << Fixed::max(a, b) << std::endl;


	std::cout << std::endl << std::endl;
	if (a > b)
		std::cout << "a is bigger than b" << std::endl;
	else if (a < b)
		std::cout << "a is smaller than b" << std::endl;
	else if (a == b)
		std::cout << "a and b are equal" << std::endl;

	if (a != b)
		std::cout << "a and b are not equal" << std::endl;

	if (a <= b)
		std::cout << "a is equal or smaller b" << std::endl;
	else if (a >= b)
		std::cout << "a is equal or bigger than b" << std::endl;


	Fixed c = a + b;
	std::cout << "Value of c after addition: of " << a << " and " << b << ": " << c << std::endl;
	if (c <= a)
		std::cout << "c is smaller than a" << std::endl;
	else if (c <= b)
		std::cout << "c is smaller than b and bigger than a" << std::endl;
	else
		std::cout << "c is bigger than a and b" << std::endl;

	c = c - a;
	std::cout << "Value of c after subtraction of " << a << ": " << c << std::endl;
	if (c != b)
		std::cout << "c is not equal to a" << std::endl;
	else if (c == b)
		std::cout << "c is equal to a" << std::endl;

	std::cout << "Value of c before mulitplication with 10: " << c << std::endl;
	c =  c * Fixed(10);
	std::cout << "Value of c after mulitplication with : " << c << std::endl;
	c = c / Fixed(2);
	std::cout << "Value of c during post-decrement: " << c-- << std::endl;
	std::cout << "Value of c after post-decrement: " << c << std::endl;
	std::cout << "Value of c during pre-decrement " << --c << std::endl;
	std::cout << "Value of c afer pre-decrement " << c << std::endl;
	std::cout << "Value of c during post-increment: " << c-- << std::endl;
	std::cout << "Value of c after post-increment: " << c << std::endl;
	std::cout << "Value of c during pre-increment " << --c << std::endl;
	std::cout << "Value of c afer pre-increment " << c << std::endl;

	return (0);
}
