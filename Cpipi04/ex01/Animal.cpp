#include "Animal.hpp"

Animal::Animal() : type("Animal") {
  std::cout << "Default constructor for " << this->type << " is called"
            << std::endl;
}

Animal::Animal(std::string _type) : type(_type) {
  std::cout << "Parameterized constructor for " << this->type << " is called"
            << std::endl;
}

Animal::Animal(const Animal &animal) {
  std::cout << "Copy Constructor for " << this->type << " is called"
            << std::endl;
  *this = animal;
}

Animal &Animal::operator=(const Animal &animal) {
  std::cout << "Copy Assignment operator for " << this->type << " is called"
            << std::endl;
  if (this != &animal) {
    this->type = animal.type;
  }
  return *this;
}

Animal::~Animal() {
  std::cout << "Destructor for " << this->type << " is called" << std::endl;
}

void Animal::makeSound() const {
  std::cout << "Random Animal sound" << std::endl;
}

std::string Animal::getType() const { return this->type; }
