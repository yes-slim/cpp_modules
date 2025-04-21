#ifndef BUREAUCRAT_HPP
# define BUREAUCRAT_HPP

# include <iostream>
#include <string>
#include <exception>
#include "AForm.hpp"

class AForm;

class Bureaucrat {
	private:
	const std::string _name;
	int _grade;
	
	public:
	Bureaucrat(const std::string& name, int grade);
	
	Bureaucrat();
	Bureaucrat(const Bureaucrat &);
	Bureaucrat& operator=(const Bureaucrat &);
	~Bureaucrat();

	std::string  getName() const;
	int getGrade() const;
	void increment();
	void decrement();

	class GradeTooHighException : public std::exception 
	{
		const char* what () const throw();
	};
	class GradeTooLowException : public std::exception
	{
		const char* what () const throw();
	};

	void signForm(AForm &f);
	void executeForm(AForm const &f);

};

std::ostream &operator<<(std::ostream &o, const Bureaucrat &b);


#endif