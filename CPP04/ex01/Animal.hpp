/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:59:18 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 21:14:23 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_H
# define ANIMAL_H

# include <iostream>

class Animal {
	public:
		Animal(void);
		Animal(const Animal &copy);
		Animal(std::string type);
		virtual ~Animal(void);

		Animal &operator=(const Animal &src);

		std::string getType(void) const;
		virtual void makeSound(void) const;

	protected:
		std::string type;
};

#endif
