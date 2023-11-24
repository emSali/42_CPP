/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:02:37 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 16:54:32 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main( void ) {

	FragTrap frag("Mario");
	frag.highFiveGuys();
	frag.attack("Bowser");
	frag.takeDamage(50);
	frag.beRepaired(30);
	std::cout << std::endl;

	FragTrap frag2(FragTrap ("Peach"));
	frag2.highFiveGuys();
	frag2.attack("Bowser");
	frag2.takeDamage(50);
	frag2.beRepaired(30);
	std::cout << std::endl;

	ScavTrap scav = ScavTrap ("Luigi");
	scav.guardGate();
	scav.attack("Mario");
	scav.takeDamage(50);
	scav.beRepaired(30);
	std::cout << std::endl;

}
