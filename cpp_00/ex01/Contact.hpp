/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:58:43 by yes-slim          #+#    #+#             */
/*   Updated: 2024/07/17 14:17:56 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_HPP
#define CONTACT_HPP

#include <iostream>
#include <cstdlib>
#include <string>

#define RESET "\033[0m"
#define RED "\033[1;31m"
#define YELLOW "\033[1;33m"
#define GREEN "\033[1;32m"
#define UNDERLINE "\033[4;37m"

class Contact
{
	private:
			int			id;
			std::string	firstname;
			std::string	lastname;
			std::string	nickname;
			std::string	phonenumber;
			std::string	darkestsecret;
	public:
};

#endif