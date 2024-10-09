#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP

#include "WrongAnimal.hpp"
#include <iostream>
#include <string>

class WrongCat : public WrongAnimal {
protected:
  std::string type;

public:
  WrongCat();
  WrongCat(const WrongCat &cat);
  WrongCat &operator=(const WrongCat &cat);
  ~WrongCat();

  WrongCat(std::string _type);
  void makeSound() const;
  std::string getType() const;
};

#endif
