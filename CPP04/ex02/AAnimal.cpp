/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:12:18 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 22:22:49 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal(void) : type("some AAnimal"){
	std::cout << "AAnimal default constructor called" << std::endl;
}

AAnimal::AAnimal(const AAnimal &copy) {
	std::cout << "AAnimal copy constructor called" << std::endl;
	*this = copy;
}

AAnimal::AAnimal(std::string type) : type(type) {
	std::cout << "AAnimal parametric constructor called" << std::endl;
}

AAnimal::~AAnimal(void) {
	std::cout << "AAnimal destructor called" << std::endl;
}

AAnimal &AAnimal::operator=(const AAnimal &src) {
	std::cout << "AAnimal assignment operator called" << std::endl;
	this->type = src.getType();
	return (*this);
}

std::string AAnimal::getType(void) const {
	return (this->type);
}
