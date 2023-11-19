/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:48:20 by esali             #+#    #+#             */
/*   Updated: 2023/11/19 20:00:21 by esali            ###   ########.fr       */
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
		std::cout << ">> " <<prompt;
		std::cin >> answer;
	}
	return (answer);
}

void	PhoneBook::add( void ) {

	static int	i = 0;

	this->contacts[i % 8].index = i + 1;
	std::cout << std::endl;
	this->contacts[i % 8].firstName = getDetail("First name: ");
	this->contacts[i % 8].lastName = getDetail("Last name: ");
	this->contacts[i % 8].nickName = getDetail("Nickname: ");
	this->contacts[i % 8].phone = getDetail("Phone number: ");
	this->contacts[i % 8].secret = getDetail("Darkest Secret: ");
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
		if (contacts[i].index == 0)
			break;
		std::cout << std::setw(10) << std::right << contacts[i].index << "|";
		std::cout << std::setw(10) << std::right << (contacts[i].firstName.length() > 10 ? contacts[i].firstName.substr(0, 9) + "." : contacts[i].firstName) << "|";
		std::cout << std::setw(10) << std::right << (contacts[i].lastName.length() > 10 ? contacts[i].lastName.substr(0, 9) + "." : contacts[i].lastName) << "|";
		std::cout << std::setw(10) << std::right << (contacts[i].nickName.length() > 10 ? contacts[i].nickName.substr(0, 9) + "." : contacts[i].nickName);
		std::cout << std::endl;
	}
	return;
}

void	printContact(Contact contact) {

	std::cout << std::endl;
	std::cout << "First name: " << contact.firstName << std::endl;
	std::cout << "Last name: " << contact.lastName << std::endl;
	std::cout << "Nickname: " << contact.nickName << std::endl;
	std::cout << "Phone number: " << contact.phone << std::endl;
	std::cout << "Darkest secret: " << contact.secret << std::endl;
	return;
}

void	PhoneBook::search( void ) const {

	std::string	input;
	int			index;

	std::cout << std::endl;
	if (this->contacts[0].index == 0) {
		std::cout << ">> There are no contacts to show" << std::endl;
		return;
	}
	printContactsList(this->contacts);
	std::cout << std::endl << ">> Select index: ";
	std::cin >> input;
	std::cout << std::endl;
	index = std::atoi(input.c_str()) - 1;
	if (index < 0 || index > 7 || this->contacts[index].index == 0)
		std::cout << ">> A contact with this index does not exist" << std::endl;
	else
		printContact(this->contacts[index]);
	return;
}
