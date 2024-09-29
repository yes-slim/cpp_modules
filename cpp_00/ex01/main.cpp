/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:03:39 by yes-slim          #+#    #+#             */
/*   Updated: 2024/09/29 19:06:35 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	PhoneBook	phone;
	while (true)
	{
		std::string cmd;
		std::cout << "Phonebook> ";
		std::getline(std::cin, cmd);
		if (std::cin.eof())
			break;
		else if(cmd.empty())
			continue;
		if (!cmd.compare("ADD"))
			phone.add_conntact();
		else if (!cmd.compare("SEARCH")){
			phone.search_contact();	
		}
		else if (!cmd.compare("EXIT")){
			std::cout << "Exiting ...." << std::endl;
			exit(EXIT_SUCCESS);
		}
		else 
			std::cout << "Please enter a valid cmd : ADD or SEARCH or EXIT" << std::endl;
	}
	return (EXIT_SUCCESS);
}