/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:19:27 by gachalif          #+#    #+#             */
/*   Updated: 2024/04/10 11:59:24 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	main_menu(Phonebook *book);
void	add_menu(Phonebook *book);

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

void	add_menu(Phonebook *book)
{
	std::string input;
	std::string firstName;
	std::string lastName;
	std::string nickname;
	std::string phoneNumber;
	std::string darkestSecret;

	std::cout << "NEW CONTACT" << std::endl << std::endl;

	if (!get_field("FIRST_NAME", &firstName))
		return ;
	if (!get_field("LAST_NAME", &lastName))
		return ;
	if (!get_field("NICKNAME", &nickname))
		return ;
	if (!get_field("PHONE_NUMBER", &phoneNumber))
		return ;
	if (!get_field("DARKEST SECRET", &darkestSecret))
		return ;
	Contact	newContact = Contact(firstName, lastName, nickname, phoneNumber, darkestSecret);
	book->contactAdd(newContact);
	main_menu(book);
}

void	search_menu(Phonebook *book)
{
	
}

void	main_menu(Phonebook *book)
{
	std::string	input;

	std::cout << "WELCOME TO PH0NEB00K, <\\OPERATOR>!\nYou can ADD or SEARCH through your contacts. You can also EXIT" << std::endl;
	std::getline(std::cin, input);
	if (std::cin.eof() || std::cin.bad())
		return ;
	if (input == "ADD")
		add_menu(book);
	else if (input == "SEARCH")
		search_menu(book);
	else if (input == "EXIT")
	{
		std::cout << "GOODBYE, <\\OPERATOR>." << std::endl;
		return ;
	}
	else
	{
		std::cout << "INVALID COMMAND: \"" << input << "\"" << std::endl;
		main_menu(book);
	}
}

int	main(void)
{
	Phonebook *book;
	main_menu(book);
}