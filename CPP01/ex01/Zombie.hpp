/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 16:10:03 by esali             #+#    #+#             */
/*   Updated: 2023/11/22 16:41:47 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ZOMBIE_H
# define ZOMBIE_H

#include <iostream>
#include <string>

class Zombie
{
	public:
		Zombie(void);
		~Zombie(void);
		void	announce(void);
		void	setName(std::string name);

	private:
		std::string _name;
};

Zombie* zombieHorde( int N, std::string name );

#endif
