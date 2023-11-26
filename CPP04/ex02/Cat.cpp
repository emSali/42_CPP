/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:06:33 by esali             #+#    #+#             */
/*   Updated: 2023/11/26 15:28:38 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat(void) : AAnimal("Cat") {
	std::cout << "Cat default constructor called" << std::endl;
	this->_brain = new Brain();
	return;
}

Cat::Cat(const Cat &copy): AAnimal(copy) {
	std::cout << "Cat copy constructor called" << std::endl;
	*this = copy;
	return;
}

Cat::~Cat(void) {
	delete this->_brain;
	std::cout << "Cat destructor called" << std::endl;
	return;
}

Cat &Cat::operator=(const Cat &src) {
	std::cout << "Cat assignment operator called" << std::endl;
	this->_type = src.getType();
	this->_brain = new Brain(src.getBrain());
	return (*this);
}

void Cat::makeSound(void) const {
	std::cout << "Miao" << std::endl;
	return;
}

Brain Cat::getBrain(void) const {
	return (*this->_brain);
}
