/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 14:07:53 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 17:18:24 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ScavTrap() {
	std::cout << "ScavTrap default constructor called" << std::endl;
	this->_maxHitPoints = 100;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(std::string name) : ScavTrap(name) {
	std::cout << "ScavTrap constructor called" << std::endl;
	this->_maxHitPoints = 100;
	this->_hitPoints = 100;
	this->_energyPoints = 50;
	this->_attackDamage = 20;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ScavTrap(copy) {
	std::cout << "ScavTrap copy constructor called" << std::endl;
	*this = copy;
	return;
}

ScavTrap::~ScavTrap(void) {
	std::cout << "ScavTrap destructor called" << std::endl;
	return;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &src) {
	std::cout << "ScavTrap copy assignment operator called" << std::endl;
	this->_name = src._name;
	this->_maxHitPoints = src._maxHitPoints;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

void ScavTrap::guardGate(void) {
	std::cout << "ScavTrap " << this->_name << " is now in Gate keeper mode" << std::endl;
	return;
}

void ScavTrap::attack(const std::string &target) {
	if (this->_energyPoints < 1)
	{
		std::cout << "ScavTrap " << this->_name << " is out of energy" << std::endl;
		return;
	}
	else if (this->_hitPoints < 1)
	{
		std::cout << "ScavTrap " << this->_name << " is dead" << std::endl;
		return;
	}
	std::cout << "ScavTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
	this->_energyPoints -= 1;
	return;
}
