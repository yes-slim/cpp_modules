/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 16:03:39 by yes-slim          #+#    #+#             */
/*   Updated: 2024/09/28 20:03:24 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"
#include "PhoneBook.hpp"

int	main(void)
{
	while (true)
	{
		// PhoneBook	phone;

		
		std::string input;
		std::cout << "Phonebook> ";
		std::getline(std::cin, input);
		if (std::cin.eof())
			break;
		else if (!input.compare("ADD"))
			std::cout << "ADD cmd" << std::endl;
		else if (!input.compare("SEARCH"))
			std::cout << "SEARCH cmd" << std::endl;
		else if (!input.compare("EXIT"))
			exit(EXIT_SUCCESS);
		else 
			std::cout << "Please enter a valid cmd : ADD or SEARCH or EXIT";
		std::cout << std::endl;
	}
	return (EXIT_SUCCESS);
}