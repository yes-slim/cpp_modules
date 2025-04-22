#ifndef SERIALIZE_HPP
# define SERIALIZE_HPP

# include <iostream>

#if __SIZEOF_POINTER__ == 8
    typedef unsigned long uintptr_t;
#else
    typedef unsigned int uintptr_t;
#endif

struct  Data
{
    int         a;
    std::string b;
};


class Serializer
{
    private:
        Serializer();
    public:
        Serializer(Serializer const& src);
        Serializer& operator=(Serializer const& rhs);  
        static uintptr_t serialize(Data* ptr);
        static Data* deserialize(uintptr_t raw);
        ~Serializer();
};

#endif