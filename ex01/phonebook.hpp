/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:09:53 by gachalif          #+#    #+#             */
/*   Updated: 2024/04/10 12:02:24 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "contact.hpp"

#ifndef PHONEBOOK_H
# define PHONEBOOK_H

class Phonebook 
{
	private:
	Contact		contactList[8];
	int			oldestIndex;

	public:
	void		contactAdd(Contact contact);
    Contact		*getContacts(void);
	Contact		*getContact(int index);
	
};

#endif