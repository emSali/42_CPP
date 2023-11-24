/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:58:56 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 22:04:13 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain(void) {
	return;
}

Brain::Brain(const Brain &copy) {
	*this = copy;
	return;
}

Brain::~Brain(void) {
	return;
}

Brain &Brain::operator=(const Brain &src) {
	for (int i = 0; i < 100; i++)
		this->setIdea(i, src.ideas[i]);
	return (*this);
}

void Brain::setIdea(int index, std::string idea) {
	this->ideas[index] = idea;
	return;
}
