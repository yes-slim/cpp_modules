#ifndef FORM_CPP
# define FORM_CPP

# include <iostream>
# include "Bureaucrat.hpp"

 class Bureaucrat;

class Form {
	private:
		const std::string _name;
		bool isSigned;
		const int gradeToSign;
		const int gradeToExecute;
	public:
		Form();
		Form(const std::string &name, int gradeToSign, int gradeToExecute);
		Form(const Form &f);
		~Form();
		Form& operator=(const Form &f);

		std::string getName() const;
		bool getIsSigned() const;
		int getGradeToSign() const;
		int getGradeToExecute() const;
		
		void setSigned(bool isSigned);

		void beSigned(Bureaucrat b);
		
		class GradeTooHighException : public std::exception {
			const char* what() const throw();
		};
		
		class GradeTooLowException : public std::exception {
			const char* what() const throw();
		};
};

std::ostream &operator<<(std::ostream &o, const Form &b);

#endif