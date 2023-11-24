/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:56:05 by esali             #+#    #+#             */
/*   Updated: 2023/11/24 22:04:02 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef BRAIN_HPP
# define BRAIN_HPP

# include <iostream>
#include <string>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain &copy);
		~Brain(void);
		Brain &operator=(const Brain &src);
		void setIdea(int index, std::string idea);

	private:
		std::string ideas[100];
};

#endif
