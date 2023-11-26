/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:56:05 by esali             #+#    #+#             */
/*   Updated: 2023/11/26 15:27:40 by esali            ###   ########.fr       */
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
		virtual ~Brain(void);
		Brain &operator=(const Brain &src);
		std::string getIdea(int index) const;
		void setIdea(int index, std::string idea);

	private:
		std::string _ideas[100];
};

#endif
