#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("WrongAnimal") {
  std::cout << "Default constructor for " << this->type << " is called"
            << std::endl;
}

WrongAnimal::WrongAnimal(std::string _type) : type(_type) {
  std::cout << "Parameterized constructor for " << this->type << " is called"
            << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &animal) {
  std::cout << "Copy Constructor for " << this->type << " is called"
            << std::endl;
  *this = animal;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &animal) {
  std::cout << "Copy Assignment operator for " << this->type << " is called"
            << std::endl;
  if (this != &animal) {
    this->type = animal.type;
  }
  return *this;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "Destructor for " << this->type << " is called" << std::endl;
}

void WrongAnimal::makeSound() const {
  std::cout << "Random WrongAnimal sound" << std::endl;
}

std::string WrongAnimal::getType() const { return this->type; }
