/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:24:54 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 21:45:02 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongCat.hpp"

int main(void)
{
	const Animal *meta = new Animal();
	const Animal *j = new Dog();
	const Animal *i = new Cat();

	std::cout << std::endl;
	std::cout << "***CORRECT ANIMALS***" << std::endl;
	std::cout << meta->getType() << " " << std::endl;
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();
	j->makeSound();
	meta->makeSound();
	i = j;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound();

	std::cout << std::endl;
	std::cout << "***WRONG ANIMALS***" << std::endl;
	const WrongAnimal *meta2 = new WrongAnimal();
	const WrongAnimal *j2 = new WrongCat();
	std::cout << meta2->getType() << " " << std::endl;
	std::cout << j2->getType() << " " << std::endl;
	meta2->makeSound();
	j2->makeSound();

	std::cout << std::endl;
	delete meta;
	delete i;
	//delete j;
	delete meta2;
	delete j2;

	return 0;
}
