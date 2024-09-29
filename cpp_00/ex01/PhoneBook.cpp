/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/23 15:58:38 by yes-slim          #+#    #+#             */
/*   Updated: 2024/09/29 19:35:33 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

PhoneBook::PhoneBook() : contacts_nbr(0) {};
PhoneBook::~PhoneBook(){};

void	PhoneBook::add_conntact(){
	int	index = this->contacts_nbr % 8;
	this->contacts[index].set_contact();
	std::cout << "!! Contact added successfuly" << std::endl;
	this->contacts_nbr++;
};

void PhoneBook::list_phonebook(void) {
	int contacts = this->contacts_nbr;
	if (contacts > 8)
		contacts = 8;
	std::cout << trunc_str("index") << "|" << trunc_str("first name") << "|"
	        << trunc_str("lastname") << "|" << trunc_str("nickname") << "|"
	    	<< std::endl;
	for (int i = 0; i < contacts; i++) {
		this->contacts[i].list_all(i);
	}
}

void PhoneBook::search_contact() {
  if (!this->contacts_nbr) {
    std::cout << "Contact List is Empty" << std::endl;
    return;
  }
  int n;
  if (this->contacts_nbr > 8)
	n = 8;
  else
	n = this->contacts_nbr;
  this->list_phonebook();
  std::string input;
  std::cout << std::endl
            << "For more informations, Enter the index of the contact: "
            << std::endl;
  ;
  getline(std::cin, input);
  if (std::cin.eof())
    std::exit(EXIT_SUCCESS);
	if (input.empty())
		return;
  for (int i = 0; i < n; i++) {
    if (input == iToString(i)) {
      contacts[i].list_contact();
      return;
    }
  }
  std::cout << "Invalid index" << std::endl;
}