/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   IMateriaSource.hpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 22:40:46 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 22:41:55 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef IMATERIASOURCE_H
#define IMATERIASOURCE_H

#include <iostream>
#include <string>
#include "AMateria.hpp"

class IMateriaSource
{
	public:
		IMateriaSource(void) {}
		IMateriaSource(const IMateriaSource &copy) {(void)copy;}
		IMateriaSource &operator=(const IMateriaSource &src) {(void)src; return (*this);}
		virtual ~IMateriaSource() {}
		virtual void learnMateria(AMateria *) = 0;
		virtual AMateria *createMateria(std::string const &type) = 0;
};

#endif
