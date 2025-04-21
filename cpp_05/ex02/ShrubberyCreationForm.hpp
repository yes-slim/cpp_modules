#ifndef SHUBBERYCREATIONFORM_HPP
# define SHUBBERYCREATIONFORM_HPP

#include "AForm.hpp"
#include <fstream>

class ShrubberyCreationForm : public AForm
{
	private:
		std::string _target;
	public:
		ShrubberyCreationForm(const std::string &target);
		
		ShrubberyCreationForm();
		ShrubberyCreationForm(const ShrubberyCreationForm &f);
		~ShrubberyCreationForm();
		ShrubberyCreationForm& operator=(const ShrubberyCreationForm &f);

		void getTarget() const;
		void execute(Bureaucrat const &f) const;
};

#endif