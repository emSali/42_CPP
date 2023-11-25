/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 17:48:03 by esali             #+#    #+#             */
/*   Updated: 2023/11/22 17:48:55 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WEAPON_H
# define WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
	public:
		Weapon(std::string type);
		~Weapon(void);
		std::string const & getType(void) const;
		void setType(std::string type);

	private:
		std::string type;
};

#endif
