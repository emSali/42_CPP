/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:06:33 by esali             #+#    #+#             */
/*   Updated: 2023/11/26 13:37:06 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
	this->_type = "Cat";
	return;
}

Cat::Cat(const Cat &copy): Animal(copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
	return;
}

Cat::~Cat(void) {
	std::cout << "Cat destructor called" << std::endl;
	return;
}

Cat &Cat::operator=(const Cat &src) {
	std::cout << "Cat assignment operator called" << std::endl;
	this->_type = src.getType();
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "Miao" << std::endl;
	return;
}
