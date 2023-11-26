/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:24:54 by esali             #+#    #+#             */
/*   Updated: 2023/11/25 22:41:56 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{

		std::cout << "***CORRECT ANIMALS***" << std::endl;
	{
		Animal a1;
		Animal a2;
		Animal *cat = new Cat();
		std::cout << std::endl;

		std::cout << a1.getType() << std::endl;
		std::cout << a2.getType() << std::endl;
		std::cout << cat->getType() << std::endl;
		a1.makeSound();
		a2.makeSound();
		cat->makeSound();
		std::cout << std::endl;
		delete (cat);
	}
		std::cout << std::endl;
	{
		const Animal *meta = new Animal();
		const Animal *j = new Dog();
		const Animal *i = new Cat();

		std::cout << std::endl;
		std::cout << meta->getType() << " " << std::endl;
		std::cout << j->getType() << " " << std::endl;
		std::cout << i->getType() << " " << std::endl;
		i->makeSound();
		j->makeSound();
		meta->makeSound();
		std::cout << std::endl;
		delete meta;
		delete i;
		delete j;
	}
		std::cout << std::endl;
	{
		std::cout << "***WRONG ANIMALS***" << std::endl;
		const WrongAnimal *meta2 = new WrongAnimal();
		const WrongAnimal *j2 = new WrongCat();
		std::cout << std::endl;
		std::cout << meta2->getType() << " " << std::endl;
		std::cout << j2->getType() << " " << std::endl;
		meta2->makeSound();
		j2->makeSound();
		std::cout << std::endl;
		delete meta2;
		delete j2;

		return 0;
	}

}
