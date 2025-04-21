#include "Bureaucrat.hpp"

int main(void)
{

    try
    {
        Bureaucrat A("unkown",1);
        for (size_t i = 0; i < 15; i++)
            A.increment();
        std::cout << A << std::endl;
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
}