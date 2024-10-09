#include "Dog.hpp"
#include "Animal.hpp"
#include "Brain.hpp"

Dog::Dog() : Animal() {
  this->type = "Dog";
  std::cout << "Default constructor for " << this->type << " is called"
            << std::endl;
  this->brain = new Brain();
}

Dog::Dog(std::string _type) : Animal(_type) {
  std::cout << "Parameterized constructor for " << this->type << " is called"
            << std::endl;
  this->brain = new Brain();
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
    this->brain = new Brain(*dog.brain);
  }
  return *this;
}

Dog::~Dog() {
  std::cout << "Destructor for " << this->type << " is called" << std::endl;
  delete this->brain;
}

void Dog::makeSound() const { std::cout << "Woooooooooooof" << std::endl; }

std::string Dog::getType() const { return this->type; }
