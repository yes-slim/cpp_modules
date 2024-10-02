/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/28 16:15:58 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/02 12:09:20 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact(){};
Contact::~Contact(){};

std::string iToString(int i) {
  std::string str;
  std::stringstream ss;

  ss << i;
  ss >> str;

  return (str);
}

std::string	get_input(std::string str){
	std::string input;
	std::string out;
	
	out = str + " ";
	while (out.length() < 13)
		out += " ";
	std::cout << out << ": ";
	std::getline(std::cin, input);
	if (std::cin.eof())
		exit(EXIT_SUCCESS);
	else if(input.empty()){
		std::cout << "Please enter a valid " << str << std::endl;
		return get_input(str);
	}	
	if (!str.compare("Phonenumber")){
		if (input.length() != 10){
			std::cout << "Please enter a valid phonenumber" << std::endl;
			return get_input(str);
		}
		for(unsigned long i = 0; i < input.length(); i++){
			if (!std::isdigit(input[i])){
				std::cout << "Please enter a valid phonenumber" << std::endl;
				return get_input(str);
			}
		}
	}
	return input;
};

std::string trunc_str(std::string str) {
  if (str.length() > 10)
    str = str.substr(0, 9) + ".";
  std::cout << std::setw(10);
  return str;
}

void	Contact::set_contact(){
	std::cout << "!! Adding New Contact" << std::endl;
	this->firstname = get_input("Firstname");
	this->lastname = get_input("Lastname");
	this->nickname = get_input("Nickname");
	this->phonenumber = get_input("Phonenumber");
	this->darkestsecret = get_input("Darkestsecret");

};

void	Contact::list_contact(){
	std::cout << "Firstname     : " << this->firstname << std::endl;
	std::cout << "Lastname      : " << this->lastname << std::endl;
	std::cout << "Nickname      : " << this->nickname << std::endl;
	std::cout << "Phonenumber   : " << this->phonenumber << std::endl;
	std::cout << "Darkestsecret : " << this->darkestsecret << std::endl;
 };

void Contact::list_all(int id) {
  std::string str = iToString(id);
  std::cout << trunc_str(str) << '|' << trunc_str(this->firstname) << '|'
            << trunc_str(this->lastname) << '|' << trunc_str(this->nickname)
            << '|' << std::endl;
}