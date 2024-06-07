/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:19:27 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/07 17:22:34 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	main_menu(Phonebook *book);

void	create_contact(Phonebook *book)
{
	std::cout << "NEW CONTACT" << std::endl << std::endl;	
	book->contactAdd();
	main_menu(book);
}

void	search_menu(Phonebook *book)
{
	(void) book;


}

void	main_menu(Phonebook *book)
{
	std::string	input;

	std::cout << "WELCOME TO PH0NEB00K, <\\OPERATOR>!\nYou can ADD or SEARCH through your contacts. You can also EXIT" << std::endl;
	std::getline(std::cin, input);
	if (std::cin.eof() || std::cin.bad())
		return ;
	if (input == "ADD")
		create_contact(book);
	else if (input == "SEARCH")
	{
		book->showContacts();
		book->showContact();
		main_menu(book);
	}
	else if (input == "EXIT")
	{
		std::cout << "GOODBYE, <\\OPERATOR>." << std::endl;
		delete book;
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

	book = new Phonebook();
	main_menu(book);
}
