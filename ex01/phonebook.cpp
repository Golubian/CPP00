/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/10 11:11:20 by gachalif          #+#    #+#             */
/*   Updated: 2024/04/10 12:02:16 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "phonebook.hpp"

void	Phonebook::contactAdd(Contact contact)
{
	this->contactList[this->oldestIndex%8] = contact;
	this->oldestIndex = (this->oldestIndex + 1) % 8;
}

Contact	*Phonebook::getContacts(void)
{
	return (this->contactList);
}

Contact		*Phonebook::getContact(int index)
{
	return (&((this->contactList)[index]));
}