#ifndef AMATERIA_HPP
#define AMATERIA_HPP

#include "ICharacter.hpp"
#include <iostream>
class AMateria {
protected:
  std::string type;

public:
  AMateria();
  AMateria(const AMateria &_amateria);
  AMateria &operator=(const AMateria &_amateria);
  ~AMateria();

  AMateria(std::string const &type);

  std::string const &getType() const;
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target);
};

#endif
