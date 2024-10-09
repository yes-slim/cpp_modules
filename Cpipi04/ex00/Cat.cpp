#include "Cat.hpp"
#include "Animal.hpp"

Cat::Cat() : Animal() {
  this->type = "Cat";
  std::cout << "Default constructor for " << this->type << " is called"
            << std::endl;
}

Cat::Cat(std::string _type) : Animal(_type) {
  std::cout << "Parameterized constructor for " << this->type << " is called"
            << std::endl;
}

Cat::Cat(const Cat &cat) : Animal(cat) {
  std::cout << "Copy Constructor for " << this->type << " is called"
            << std::endl;
  *this = cat;
}

Cat &Cat::operator=(const Cat &cat) {
  std::cout << "Copy Assignment operator for " << this->type << " is called"
            << std::endl;
  if (this != &cat) {
    this->type = cat.type;
  }
  return *this;
}

Cat::~Cat() {
  std::cout << "Destructor for " << this->type << " is called" << std::endl;
}

void Cat::makeSound() const { std::cout << "Meooooooooooow" << std::endl; }

std::string Cat::getType() const { return this->type; }
