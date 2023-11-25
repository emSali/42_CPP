/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:51:05 by esali             #+#    #+#             */
/*   Updated: 2023/11/22 18:14:03 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &weapon) : name(name), weapon(weapon) {
	return ;
}

HumanA::~HumanA(void) {
	return ;
}

void HumanA::attack(void) const {
	std::cout << this->name << " attacks with their " << this->weapon.getType() << std::endl;
}
