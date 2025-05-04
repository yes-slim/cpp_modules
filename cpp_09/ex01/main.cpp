#include "RPN.hpp"

int main(int ac ,char *av[] )
{
    if (ac == 2)
    {
        stak(av[1]);
    }
    else
    {
        std::cout << "please enter two args !!!!\n";
        return (0);
    }
}