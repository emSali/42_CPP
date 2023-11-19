/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:48:20 by esali             #+#    #+#             */
/*   Updated: 2023/11/19 11:11:57 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook( void ) {
	return;
}

PhoneBook::~PhoneBook( void ) {
	return;
}

void	PhoneBook::add( void ) {
	Contact newContact = getNewContact();

	if (this->contacts )
	{

	}
	return;
}

void	PhoneBook::search( void ) const {

	return;
}

Contact	getNewContact( void ) {

	std::string firstName;
	std::string	lastName;
	std::string	nickName;
	std::string	phone;
	std::string	secret;

	while (firstName.empty()) {
		std::cout << "First Name: ";
		std::cin >> firstName;
	}
	while (lastName.empty()) {
		std::cout << "Last Name: ";
		std::cin >> lastName;
	}
	while (nickName.empty()) {
		std::cout << "Nickname: ";
		std::cin >> nickName;
	}
	while (phone.empty()) {
		std::cout << "Phone Number: ";
		std::cin >> phone;
	}
	while (secret.empty()) {
		std::cout << "Darkest Secret: ";
		std::cin >> secret;
	}
	Contact contact = Contact(firstName, lastName, nickName, phone, secret);
	return (contact);
}
