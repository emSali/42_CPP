/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:48:20 by esali             #+#    #+#             */
/*   Updated: 2023/11/20 16:44:05 by esali            ###   ########.fr       */
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

	std::string input;

	while (input.empty()) {
		std::cout << ">> " << prompt;
		std::getline(std::cin, input);
	}
	return (input);
}

void	PhoneBook::add( void ) {

	static int	i = 0;

	this->contacts[i % 8].setIndex((i % 8) + 1);
	std::cout << std::endl;
	this->contacts[i % 8].setFirstName( getDetail("First name: ") );
	this->contacts[i % 8].setLastName( getDetail("Last name: ") );
	this->contacts[i % 8].setNickName( getDetail("Nickname: ") );
	this->contacts[i % 8].setPhone( getDetail("Phone number: ") );
	this->contacts[i % 8].setSecret( getDetail("Darkest Secret: ") );
	i++;
	return;
}

void	printContactsList(Contact const contacts[] ) {

	std::cout << std::setw(10) << std::right << "Index" << "|";
	std::cout << std::setw(10) << std::right << "First name" << "|";
	std::cout << std::setw(10) << std::right << "Last name" << "|";
	std::cout << std::setw(10) << std::right << "Nickname";
	std::cout << std::endl;
	for (int i = 0; i < 8; i++) {
		if (contacts[i].getIndex() == 0)
			break;
		std::cout << std::setw(10) << std::right << contacts[i].getIndex() << "|";
		std::cout << std::setw(10) << std::right << (contacts[i].getFirstName().length() > 10 ? contacts[i].getFirstName().substr(0, 9) + "." : contacts[i].getFirstName()) << "|";
		std::cout << std::setw(10) << std::right << (contacts[i].getLastName().length() > 10 ? contacts[i].getLastName().substr(0, 9) + "." : contacts[i].getLastName()) << "|";
		std::cout << std::setw(10) << std::right << (contacts[i].getNickName().length() > 10 ? contacts[i].getNickName().substr(0, 9) + "." : contacts[i].getNickName());
		std::cout << std::endl;
	}
	return;
}

void	printContact(Contact contact) {

	std::cout << "First name: " << contact.getFirstName() << std::endl;
	std::cout << "Last name: " << contact.getLastName() << std::endl;
	std::cout << "Nickname: " << contact.getNickName() << std::endl;
	std::cout << "Phone number: " << contact.getPhone() << std::endl;
	std::cout << "Darkest secret: " << contact.getSecret() << std::endl;
	return;
}

void	PhoneBook::search( void ) const {

	std::string	input;
	int			index;

	std::cout << std::endl;
	if (this->contacts[0].getIndex() == 0) {
		std::cout << "-- There are no contacts to show --" << std::endl;
		return;
	}
	printContactsList(this->contacts);
	std::cout << std::endl << ">> Select index: ";
	std::getline(std::cin, input);
	std::cout << std::endl;
	index = std::atoi(input.c_str()) - 1;
	if (index < 0 || index > 7 || this->contacts[index].getIndex() == 0)
		std::cout << "--  A contact with this index does not exist --" << std::endl;
	else
		printContact(this->contacts[index]);
	return;
}
