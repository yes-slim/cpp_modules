#include "AMateria.hpp"
#include "ICharacter.hpp"
#include <string>

AMateria::AMateria() : type("Default") {}

AMateria::AMateria(std::string const &_type) : type(_type) {}

AMateria::AMateria(const AMateria &_amateria) { *this = _amateria; }

AMateria &AMateria::operator=(const AMateria &_amateria) {
  if (this != &_amateria)
    this->type = _amateria.type;
  return *this;
}

AMateria::~AMateria() {}

std::string const &AMateria::getType() const { return type; }

void AMateria::use(ICharacter &target) {
  std::cout << "AMateria " << this->type << " used on " << target.getName()
            << std::endl;
}
