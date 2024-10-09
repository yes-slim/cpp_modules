#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP

#include <iostream>
#include <string>

class WrongAnimal {
protected:
  std::string type;

public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal &animal);
  WrongAnimal &operator=(const WrongAnimal &animal);
  virtual ~WrongAnimal();

  WrongAnimal(std::string _type);
  virtual void makeSound() const = 0;
  std::string getType() const;
};

#endif
