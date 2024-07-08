#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(void): AForm("Shrubbery Creation Form", 145, 137)
{
	std::cout << "Shrubbery default constructor called" << std::endl;
	this->target = "Default";
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string trg): AForm("Shrubbery Creation Form", 145, 137)
{
	this->target = trg;
}

ShrubberyCreationForm::ShrubberyCreationForm(const ShrubberyCreationForm &obj): AForm("Shrubbery Creation Form", 145, 137)
{
	*this = obj;
}

ShrubberyCreationForm	&ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj)
{
	if (this != &obj)
		this->target = obj.getTarget();
	return (*this);
}

std::string	ShrubberyCreationForm::getTarget(void) const { return (this->target); }

ShrubberyCreationForm::~ShrubberyCreationForm() {}

const char	*ShrubberyCreationForm::FormIsNotSigned::what() const throw()
{
	return ("Form you are trying to execute is not signed!");
}

void	ShrubberyCreationForm::execute(Bureaucrat const & executor) const
{
	if (executor.getGrade() > this->getExec())
		throw Bureaucrat::GradeTooLowException();
	else if (this->is_signed() == false)
		throw ShrubberyCreationForm::FormIsNotSigned();
	std::ofstream	outfile(this -> target + "_shrubbery");
	outfile << "                ,@@@@@@@," << std::endl;
	outfile << "        ,,,.   ,@@@@@@/@@,  .oo8888o." << std::endl;
	outfile << "     ,&%%&%&&%,@@@@@/@@@@@@,8888\\88/8o" << std::endl;
	outfile << "    ,%&\\%&&%&&%,@@@\\@@@/@@@88\\88888/88'" << std::endl;
	outfile << "    %&&%&%&/%&&%@@\\@@/ /@@@88888\\88888'" << std::endl;
	outfile << "    %&&%/ %&%%&&@@\\ V /@@' `88\\8 `/88'" << std::endl;
	outfile << "    `&%\\ ` /%&'    |.|        \\ '|8'" << std::endl;
	outfile << "        |o|        | |         | |" << std::endl;
	outfile << "        |.|        | |         | |" << std::endl;
	outfile << "     \\/ ._\\//_/__/  ,\\_//__\\/.  \\_//__/_" << std::endl;
	outfile.close();
}
