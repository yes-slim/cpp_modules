
#ifndef AFORM_CPP
# define AFORM_CPP

# include <iostream>
# include "Bureaucrat.hpp"

 class Bureaucrat;

class AForm {
	private:
		const std::string _name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
	public:
		AForm();
		AForm(const std::string &name, int gradeToSign, int gradeToExecute);
		AForm(const AForm &f);
		~AForm();
		AForm& operator=(const AForm &f);

		std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		
		void setSigned(bool isSigned);

		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};

		class FormNorSignedException : public std::exception {
			const char* what() const throw();
		};

		void beSigned(Bureaucrat b);
		virtual void execute(Bureaucrat const &executor) const = 0;
};

#endif