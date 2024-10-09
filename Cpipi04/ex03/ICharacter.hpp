#ifndef ICHARACTER_HPP
#define ICHARACTER_HPP

#include <iostream>
#include <string>

class ICharacter {
protected:
  std::string name;

public:
  ICharacter();
  ICharacter(const ICharacter &_icharacter);
  ICharacter &operator=(const ICharacter &_icharacter);
  ~ICharacter();

  ICharacter(std::string const &type);

  std::string const &getName() const;
  virtual ICharacter *clone() const = 0;
};

#endif
