#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Dog : public Animal {
protected:
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
