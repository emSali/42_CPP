/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:49:42 by esali             #+#    #+#             */
/*   Updated: 2023/11/22 17:50:12 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

Weapon::Weapon(std::string type) : type(type) {
	return ;
}

Weapon::~Weapon(void) {
	return ;
}

std::string const & Weapon::getType(void) const {
	return (this->type);
}

void Weapon::setType(std::string type) {
	this->type = type;
}
