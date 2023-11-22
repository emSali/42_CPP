/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:15:29 by esali             #+#    #+#             */
/*   Updated: 2023/11/22 16:24:44 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie*	zombie = newZombie("Zoro");
	zombie->announce();
	randomChump("Zonia");
	delete zombie;
	return (0);
}
