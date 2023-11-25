/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 16:55:58 by esali             #+#    #+#             */
/*   Updated: 2023/11/20 16:24:36 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact() {
	this->index = 0;
	return;
}

Contact::~Contact( void ) {
	return;
}

std::string	Contact::getFirstName(void) const {
	return this->firstName;
}

std::string	Contact::getLastName(void) const {
	return this->lastName;
}

std::string	Contact::getNickName(void) const {
	return this->nickName;
}

std::string	Contact::getPhone(void) const {
	return this->phone;
}

std::string	Contact::getSecret(void) const {
	return this->secret;
}

int	Contact::getIndex(void) const {
	return this->index;
}

void	Contact::setIndex(int index) {
	this->index = index;
	return;
}

void	Contact::setFirstName(std::string firstName) {
	this->firstName = firstName;
	return;
}

void	Contact::setLastName(std::string lastName) {
	this->lastName = lastName;
	return;
}

void	Contact::setNickName(std::string nickName) {
	this->nickName = nickName;
	return;
}

void	Contact::setPhone(std::string phone) {
	this->phone = phone;
	return;
}

void	Contact::setSecret(std::string secret) {
	this->secret = secret;
	return;
}
