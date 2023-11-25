/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:06:33 by esali             #+#    #+#             */
/*   Updated: 2023/11/25 22:40:12 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : Animal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
	this->brain = new Brain();
	return;
}

Cat::Cat(const Cat &copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*copy.brain);
	*this = copy;
	return;
}

Cat::~Cat(void) {
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
	return;
}

Cat &Cat::operator=(const Cat &src) {
	std::cout << "Cat assignation operator called" << std::endl;
	this->type = src.getType();
	this->brain = new Brain(*src.brain);
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "Miao" << std::endl;
	return;
}
