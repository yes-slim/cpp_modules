/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 00:25:25 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/09 21:50:14 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"

int main()
{
//   const Animal *meta = new Animal();
//   const Animal *j = new Dog();
//   const Animal *i = new Cat();
//   std::cout << j->getType() << " " << std::endl;
//   std::cout << i->getType() << " " << std::endl;
//   i->makeSound(); // will output the cat sound!
//   j->makeSound();
//   meta->makeSound();
//   delete meta;
//   delete i;
//   delete j;
//   // Wrong ones
//   const WrongAnimal *wrongmeta = new WrongAnimal();
//   const WrongAnimal *k = new WrongCat();
//   std::cout << k->getType() << " " << std::endl;
//   k->makeSound(); // will output the Wronganimal sound!
//   wrongmeta->makeSound();
//   delete wrongmeta;
//   delete k;
//   return 0;

	Animal ani;
	Cat dina;

	std::cout << ani.getType() << std::endl;
	std::cout << dina.getType() << std::endl;
	const Animal* meta = new Animal();
const Animal* j = new Dog();
const Animal* i = new Cat();
std::cout << j->getType() << " " << std::endl;
std::cout << i->getType() << " " << std::endl;
i->makeSound(); //will output the cat sound!
j->makeSound();
meta->makeSound();
delete meta;
delete j;
delete i;
WrongAnimal *wrong = new WrongCat();
wrong->makeSound();
delete wrong;
return 0;
std::string input;
std::cout << "Enter a command: ";
getline(std::cin, input);
std::cout << input << std::endl;
}