#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>
#include <string>

class Cat : public Animal {
protected:
  std::string type;

public:
  Cat();
  Cat(const Cat &cat);
  Cat &operator=(const Cat &cat);
  ~Cat();

  Cat(std::string _type);
  void makeSound() const;
  std::string getType() const;
};

#endif
