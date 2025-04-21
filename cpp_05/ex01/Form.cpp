#include "Form.hpp"

Form::Form(const std::string &name, int gradeToSign, int gradeToExecute) : _name(name), gradeToSign(gradeToSign), gradeToExecute(gradeToExecute)
{
	std::cout << "Form constructor called." << std::endl;
	if (gradeToSign > 150 || gradeToExecute > 150)
		throw Form::GradeTooLowException ();
	if (gradeToSign < 1 || gradeToExecute < 1)
		throw Form::GradeTooHighException ();
	else
		this->isSigned = false;
};

Form::Form() : _name("default"), gradeToSign(75), gradeToExecute(75)
{
	std::cout << "Form default constructor called." << std::endl;
	this->isSigned = false;
};

Form::~Form ()
{
	std::cout << "Form destroctur called." << std::endl;
};

Form::Form (const Form &f) : _name(f._name), gradeToSign(f.gradeToSign), gradeToExecute(f.gradeToExecute)
{
	std::cout << "Form copy constructor called." << std::endl;
	*this = f;
};

Form& Form::operator=(const Form &f)
{
	std::cout << "Form copy assignment operator called." << std::endl;
	if (this != &f)
		this->isSigned = f.getIsSigned();
	return (*this);
};

std::string Form::getName() const
{
	return (this->_name);
};

bool Form::getIsSigned() const
{
	return (this->isSigned);
};

int Form::getGradeToSign() const
{
	return (this->gradeToSign);
};

int Form::getGradeToExecute() const
{
	return (this->gradeToExecute);
};

void Form::setSigned(bool isSigned)
{
	this->isSigned = isSigned;
};

void Form::beSigned(Bureaucrat b)
{
	if (b.getGrade() > this->getGradeToSign())
		throw Form::GradeTooLowException ();
	this->isSigned = true;
};

const char* Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.\n");
};

const char* Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.\n");
};

std::ostream& operator<<(std::ostream& out, const Form& form)
{
    if (form.getIsSigned() == true)
        std::cout << "Form is signed" << std::endl;
    else
        std::cout << "Form is not signed" << std::endl;
    std::cout << "Form name: " << form.getName() << std::endl;
    std::cout << "Form grade to sign: " << form.getGradeToSign() << std::endl;
    std::cout << "Form grade to execute: " << form.getGradeToExecute() << std::endl;
    std::cout << "Sign is : " << form.getIsSigned() << std::endl;
    return out;
}
