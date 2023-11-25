/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 20:56:28 by esali             #+#    #+#             */
/*   Updated: 2023/11/22 21:16:04 by esali            ###   ########.fr       */
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
	std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! \nIf you did, I wouldn’t be asking for more!" << std::endl;
	return;
}

void Harl::warning( void ) const{
	std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month." << std::endl;
	return;
}

void Harl::error( void ) const{
	std::cout << "This is unacceptable, I want to speak to the manager now." << std::endl;
	return;
}

void Harl::complain(std::string level) const {
	std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*funcs[])( void ) const = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for (int i = 0; i < 4; i++)
		if (levels[i].compare(level) == 0)
			(this->*funcs[i])();
}
