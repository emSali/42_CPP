/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:58:56 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 22:22:32 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	std::cout << "Brain default constructor called" << std::endl;
	return;
}

Brain::Brain(const Brain &copy) {
	std::cout << "Brain copy constructor called" << std::endl;
	*this = copy;
	return;
}

Brain::~Brain(void) {
	std::cout << "Brain destructor called" << std::endl;
	return;
}

Brain &Brain::operator=(const Brain &src) {
	std::cout << "Brain assignment operator called" << std::endl;
	for (int i = 0; i < 100; i++)
		this->setIdea(i, src.ideas[i]);
	return (*this);
}

void Brain::setIdea(int index, std::string idea) {
	this->ideas[index] = idea;
	return;
}
