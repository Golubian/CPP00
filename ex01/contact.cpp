/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:24:26 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/07 17:33:52 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

bool	get_field(std::string prompt, std::string *input)
{
	std::string	formatting;
	formatting = "";
	if (prompt == "DARKEST SECRET")
		formatting = "\033[1;31m";
	*input = "";
	while (*input == "")
	{
		std::cout << "PLEASE ENTER THE CONTACT'S " << formatting << "<" << prompt << ">" << "\033[0m:" << std::endl;
		std::getline(std::cin, *input);
		if (std::cin.eof() || std::cin.bad())
			return (false);
		if (*input == "")
			std::cout << formatting << "<" << prompt << "> \033[0m" << "CANNOT BE EMPTY" << std::endl;
	}
	return (true);
}

Contact::Contact(void)
{
	this->index = -1;
}

Contact::~Contact(void)
{
}

void	Contact::setIndex(int index)
{
	this->index = index;
}

void	Contact::create(void)
{
	if (!get_field("FIRST_NAME", &(this->firstName)))
		return ;
	if (!get_field("LAST_NAME", &(this->lastName)))
		return ;
	if (!get_field("NICKNAME", &(this->nickname)))
		return ;
	if (!get_field("PHONE_NUMBER", &(this->phoneNumber)))
		return ;
	if (!get_field("DARKEST SECRET", &(this->darkestSecret)))
		return ;
}

std::string	truncate(std::string str)
{
	if (str.length() > 10)
        return str.substr(0, 9) + ".";
    return str;
}

void	Contact::showColumn(void)
{
	if (this->index < 0)
		return ;
	std::cout << "|" << std::setw(10) << truncate(std::to_string(this->index));
	std::cout << "|" << std::setw(10) << truncate(this->firstName);
	std::cout << "|" << std::setw(10) << truncate(this->lastName);
	std::cout << "|" << std::setw(10) << truncate(this->nickname) << "|" << std::endl;
}

void	Contact::showContact(void)
{
    std::cout << std::endl;
    std::cout << "CONTACT ID :	" << this->index <<std::endl;
    std::cout << "FIRST NAME :	" << this->firstName <<std::endl;
	std::cout << "LAST  NAME :	" << this->lastName <<std::endl;
	std::cout << "NICK  NAME :	" << this->nickname <<std::endl;
	std::cout << "SECRET     :	" << this->darkestSecret <<std::endl;
    std::cout << std::endl;
}
