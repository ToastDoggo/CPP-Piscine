/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rehernan <rehernan@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/14 16:12:44 by rehernan          #+#    #+#             */
/*   Updated: 2023/03/20 18:51:36 by rehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <locale>

/**
 * @brief Prints on screen a phrase (or many) inputted when called as uppercase.
 * 
 * @param argc		Number of arguments.
 * @param argv 		Arguments.
 * @return int	-	Exit status.
 */

int	main(int argc, char **argv)
{
	int		letters = -1;
	int		words = 0;

	if (argc == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
		return (0);
	}
	while (++words < argc)
	{
		while (argv[words][++letters])
			std::cout << (char)toupper(argv[words][letters]);
		letters = -1;
	}
	std::cout << std::endl;
	return (0);
}
