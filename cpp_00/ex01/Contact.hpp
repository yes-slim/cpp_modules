/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:58:43 by yes-slim          #+#    #+#             */
/*   Updated: 2024/09/29 22:40:22 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstdlib>
#include <string>
#include <iomanip>
#include <sstream>


class Contact
{
	private:
		std::string	firstname;
		std::string	lastname;
		std::string	nickname;
		std::string	phonenumber;
		std::string	darkestsecret;
	public:
		Contact();
		~Contact();
		void	set_contact(void);
		void	list_contact(void);
		void	list_all(int id);
};

std::string	get_input(std::string str);
std::string	trunc_str(std::string str);
std::string iToString(int i);

#endif