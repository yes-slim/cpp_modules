#ifndef ICE_HPP
#define ICE_HPP

#include "AMateria.hpp"
#include <iostream>
#include <string>
class Ice : public AMateria {
protected:
  std::string ice;

public:
  Ice();
  Ice(const Ice &_ice);
  Ice &operator=(const Ice &_ice);
  ~Ice();

  Ice(std::string const &_type);
  std::string const &getType() const;
  AMateria *clone() const;
  void use(ICharacter &target);
};

#endif
