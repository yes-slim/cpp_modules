#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal() {
  this->type = "WrongCat";
  std::cout << "Default constructor for " << this->type << " is called"
            << std::endl;
}

WrongCat::WrongCat(std::string _type) : WrongAnimal(_type) {
  std::cout << "Parameterized constructor for " << this->type << " is called"
            << std::endl;
}

WrongCat::WrongCat(const WrongCat &cat) : WrongAnimal(cat) {
  std::cout << "Copy Constructor for " << this->type << " is called"
            << std::endl;
  *this = cat;
}

WrongCat &WrongCat::operator=(const WrongCat &cat) {
  std::cout << "Copy Assignment operator for " << this->type << " is called"
            << std::endl;
  if (this != &cat) {
    this->type = cat.type;
  }
  return *this;
}

WrongCat::~WrongCat() {
  std::cout << "Destructor for " << this->type << " is called" << std::endl;
}

void WrongCat::makeSound() const { std::cout << "Meooooooooooow" << std::endl; }

std::string WrongCat::getType() const { return this->type; }
