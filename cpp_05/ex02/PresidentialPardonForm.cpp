#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(const std::string &target) : AForm("PresidentialPardonForm", 25, 5), target(target)
{
	std::cout << "PresidentialPardonForm constructor called." << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm() : AForm("PresidentialPardonForm", 25, 5), target("default")
{
	std::cout << "PresidentialPardonForm default constructor called." << std::endl;
};

PresidentialPardonForm::~PresidentialPardonForm()
{
	std::cout << "PresidentialPardonForm destructor called." << std::endl;
};

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &f) : AForm(f), target(f.target)
{
	std::cout << "PresidentialPardonForm copy constructor called." << std::endl;
	*this = f;
};

PresidentialPardonForm& PresidentialPardonForm::operator=(const PresidentialPardonForm &f)
{
	std::cout << "PresidentialPardonForm copy assignment operator called." << std::endl;
	if (this != &f)
		this->target = f.target;
	return (*this);
};

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
	if (this->getIsSigned() == false)
		throw AForm::FormNorSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::cout << this->target << " has been pardoned by Zaphod Beeblebrox." << std::endl;
};