#ifndef PRESIDENTIALPARDONFORM_HPP
# define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm {
	private:
		std::string target;
	public:
		PresidentialPardonForm(const std::string &target);
		
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &f);
		~PresidentialPardonForm();
		PresidentialPardonForm& operator=(const PresidentialPardonForm &f);

		void execute(Bureaucrat const &executor) const;
};

#endif