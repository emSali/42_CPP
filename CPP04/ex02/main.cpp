/* ************************************************************************** */
/*																			*/
/*														:::	  ::::::::   */
/*   main.cpp										   :+:	  :+:	:+:   */
/*													+:+ +:+		 +:+	 */
/*   By: esali <esali@student.42.fr>				+#+  +:+	   +#+		*/
/*												+#+#+#+#+#+   +#+		   */
/*   Created: 2023/11/24 21:24:54 by esali			 #+#	#+#			 */
/*   Updated: 2023/11/24 22:08:24 by esali			###   ########.fr	   */
/*																			*/
/* ************************************************************************** */

#include "Dog.hpp"
#include "Cat.hpp"

int main(void)
{
	//AAnimal test;

	static int array_size = 4;
	int i = 0;
	const AAnimal *animals[array_size];

	while (i < array_size / 2) {
		animals[i++] = new Dog();
	}
	while (i < array_size) {
		animals[i++] = new Cat();
	}
	for (int j = 0; j < array_size; j++) {
		animals[j]->makeSound();
	}
	for (int j = 0; j < array_size; j++) {
		delete animals[j];
	}

	std::cout << std::endl << std::endl;
	Dog basic;
	std::cout << basic.getType() << ": ";
	basic.makeSound();
	{
		std::cout << std::endl;
		Dog tmp = basic;
		std::cout << basic.getType() << ": ";
		basic.makeSound();
	}
	std::cout << std::endl;


	return (0);
}
