/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 12:24:07 by esali             #+#    #+#             */
/*   Updated: 2023/11/25 18:25:45 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void) : _name(""), _hitPoints(10), _energyPoints(10), _attackDamage(0), _maxHitPoints(10) {
	std::cout << "ClapTrap default constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(std::string name) : _name(name), _hitPoints(10), _energyPoints(10), _attackDamage(0), _maxHitPoints(10) {
	std::cout << "ClapTrap constructor called" << std::endl;
	return;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
	std::cout << "ClapTrap copy constructor called" << std::endl;
	*this = copy;
	return;
}

ClapTrap::~ClapTrap(void) {
	std::cout << "ClapTrap destructor called" << std::endl;
	return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &src) {
	std::cout << "ClapTrap copy assignment operator called" << std::endl;
	this->_name = src._name;
	this->_maxHitPoints = src._maxHitPoints;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

void ClapTrap::attack(const std::string &target) {
	if (this->_hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		return;
	}
	else if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy" << std::endl;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " attacks " << target << ", causing " << this->_attackDamage << " points of damage" << std::endl;
	this->_energyPoints -= 1;
	return;
}

void ClapTrap::takeDamage(unsigned int amount) {
	if (this->_hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		return;
	}
	else if (amount < 1)
	{
		std::cout << "ClapTrap " << this->_name << " takes no damage" << std::endl;
		return;
	}
	else if (amount > (unsigned int)this->_hitPoints)
	{
		std::cout << "ClapTrap " << this->_name << " takes " << this->_hitPoints << " points of damage" << std::endl;
		this->_hitPoints = 0;
		return;
	}
	std::cout << "ClapTrap " << this->_name << " takes " << amount << " points of damage" << std::endl;
	this->_hitPoints -= amount;
	return;
}

void ClapTrap::beRepaired(unsigned int amount) {
	if (this->_hitPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is dead" << std::endl;
		return;
	}
	else if (this->_energyPoints < 1)
	{
		std::cout << "ClapTrap " << this->_name << " is out of energy" << std::endl;
		return;
	}
	else if (amount < 1)
	{
		std::cout << "ClapTrap " << this->_name << " takes no healing" << std::endl;
		return;
	}
	else if (((int) amount + this->_hitPoints) >= this->_maxHitPoints)
	{
		std::cout << "ClapTrap " << this->_name << " is fully healed" << std::endl;
		this->_hitPoints = this->_maxHitPoints;
	}
	else {
		std::cout << "ClapTrap " << this->_name << " is healed for " << amount << " points" << std::endl;
		this->_hitPoints += amount;
	}
	this->_energyPoints -= 1;
	return;
}
