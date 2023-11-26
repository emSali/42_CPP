/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.hpp                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:20:16 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 21:21:06 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef WRONGANIMAL_H
# define WRONGANIMAL_H

#include <iostream>
#include <string>

class WrongAnimal {
	public:
		WrongAnimal(void);
		WrongAnimal(const WrongAnimal &copy);
		WrongAnimal(std::string type);
		virtual ~WrongAnimal(void);

		WrongAnimal &operator=(const WrongAnimal &src);

		std::string getType(void) const;
		void makeSound(void) const;

	protected:
		std::string _type;
};

#endif
