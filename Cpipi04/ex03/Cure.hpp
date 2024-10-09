#ifndef CURE_HPP
#define CURE_HPP

#include "AMateria.hpp"
#include <iostream>
#include <string>
class Cure : public AMateria {
protected:
  std::string ice;

public:
  Cure();
  Cure(const Cure &_cure);
  Cure &operator=(const Cure &_cure);
  ~Cure();

  Cure(std::string const &_type);
  std::string const &getType() const;
  AMateria *clone() const;
  void use(ICharacter &target);
};

#endif
