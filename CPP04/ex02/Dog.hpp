/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:09:41 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 22:23:45 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_H
# define DOG_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Dog : public AAnimal {
	public:
		Dog(void);
		Dog(const Dog &copy);
		virtual ~Dog(void);
		Dog &operator=(const Dog &src);

		virtual void makeSound(void) const;

	private:
		Brain *brain;
};

#endif
