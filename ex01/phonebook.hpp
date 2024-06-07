/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   phonebook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:09:53 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/07 17:21:52 by gachalif         ###   ########.fr       */
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
	Phonebook();
	~Phonebook();
	void		showContacts(void);
	void		showContact(void);
	void		contactAdd(void);
};

#endif
