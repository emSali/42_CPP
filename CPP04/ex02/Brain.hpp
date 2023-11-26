/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/24 21:56:05 by esali             #+#    #+#             */
/*   Updated: 2023/11/26 15:28:17 by esali            ###   ########.fr       */
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

		void setIdea(int index, std::string idea);
		std::string getIdea(int index) const ;

	private:
		std::string _ideas[100];
};

#endif
