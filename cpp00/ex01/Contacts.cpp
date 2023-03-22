/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contacts.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rehernan <rehernan@students.42wolfsburg    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/20 19:48:31 by rehernan          #+#    #+#             */
/*   Updated: 2023/03/22 21:22:21 by rehernan         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contacts.hpp"

/**
 * @brief Construct a new Contact:: Contact object
 * 
 */
Contact::Contact()
{
	_index = 0;

	return	;
}

/**
 * @brief Destroy the Contact:: Contact object
 * 
 */
Contact::~Contact()
{
	return	;
}

std::string	Contact::cut_string(std::string _contactsData)
{
	if (_contactsData.length() > 9)
		return (_contactsData.substr(0, 9) + ".");
	else
		return (_contactsData);
}

/**
 * @brief Displays all the contacts stored in the phonebook.
 * 
 * @param index 	-	The contacts to iterate through.
 */
void	Contact::get_contacts(int index)
{
	std::cout << std::setw(10) << index << " | ";
	std::cout << std::setw(10) << cut_string(_contactsData[FIRST_NAME]) << " | ";
	std::cout << std::setw(10) << cut_string(_contactsData[LAST_NAME]) << " | ";
	std::cout << std::setw(10) << cut_string(_contactsData[NICKNAME]) << std::endl;
}

/**
 * @brief Displays the contact selected on SEARCH.
 * 
 */
void	Contact::get_one_contact()
{
		std::cout << "First name:\t" << _contactsData[FIRST_NAME] << std::endl;
		std::cout << "Last name:\t" << _contactsData[LAST_NAME] << std::endl;
		std::cout << "Nickname:\t" << _contactsData[NICKNAME] << std::endl;
		std::cout << "Phonenumber:\t" << _contactsData[PHONENUMBER] << std::endl;
		std::cout << "Darkest secret:\t" << _contactsData[DARK_SECRET] << std::endl;
}

/**
 * @brief Checks if the last line is blank.
 * 
 * @param _contactsData 
 * @return true 	-	If it is blank.
 * @return false 	-	If there is a value.
 */
bool	Contact::is_blank(std::string _contactsData)
{
	if (_contactsData.length() == 0)
	{
		std::cout << "Please, input a value." << std::endl;
		return (true);
	}
	return (false);
}

/**
 * @brief Fills up the phonebook with the data inputted
 *  		by the user. If the user does not input data,
 * 			it will ask again for the last field not filled.
 */
void	Contact::set_contact()
{
	int		itr = 0;

	while (itr < 5)
	{
		if (itr == FIRST_NAME)
			std::cout << "First name:" << std::endl;
		else if (itr == LAST_NAME)
			std::cout << "Last name:" << std::endl;
		else if (itr == NICKNAME)
			std::cout << "Nickname:" << std::endl;
		else if (itr == PHONENUMBER)
			std::cout << "Phonenumber:" << std::endl;
		else if (itr == DARK_SECRET)
			std::cout << "Darkest secret:" << std::endl;
		std::getline(std::cin, _contactsData[itr]);
		if (std::cin.fail())
			std::cin.clear();
		if(is_blank(_contactsData[itr]) == false)
			itr++;
	}
	_index++;
}
