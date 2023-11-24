/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 22:30:26 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 22:48:16 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AMATERIA_H
#define AMATERIA_H

#include <iostream>
#include <string>
#include "ICharacter.hpp"

class AMateria
{
	public:
		AMateria(void);
		AMateria(const AMateria &copy);
		virtual ~AMateria(void);
		AMateria &operator=(const AMateria &src);
		AMateria(std::string const &type);

		std::string const &getType() const; // Returns the materia type
		virtual AMateria *clone() const = 0;
		virtual void use(ICharacter &target);

	protected:
		std::string _type;
};

#endif
