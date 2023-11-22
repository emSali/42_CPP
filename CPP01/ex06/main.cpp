/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/22 21:15:02 by esali             #+#    #+#             */
/*   Updated: 2023/11/22 21:28:27 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main( int argc, char **argv ) {
	Harl harl;

	if (argc != 2) {
		std::cout << "Wrong number of arguments" << std::endl;
		return (1);
	}
	harl.complain(argv[1]);
}
