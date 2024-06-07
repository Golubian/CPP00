/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:11:20 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/07 17:40:25 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Phonebook::contactAdd(void)
{
	this->contactList[this->oldestIndex % 8].create();
	this->contactList[this->oldestIndex % 8].setIndex(this->oldestIndex % 8);
	this->oldestIndex = (this->oldestIndex + 1);
}

Phonebook::Phonebook(void)
{
	this->oldestIndex = 0;
}

Phonebook::~Phonebook(void)
{
}

void	Phonebook::showContacts(void)
{
	if (this->oldestIndex == 0)
	{
		std::cout << "YOU HAVE NO CONTACTS" << std::endl << std::endl;
		return ;	
	}
	std::cout << "|" << std::setw(10) << "INDEX NO.";
	std::cout << "|" << std::setw(10) << "FIRSTNAME";
	std::cout << "|" << std::setw(10) << "LASTNAME";
	std::cout << "|" << std::setw(10) << "NICKNAME" << "|" << std::endl;
	for (int i = 0; i < 8; i++)
	{
		this->contactList[i].showColumn();
	}
}

void	Phonebook::showContact(void)
{
	std::string	input;
	int	chosen;

	if (this->oldestIndex == 0)
		return ;
	chosen = -1;
	std::cout << "Please enter C0NTACT's INDEX NUMBER [0-7]" << std::endl;
	std::getline(std::cin, input);
	if (std::cin.eof() || std::cin.bad())
		return ;
	for (int i = 0; i < 8; i++)
	{
		if (input == std::to_string(i) && this->oldestIndex > i)
			chosen = i;
	}
	if (chosen < 0)
	{
		std::cout << "INVALID CHOICE: " << input << std::endl;
		this->showContact();
	}
	else
	{
		this->contactList[chosen].showContact();
	}
}
