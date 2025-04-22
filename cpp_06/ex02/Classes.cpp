#include "Classes.hpp"

Base:: ~Base(void){};

Base* generate(void) {
    int randValue = rand() % 3;

    if (randValue == 0)
        return (new A);
    else if (randValue == 1)
        return (new B);
    else
        return (new C);
}

void    identify(Base *p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))   
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
    else
        std::cout << "unknown" << std::endl;
}

void    identify(Base &p) {
    try {
        A& aRef = dynamic_cast<A&>(p);
        std::cout << "the type is A" << std::endl;
        (void)aRef;
    } catch (const std::exception& e) {}
    
    try {
        B& bRef = dynamic_cast<B&>(p);
        std::cout << "the type is B" << std::endl;
        (void)bRef;
    } catch (const std::exception& e) {}

    try {
        C& cRef = dynamic_cast<C&>(p);
        std::cout << "the type is C" << std::endl;
        (void)cRef;
    } catch (const std::exception& e) {}
}