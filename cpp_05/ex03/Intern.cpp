#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

Intern::Intern()
{
	std::cout << "Intern constructor called." << std::endl;
};

Intern::Intern(const Intern &i)
{
	std::cout << "Intern copy constructor called." << std::endl;
	*this = i;
};

Intern::~Intern()
{
	std::cout << "Intern destructor called." << std::endl;
};

Intern& Intern::operator=(const Intern &i)
{
	std::cout << "Intern copy assignment operator called." << std::endl;
	(void)i;
	return (*this);
};

AForm *Intern::makeForm(std::string formname, std::string target) {
  std::string forms[3] = {"robotomy request", "president request",
                          "shrubbery request"};
  int i;
  for (i = 0; i < 3; i++)
    if (!forms[i].compare(formname))
      break;
  switch (i) {
  case 0:
    std::cout << "Intern creates " << forms[0] << std::endl;
    return (new RobotomyRequestForm(target));
  case 1:
    std::cout << "Intern creates " << forms[1] << std::endl;
    return (new PresidentialPardonForm(target));
  case 2:
    std::cout << "Intern creates " << forms[2] << std::endl;
    return (new ShrubberyCreationForm(target));
  default:
    std::cout << "Intern Can't Create the Form" << std::endl;
    return (NULL);
  }
}
