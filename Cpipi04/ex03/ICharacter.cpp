#include "ICharacter.hpp"
#include <string>

ICharacter::ICharacter() : name("Default") {}

ICharacter::ICharacter(std::string const &_name) : name(_name) {}

ICharacter::ICharacter(const ICharacter &_icharacter) { *this = _icharacter; }

ICharacter &ICharacter::operator=(const ICharacter &_icharacter) {
  if (this != &_icharacter)
    this->name = _icharacter.name;
  return *this;
}

ICharacter::~ICharacter() {}

std::string const &ICharacter::getName() const { return name; }
