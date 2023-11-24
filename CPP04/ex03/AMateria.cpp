/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 22:46:18 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 22:47:50 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria(void) : _type("default") {
	//std::cout << "AMateria default constructor called" << std::endl;
	return;
}

AMateria::AMateria(AMateria const &cpy) {
	//std::cout << "AMateria copy constructor called" << std::endl;
	*this = cpy;
	return;
}

AMateria::~AMateria(void) {
	//std::cout << "AMateria destructor called" << std::endl;
	return;
}

AMateria &AMateria::operator=(AMateria const &src) {
	//std::cout << "AMateria assignment operator called" << std::endl;
	this->_type = src.getType();
	return (*this);
}
