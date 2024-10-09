#include "Dog.hpp"
#include "Animal.hpp"

Dog::Dog() : Animal() {
  this->type = "Dog";
  std::cout << "Default constructor for " << this->type << " is called"
            << std::endl;
}

Dog::Dog(std::string _type) : Animal(_type) {
  std::cout << "Parameterized constructor for " << this->type << " is called"
            << std::endl;
}

Dog::Dog(const Dog &dog) : Animal(dog) {
  std::cout << "Copy Constructor for " << this->type << " is called"
            << std::endl;
  *this = dog;
}

Dog &Dog::operator=(const Dog &dog) {
  std::cout << "Copy Assignment operator for " << this->type << " is called"
            << std::endl;
  if (this != &dog) {
    this->type = dog.type;
  }
  return *this;
}

Dog::~Dog() {
  std::cout << "Destructor for " << this->type << " is called" << std::endl;
}

void Dog::makeSound() const { std::cout << "Woooooooooooof" << std::endl; }

std::string Dog::getType() const { return this->type; }
