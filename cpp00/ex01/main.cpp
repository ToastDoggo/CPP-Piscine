/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rehernan <rehernan@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 20:03:35 by rehernan          #+#    #+#             */
/*   Updated: 2023/03/22 17:29:37 by rehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <cstdlib>
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	theBook;
	std::string userInput;

	std::cout << "Welcome to he- I mean, to our PhoneBoook!" << std::endl;
	std::cout << "What do you want to do? ADD, SEARCH or EXIT?" << std::endl;
	while (std::getline(std::cin, userInput))
	{
		if (!userInput.compare("ADD"))
			theBook.add_contact();
		else if (!userInput.compare("SEARCH"))
			theBook.search_contact();
		else if (!userInput.compare("EXIT"))
			break	;
		else
			std::cout << "Let me repeat that for you:" << std::endl;
		std::cout << "ADD, SEARCH or EXIT?" << std::endl;
	}
	exit (0);
}
