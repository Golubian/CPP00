/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gachalif <gachalif@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 15:05:14 by gachalif          #+#    #+#             */
/*   Updated: 2024/06/07 17:02:48 by gachalif         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
# define CONTACT_HPP

# include <iostream>
# include <iomanip>
# include <string>
# include <list>

class Contact
{
	private:
		std::string	firstName;
		std::string lastName;
		std::string	nickname;
		std::string phoneNumber;
		std::string	darkestSecret;
		int			index;
		std::string	read_input(std::string str);

	public:
		Contact();
		~Contact();
		void	create(void);	
		void	showColumn(void);
		void	showContact(void);
		void	setIndex(int index);
};

#endif
