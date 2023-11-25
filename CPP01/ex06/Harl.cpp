/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:56:28 by esali             #+#    #+#             */
/*   Updated: 2023/11/22 21:24:01 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl( void ) {
	return ;
}

Harl::~Harl( void ) {
	return ;
}

void Harl::debug( void ) const {
	std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-special-ketchup burger.\nI really do!" << std::endl;
	return;
}

void Harl::info( void ) const {
	this->debug();
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! \nIf you did, I wouldn’t be asking for more!" << std::endl;
	return;
}

void Harl::warning( void ) const{
	this->info();
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void Harl::error( void ) const{
	this->warning();
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return;
}

void Harl::complain(std::string level) const {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
	int i = 0;

	while (i < 4) {
		if (levels[i].compare(level) == 0) {
			std::cout << "[ " << levels[i] << " ]" << std::endl;
			break;
		}
		i++;
	}

	switch(i) {
		case 0:
			this->debug();
			break;
		case 1:
			this->info();
			break;
		case 2:
			this->warning();
			break;
		case 3:
			this->error();
			break;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]\n" << std::endl;
			break;
	}
}
