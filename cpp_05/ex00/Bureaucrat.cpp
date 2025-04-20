#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(const std::string &name, int grade) : _name(name)
{
	std::cout << "constructor called." << std::endl;
	if (grade > 150)
		throw Bureaucrat::GradeTooLowException ();
	else if (grade < 1)
		throw Bureaucrat::GradeTooHighException ();
	else
		this->_grade = grade;
};

Bureaucrat::Bureaucrat() : _name("default")
{
	std::cout << "default constructor called." << std::endl;
	this->_grade = 75;
};

Bureaucrat::~Bureaucrat () {
	std::cout << "destroctur called." << std::endl;
};

Bureaucrat::Bureaucrat (const Bureaucrat &b) : _name(b._name)
{
	std::cout << "copy constructor called." << std::endl;
	*this = b;
};

Bureaucrat& Bureaucrat::operator=(const Bureaucrat &b)
{
	std::cout << "copy assignment operator called." << std::endl;
	if (this != &b)
		this->_grade = b._grade;
	return (*this);
};

std::string Bureaucrat::getName() const
{
	return (this->_name);
};

int Bureaucrat::getGrade() const
{
	return (this->_grade);
};

void Bureaucrat::increment()
{
	if (this->_grade == 1)
		throw Bureaucrat::GradeTooHighException ();
	else
		this->_grade--;
};

void Bureaucrat::decrement()
{
	if (this->_grade == 150)
		throw Bureaucrat::GradeTooLowException ();
	else
		this->_grade++;
};

const char* Bureaucrat::GradeTooHighException::what() const throw()
{
	return ("Grade is too high.");
};

const char* Bureaucrat::GradeTooLowException::what() const throw()
{
	return ("Grade is too low.");
};
std::ostream &operator<<(std::ostream &o, const Bureaucrat &b)
{
	o << b.getName() << ", bureaucrat grade " << b.getGrade();
	return (o);
};