/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yes-slim <yes-slim@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 00:25:25 by yes-slim          #+#    #+#             */
/*   Updated: 2024/10/09 22:13:51 by yes-slim         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"
#include "Dog.hpp"

int main(void) {
	// AAnimal animal;
  std::cout << "--------------Subject example-----------------" << std::endl;

    const AAnimal *j = new Dog();
    const AAnimal *i = new Cat();

    delete j; // should not create a leak
    delete i;

    std::cout << "-------------Array of Animals--------------" << std::endl;

    const AAnimal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

    for (int i = 0; i < 4; i++) {
        delete animals[i];
    }

    std::cout << "--------------Deep copy brain-----------------" << std::endl;

    Brain *first = new Brain();
    Brain *second = new Brain();

    // first->showIdeas();

    *second = *first; // will make a deep copy
    delete first;

    // second->showIdeas(); // without deep copy, this would give a seg fault
    delete second;

    std::cout << "--------------Deep copy Dog-----------------" << std::endl;

    const Dog *dogOne = new Dog();
    const Dog *dogTwo = new Dog(*dogOne);

    delete dogOne;
    delete dogTwo; // should not create a leak

    std::cout << "--------------Deep copy Cat-----------------" << std::endl;

    const Cat *catOne = new Cat();
    const Cat *catTwo = new Cat(*catOne);

    delete catOne;
    delete catTwo; // should not create a leak

    return 0;
}
 