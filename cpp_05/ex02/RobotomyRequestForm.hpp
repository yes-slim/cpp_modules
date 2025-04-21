#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class RobotomyRequestForm : public AForm {
	private:
		std::string target;
	public:
		RobotomyRequestForm(const std::string &target);
		
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &f);
		~RobotomyRequestForm();
		RobotomyRequestForm& operator=(const RobotomyRequestForm &f);

		void execute(Bureaucrat const &executor) const;
};

#endif