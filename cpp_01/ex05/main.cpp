/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/01 11:12:13 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/01 11:38:41 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int main()
{
	std::string level;
	Harl harl;
	while (true)
	{
		std::cout << "Enter the level of complaint (DEBUG, INFO, WARNING, ERROR): ";
		std::getline(std::cin, level);
		if (std::cin.eof())
			break;
		harl.complain(level);
	}
	return 0;
}