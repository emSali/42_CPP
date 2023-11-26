/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:12:18 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 21:26:58 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal(void) : _type("some Animal"){
	std::cout << "Animal default constructor called" << std::endl;
	return;
}

Animal::Animal(const Animal &copy) {
	std::cout << "Animal copy constructor called" << std::endl;
	*this = copy;
	return;
}

Animal::Animal(std::string type) : _type(type) {
	std::cout << "Animal parametric constructor called" << std::endl;
	return;
}

Animal::~Animal(void) {
	std::cout << "Animal destructor called" << std::endl;
	return;
}

Animal &Animal::operator=(const Animal &src) {
	std::cout << "Animal assignment operator called" << std::endl;
	this->_type = src.getType();
	return (*this);
}

void Animal::makeSound(void) const {
	std::cout << "Animal sound" << std::endl;
	return;
}

std::string Animal::getType(void) const {
	return (this->_type);
}
