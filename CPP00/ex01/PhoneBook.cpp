/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:48:20 by esali             #+#    #+#             */
/*   Updated: 2023/11/19 12:46:37 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	return;
}

PhoneBook::~PhoneBook( void ) {
	return;
}

std::string	getDetail( std::string prompt ) {

	std::string answer;

	while (answer.empty()) {
		std::cout << prompt;
		std::cin >> answer;
	}
	return (answer);
}

void	PhoneBook::add( void ) {

	static int	i = 0;

	this->contacts[i % 8].index = i + 1;
	this->contacts[i % 8].firstName = getDetail("First name: ");
	this->contacts[i % 8].lastName = getDetail("Last name: ");
	this->contacts[i % 8].nickName = getDetail("Nickname: ");
	this->contacts[i % 8].phone = getDetail("Phone number: ");
	this->contacts[i % 8].secret = getDetail("Darkest Secret: ");
	i++;
	return;
}


void	PhoneBook::search( void ) const {

	if (this->contacts[0].index == 0) {
		std::cout << "There are no contacts to show" << std::endl;
		return;
	}

	return;
}

