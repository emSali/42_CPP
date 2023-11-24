/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:05:24 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 22:05:05 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "Animal.hpp"
#include "Brain.hpp"

class Cat : public Animal {
	public:
		Cat(void);
		Cat(const Cat &copy);
		virtual ~Cat(void);
		Cat &operator=(const Cat &src);
		virtual void makeSound(void) const;

	private:
		Brain *brain;
};

#endif
