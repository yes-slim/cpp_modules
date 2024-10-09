#include "Cat.hpp"
#include "Dog.hpp"
int main(void) {
  // const Animal *j = new Dog();
  // const Animal *i = new Cat();

  // delete j;
  // delete i;

  Cat basic;
  Cat tmp = basic;

  int *k = reinterpret_cast<int *>(&tmp);
  // int *h = reinterpret_cast<int *>(&basic);
  k++;
  // h++;
  std::cout << *k << std::endl;
  // std::cout << *h << std::endl;
  // const Animal *animals[4] = {new Dog(), new Dog(), new Cat(), new Cat()};

  // for (int i = 0; i < 4; i++) {
  //   animals[i]->makeSound();
  // }

  // for (int i = 0; i < 4; i++) {
  //   delete animals[i];
  // }

  return 0;
}
