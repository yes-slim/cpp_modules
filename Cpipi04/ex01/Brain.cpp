#include "Brain.hpp"

Brain::Brain() {
  std::cout << "Default constructor for Brain is called" << std::endl;
}

Brain::Brain(const Brain &brain) {
  std::cout << "Copy Constructor for Brain is called" << std::endl;
  *this = brain;
}

Brain &Brain::operator=(const Brain &brain) {
  std::cout << "Copy Assignment operator for Brain is called" << std::endl;
  for (int i = 0; i < 100; i++)
    this->ideas[i] = brain.ideas[i];
  return *this;
}

Brain::~Brain() { std::cout << "Destructor for Brain is called" << std::endl; }
