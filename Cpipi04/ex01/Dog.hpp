#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <string>

class Dog : public Animal {
protected:
  Brain *brain;
  std::string type;

public:
  Dog();
  Dog(const Dog &dog);
  Dog &operator=(const Dog &dog);
  ~Dog();

  Dog(std::string _type);
  void makeSound() const;
  std::string getType() const;
};

#endif
