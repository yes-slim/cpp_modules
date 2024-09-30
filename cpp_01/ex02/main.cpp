/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/30 13:36:15 by yes-slim          #+#    #+#             */
/*   Updated: 2024/09/30 13:47:43 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iostream"

int main()
{
	std::string string = "HI THIS IS BRAIN";
	std::string *stringPRT = &string;
	std::string &stringREF = string;
	
	std::cout << "===> Adresses <===" << std::endl;
	std::cout << "Memory adress of string             : " << &string << std::endl;
	std::cout << "Memory adress held by stringPRT     : " << stringPRT << std::endl;
	std::cout << "Memory adress held by stringREF     : " << &stringREF << std::endl;

	std::cout << "===> Values <===" << std::endl;
	std::cout << "The value of strring                : " << string << std::endl;
	std::cout << "The value pointed to by stringPRT   : " << *stringPRT << std::endl;
	std::cout << "The value pointed to by stringREF   : " << stringREF << std::endl;
	
	return 0;
}