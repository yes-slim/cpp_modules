
#include "Bureaucrat.hpp"
#include "Form.hpp"

int main(void)
{

    try
    {
        Bureaucrat A;
        Form b("lsd", 100, 110);
        b.beSigned(A);
        std::cout << "******\n";
        A.signForm(b);
        std::cout << "******\n";
        Bureaucrat B("younes",101);
        std::cout << "******\n";
        B.signForm(b);
        std::cout << "******\n"; 
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what();
    }
   
}
