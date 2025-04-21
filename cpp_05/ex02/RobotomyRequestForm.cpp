#include "RobotomyRequestForm.hpp"

static int i = 0;

RobotomyRequestForm::RobotomyRequestForm(const std::string &target) : AForm("RobotomyRequestForm", 72, 45), target(target)
{
	std::cout << "RobotomyRequestForm constructor called." << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm() : AForm("RobotomyRequestForm", 72, 45), target("default")
{
	std::cout << "RobotomyRequestForm default constructor called." << std::endl;
};

RobotomyRequestForm::~RobotomyRequestForm ()
{
	std::cout << "RobotomyRequestForm destroctur called." << std::endl;
};

RobotomyRequestForm::RobotomyRequestForm (const RobotomyRequestForm &f) : AForm(f), target(f.target)
{
	std::cout << "RobotomyRequestForm copy constructor called." << std::endl;
	*this = f;
};
RobotomyRequestForm& RobotomyRequestForm::operator=(const RobotomyRequestForm &f)
{
	std::cout << "RobotomyRequestForm copy assignment operator called." << std::endl;
	if (this != &f)
		this->target = f.target;
	return (*this);
};

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned() == false)
		throw AForm::FormNorSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	i++;
  	std::cout << "Drilling Noises" << std::endl;
  	if (i % 2)
  		std::cout << this->target << " has been robotomized" << std::endl;
  	else
  		std::cout << "The Robotomy Failed" << std::endl;
};