/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 13:02:37 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 18:03:10 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

int main( void ) {

	DiamondTrap dt("Peach");

	dt.attack("Bowser");
	dt.guardGate();
	dt.takeDamage(50);
	dt.beRepaired(90);
	dt.highFivesGuys();
	dt.whoAmI();
	dt.takeDamage(300);
	dt.whoAmI();

	return (0);
}
