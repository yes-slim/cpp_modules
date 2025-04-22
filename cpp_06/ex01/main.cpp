#include "Serialize.hpp"

int main(void)
{
    Data *ptr = new Data;

    ptr->a  = 1337;
    ptr->b  = "habibi";
    std::cout << ptr->a << " " << ptr->b << "\n";



    uintptr_t   uptr    = Serializer::serialize(ptr);
    Data        *dptr   = Serializer::deserialize(uptr);

    std::cout << dptr->a << " " << dptr->b << "\n";

    delete ptr;
}