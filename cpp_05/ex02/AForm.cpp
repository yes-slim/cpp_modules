#include "AForm.hpp"

AForm::AForm(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	std::cout << "AForm constructor called." << std::endl;
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw AForm::GradeTooLowException ();
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw AForm::GradeTooHighException ();
	else
		this->isSigned = false;
};

AForm::AForm() : _name("default"), gradeToSign(75), gradeToExecute(75)
{
	std::cout << "AForm default constructor called." << std::endl;
	this->isSigned = false;
};

AForm::~AForm ()
{
	std::cout << "AForm destroctur called." << std::endl;
};

AForm::AForm (const AForm &f) : _name(f._name), gradeToSign(f.gradeToSign), gradeToExecute(f.gradeToExecute)
{
	std::cout << "AForm copy constructor called." << std::endl;
	*this = f;
};

AForm& AForm::operator=(const AForm &f)
{
	std::cout << "AForm copy assignment operator called." << std::endl;
	if (this != &f)
		this->isSigned = f.getIsSigned();
	return (*this);
};

std::string AForm::getName() const
{
	return (this->_name);
};

bool AForm::getIsSigned() const
{
	return (this->isSigned);
};

int AForm::getGradeToSign() const
{
	return (this->gradeToSign);
};

int AForm::getGradeToExecute() const
{
	return (this->gradeToExecute);
};

void AForm::setSigned(bool isSigned)
{
	this->isSigned = isSigned;
};


const char* AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.\n");
};

const char* AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.\n");
};

const char* AForm::FormNorSignedException::what() const throw()
{
	return ("Form not signed.\n");
};

void AForm::beSigned(Bureaucrat b)
{
	if (b.getGrade() > this->getGradeToSign())
		throw AForm::GradeTooLowException ();
	this->isSigned = true;
};

