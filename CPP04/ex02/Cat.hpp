/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:05:24 by esali             #+#    #+#             */
/*   Updated: 2023/11/26 15:19:01 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CAT_H
# define CAT_H

#include "AAnimal.hpp"
#include "Brain.hpp"

class Cat : public AAnimal {
	public:
		Cat(void);
		Cat(const Cat &copy);
		virtual ~Cat(void);
		Cat &operator=(const Cat &src);

		virtual void makeSound(void) const;
		Brain getBrain() const;

	private:
		Brain *_brain;
};

#endif
