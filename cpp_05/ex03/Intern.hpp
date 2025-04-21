#ifndef INTERN_HPP
#define INTERN_HPP

#include "AForm.hpp"

class Intern
{
	public:
		Intern();
		Intern(const Intern &i);
		~Intern();
		Intern& operator=(const Intern &i);

		AForm* makeForm(std::string formName, std::string target);
};

#endif