/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: esali <esali@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/10 15:42:37 by esali             #+#    #+#             */
/*   Updated: 2023/11/10 16:31:11 by esali            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <iostream>

int main(int argc, char **argv)
{
	int	j;

	if (argc == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	else
	{
		for (int i = 1; i < argc; i++)
		{
			j = 0;
			while (argv[i][j])
			{
				if (argv[i][j] > 96 && argv[i][j] < 123)
					argv[i][j] -= 32;
				j++;
			}
			std::cout << argv[i];
		}
		std::cout << std::endl;
	}
	return (0);
}