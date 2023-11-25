/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongWrongCat.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:18:34 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 21:18:34 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat(void) : WrongAnimal("WrongCat") {
	std::cout << "WrongCat default constructor called" << std::endl;
	return;
}

WrongCat::WrongCat(const WrongCat &copy) {
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = copy;
	return;
}

WrongCat::~WrongCat(void) {
	std::cout << "WrongCat destructor called" << std::endl;
	return;
}

WrongCat &WrongCat::operator=(const WrongCat &src) {
	std::cout << "WrongCat assignation operator called" << std::endl;
	this->type = src.getType();
	return (*this);
}

void WrongCat::makeSound(void) const {
	std::cout << "Miao" << std::endl;
	return;
}
