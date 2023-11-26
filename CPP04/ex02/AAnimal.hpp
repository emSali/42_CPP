/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 20:59:18 by esali             #+#    #+#             */
/*   Updated: 2023/11/26 15:24:23 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AANIMAL_H
# define AANIMAL_H

# include <iostream>

class AAnimal {
	public:
		AAnimal(void);
		AAnimal(const AAnimal &copy);
		AAnimal(std::string type);
		virtual ~AAnimal(void);

		AAnimal &operator=(const AAnimal &src);

		std::string getType(void) const;
		virtual void makeSound(void) const = 0;

	protected:
		std::string _type;
};

#endif
