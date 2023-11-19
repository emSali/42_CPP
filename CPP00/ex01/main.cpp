/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:55:52 by esali             #+#    #+#             */
/*   Updated: 2023/11/19 19:24:17 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

std::string	showPrompt( void ) {

	std::string	input;
	std::cout << std::endl;
	std::cout << "--- PHONEBOOK ---" << std::endl;
	std::cout << "Your options are: SEARCH, ADD or EXIT" << std::endl;
	std::cin >> input;
	return input;
}

int	main(void) {

	PhoneBook	phonebook;
	std::string	input;

	while(1)
	{
		input = showPrompt();
		if (input == "EXIT")
			return 0;
		else if (input == "ADD")
			phonebook.add();
		else if (input == "SEARCH")
			phonebook.search();
		else
			std::cout << "Invalid input" << std::endl;
	}
	return 0;
}
