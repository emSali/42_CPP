/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:06:33 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 22:22:57 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
	this->brain = new Brain();
	return;
}

Cat::Cat(const Cat &copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
	return;
}

Cat::~Cat(void) {
	delete this->brain;
	std::cout << "Cat destructor called" << std::endl;
	return;
}

Cat &Cat::operator=(const Cat &src) {
	std::cout << "Cat assignment operator called" << std::endl;
	this->type = src.getType();
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "Miao" << std::endl;
	return;
}
