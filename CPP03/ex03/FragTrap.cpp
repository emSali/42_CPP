/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 16:43:04 by esali             #+#    #+#             */
/*   Updated: 2023/11/25 18:27:54 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap() {
	std::cout << "FragTrap default constructor called" << std::endl;
	this->_maxHitPoints = 100;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name) {
	std::cout << "FragTrap constructor called" << std::endl;
	this->_maxHitPoints = 100;
	this->_hitPoints = 100;
	this->_energyPoints = 100;
	this->_attackDamage = 30;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy) {
	std::cout << "FragTrap copy constructor called" << std::endl;
	*this = copy;
	return;
}

FragTrap::~FragTrap(void) {
	std::cout << "FragTrap destructor called" << std::endl;
	return;
}

FragTrap &FragTrap::operator=(const FragTrap &src) {
	std::cout << "FragTrap copy assignment operator called" << std::endl;
	this->_name = src._name;
	this->_maxHitPoints = src._maxHitPoints;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

void FragTrap::highFivesGuys(void) {
	std::cout << "FragTrap " << this->_name << " wants a High Five!" << std::endl;
	return;
}

void FragTrap::attack(const std::string &target) {
	if (this->_hitPoints < 1)
	{
		std::cout << "FragTrap " << this->_name << " is dead" << std::endl;
		return;
	}
	else if (this->_energyPoints < 1)
	{
		std::cout << "FragTrap " << this->_name << " is out of energy" << std::endl;
		return;
	}
	std::cout << "FragTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
	this->_energyPoints -= 1;
	return;
}
