/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:02:37 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 13:06:48 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main( void ) {

	ClapTrap fighter("Mario");

	fighter.attack("Bowser");
	fighter.takeDamage(5);
	fighter.beRepaired(3);
	fighter.attack("Bowser");
	fighter.attack("Bowser");
	fighter.attack("Bowser");
	fighter.attack("Bowser");
	fighter.attack("Bowser");
	fighter.attack("Bowser");
	fighter.attack("Bowser");
	fighter.attack("Bowser");
	fighter.attack("Bowser");
	fighter.beRepaired(3);
	fighter.takeDamage(10);
	fighter.takeDamage(10);
	fighter.attack("Bowser");
	fighter.beRepaired(3);

	return 0;

}
