#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>
#include <string>

class Brain {
private:
  std::string ideas[100];

public:
  Brain();
  Brain(const Brain &cat);
  Brain &operator=(const Brain &cat);
  ~Brain();
};

#endif
