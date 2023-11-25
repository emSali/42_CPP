/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/23 21:35:38 by esali             #+#    #+#             */
/*   Updated: 2023/11/25 14:38:09 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int main(void) {

	{
		Fixed a;
		Fixed b( a );
		Fixed c;

		c = b;

		std::cout << a.getRawBits() << std::endl;
		std::cout << b.getRawBits() << std::endl;
		std::cout << c.getRawBits() << std::endl;

		std::cout <<  std::endl;
		std::cout <<  std::endl;
	}

	Fixed a;
	a.setRawBits(100);
	std::cout << a.getRawBits() << std::endl;

	return 0;
}
