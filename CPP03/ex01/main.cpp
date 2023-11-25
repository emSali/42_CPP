/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:02:37 by esali             #+#    #+#             */
/*   Updated: 2023/11/25 18:33:12 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main( void ) {


	ScavTrap scav("Mario");
	scav.guardGate();
	scav.attack("Bowser");
	scav.takeDamage(50);
	scav.beRepaired(30);
	std::cout << std::endl;

	ScavTrap scav2(ScavTrap ("Peach"));
	scav2.guardGate();
	scav2.attack("Bowser");
	scav2.takeDamage(50);
	scav2.beRepaired(30);
	std::cout << std::endl;

	ScavTrap scav3 = ScavTrap ("Luigi");
	scav3.guardGate();
	scav3.attack("Mario");
	scav3.takeDamage(50);
	scav3.beRepaired(30);
	scav3.takeDamage(70);
	scav3.takeDamage(70);
	scav3.beRepaired(30);
	std::cout << std::endl;

}
