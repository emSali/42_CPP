/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:15:29 by esali             #+#    #+#             */
/*   Updated: 2023/11/22 16:49:14 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"

int main(void) {
	Zombie* horde = zombieHorde(10, "Hodor");
	for (int i = 0; i < 10; i++)
		horde[i].announce();
	delete [] horde;
	return (0);
}
