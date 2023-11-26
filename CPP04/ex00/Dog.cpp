/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:06:03 by esali             #+#    #+#             */
/*   Updated: 2023/11/26 15:21:36 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog(void) : Animal("Dog") {
	std::cout << "Dog default constructor called" << std::endl;
	this->_type = "Dog";
	return;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
	std::cout << "Dog copy constructor called" << std::endl;
	*this = copy;
	return;
}

Dog::~Dog(void) {
	std::cout << "Dog destructor called" << std::endl;
	return;
}

Dog &Dog::operator=(const Dog &src) {
	std::cout << "Dog assignment operator called" << std::endl;
	this->_type = src.getType();
	return (*this);
}

void Dog::makeSound(void) const {
	std::cout << "Wuff" << std::endl;
	return;
}
