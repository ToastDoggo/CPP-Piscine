/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rehernan <rehernan@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:16:05 by rehernan          #+#    #+#             */
/*   Updated: 2023/03/22 21:27:17 by rehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

/**
 * @brief Construct a new Phone Book:: Phone Book object
 * 
 */
PhoneBook::PhoneBook()
{
	_index = 0;

	return	;
}
/**
 * @brief Destroy the Phone Book:: Phone Book object
 * 
 */
PhoneBook::~PhoneBook()
{
	return	;
}

/**
 * @brief Removes the oldest contact by shifting one contact from the index.
 * 
 */
void	PhoneBook::remove_oldest()
{
	for (int itr = 0; itr < 7; itr++)
		_contacts[itr] = _contacts[itr + 1];
}

/**
 * @brief Checks if there is already more than 8 contacts to remove the oldest
 * 			one. Also calls the setter to input the new contact.
 * 
 */
void	PhoneBook::add_contact()
{
	if(_index > 7)
	{
		std::cout << "The PhoneBook is full." << std::endl;
		std::cout << "Removing oldest contact..." << std::endl;
		remove_oldest();
		_index--;
	}
	_contacts[_index].set_contact();
	_index++;
}

/**
 * @brief Gets the list of contacts.
 * 
 */
void	PhoneBook::get_phonebook()
{
	for (int itr = 0; itr < _index; itr++)
		_contacts[itr].get_contacts(itr + 1);
}

/**
 * @brief Searches for a contact inputted by the user.
 * 			Displays the current phonebook.
 * 
 */
void PhoneBook::search_contact()
{
	std::stringstream	ss;
	std::string			user_input;
	int					user_index;

	if (_index == 0)
	{
		std::cout << "*cricket noises* This is so empty..." << std::endl;
		return	;
	}
	get_phonebook();
	std::cout << "Select a contact (index):" << std::endl;
	std::getline(std::cin, user_input);
	ss << user_input;
	ss >> user_index;
	if (user_index > _index || user_index < 1)
		std::cout << "Invalid contact." << std::endl;
	else
		_contacts[user_index - 1].get_one_contact();
}
