/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:55:58 by esali             #+#    #+#             */
/*   Updated: 2023/11/17 17:26:12 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(
	std::string const firstName,
	std::string const lastName,
	std::string const nickName,
	std::string const phone,
	std::string const secret
) :
	firstName(firstName),
	lastName(lastName),
	nickName(nickName),
	phone(phone),
	secret(secret) {
	return;
}

Contact::~Contact( void ) {
	return;
}

std::string Contact::getFirstName(void) const {
	return this->firstName;
}

std::string Contact::getLastName(void) const {
	return this->lastName;
}

std::string Contact::getNickName(void) const {
	return this->nickName;
}

std::string Contact::getPhone(void) const {
	return this->phone;
}
std::string Contact::getSecret(void) const {
	return this->secret;
}
