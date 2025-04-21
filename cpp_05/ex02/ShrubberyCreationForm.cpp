#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(const std::string &target) : AForm("ShrubberyCreationForm", 145, 137), _target(target)
{
	std::cout << "ShrubberyCreationForm constructor called." << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm() : AForm("ShrubberyCreationForm", 145, 137), _target("default")
{
	std::cout << "ShrubberyCreationForm default constructor called." << std::endl;
};

ShrubberyCreationForm::~ShrubberyCreationForm ()
{
	std::cout << "ShrubberyCreationForm destroctur called." << std::endl;
};

ShrubberyCreationForm::ShrubberyCreationForm (const ShrubberyCreationForm &f) : AForm(f)
{
	std::cout << "ShrubberyCreationForm copy constructor called." << std::endl;
	*this = f;
};

ShrubberyCreationForm& ShrubberyCreationForm::operator=(const ShrubberyCreationForm &f)
{
	std::cout << "ShrubberyCreationForm copy assignment operator called." << std::endl;
	if (this != &f)
		this->_target = f._target;
	return (*this);
};

void ShrubberyCreationForm::getTarget() const
{
	std::cout << "target: " << this->_target << std::endl;
};

void ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (this->getIsSigned() == false )
		throw AForm::FormNorSignedException();
	if (executor.getGrade() > this->getGradeToExecute())
		throw AForm::GradeTooLowException();
	std::ofstream file((this->_target + "_shrubbery").c_str());
	std::string tree ="      	 v .   ._, |_  .,\n"
					  "           `-._\\/  .  \\ /    |/_\n"
					  "               \\  _\\, y | \\//\n"
					  "         _\\_.___\\, \\/ -.\\||\n"
					  "           `7-,--.`._||  / / ,\n"
					  "           /'     `-. `./ / |/_.'\n"
					  "                     |    |//\n"
					  "                     |_    /\n"
					  "                     |-   |\n"
					  "                     |   =|\n"
					  "                     |    |\n"
					  "--------------------/ ,  . \\--------._\n";
	file << tree << std::endl;
	file.close();
	std::cout << "Shrubbery created in " << this->_target << "_shrubbery" << std::endl;
};
