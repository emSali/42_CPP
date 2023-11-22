/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:10:03 by esali             #+#    #+#             */
/*   Updated: 2023/11/22 16:42:10 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(std::string name);
		~Zombie(void);
		void	announce(void);

	private:
		std::string _name;
};

void randomChump(std::string name);
Zombie* newZombie(std::string name);

#endif
