
#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), ScavTrap(), FragTrap() {
	this->_name = "";
	std::cout << "DiamondTrap default constructor called" << std::endl;
	return;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name") ,ScavTrap(name), FragTrap(name) {
	this->_name = name;
	std::cout << "DiamondTrap constructor called" << std::endl;
	this->_hitPoints = FragTrap::_hitPoints;
	this->_maxHitPoints = this->_hitPoints;
	this->_energyPoints = ScavTrap::_energyPoints;
	this->_attackDamage = FragTrap::_attackDamage;
	return;
}

DiamondTrap::DiamondTrap(const DiamondTrap &copy) : ClapTrap(copy), ScavTrap(copy), FragTrap(copy) {
	std::cout << "DiamondTrap copy constructor called" << std::endl;
	*this = copy;
	return;
}

DiamondTrap::~DiamondTrap(void) {
	std::cout << "DiamondTrap destructor called" << std::endl;
	return;
}

DiamondTrap &DiamondTrap::operator=(const DiamondTrap &src) {
	std::cout << "DiamondTrap copy assignment operator called" << std::endl;
	this->_name = src._name;
	this->_maxHitPoints = src._maxHitPoints;
	this->_hitPoints = src._hitPoints;
	this->_energyPoints = src._energyPoints;
	this->_attackDamage = src._attackDamage;
	return (*this);
}

void DiamondTrap::whoAmI(void) {
	std::cout << "DiamondTrap name: " << this->_name << std::endl;
	std::cout << "ClapTrap name: " << ClapTrap::_name << std::endl;
	return;
}
