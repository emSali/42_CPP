/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:00:41 by esali             #+#    #+#             */
/*   Updated: 2023/11/22 17:40:26 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <iostream>

int main(void) {
	std::string str = "HI THIS IS BRAIN";
	std::string *stringPTR = &str;
	std::string &stringREF = str;

	std::cout << "***ADDRESS***" << std::endl;
	std::cout << "String: " << &str << std::endl;
	std::cout << "Pointer: " << &stringPTR << std::endl;
	std::cout << "Reference: " << &stringREF << std::endl;
	std::cout << std::endl;
	std::cout << "***VALUE***" << std::endl;
	std::cout << "String: " << str << std::endl;
	std::cout << "Pointer: " << *stringPTR << std::endl;
	std::cout << "Reference: " << stringREF << std::endl;

	return (0);
}
