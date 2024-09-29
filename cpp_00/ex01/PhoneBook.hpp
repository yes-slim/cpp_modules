/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.hpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:27:04 by yes-slim          #+#    #+#             */
/*   Updated: 2024/09/29 19:02:51 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook
{
	private:
		int		contacts_nbr;
		Contact contacts[8];
	public:
		PhoneBook();
		~PhoneBook();
		void	add_conntact(void);
		void	search_contact(void);
		void	list_phonebook(void);
};
	
#endif