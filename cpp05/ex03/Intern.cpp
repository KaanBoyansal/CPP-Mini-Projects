#include "Intern.hpp"

Intern::Intern() {}
Intern::~Intern() {}
Intern::Intern(const Intern &another) { *this = another; }
Intern &Intern::operator=(const Intern &another) { if (this == &another) { return (*this); } return (*this); }

AForm *Intern::makeForm(std::string nameOfForm, std::string target)
{
	int			i;
	std::string	formNames[3] = {"shrubbery request", "robotomy request", "presidential request"};
	AForm		*forms[3] = {new ShrubberyCreationForm(target), new RobotomyRequestForm(target), new PresidentialPardonForm(target)};

	i = -1;
	while(i != 3 && formNames[++i] != nameOfForm);
	if ((i <= 2 && i >= 0) && (std::cout << "Intern creates " + nameOfForm << std::endl))
		return (forms[i]);
	throw Intern::CouldntCreate();
	return (NULL);
}

const char *Intern::CouldntCreate::what() const throw()
{
	return ("Intern couldn't create the form!");
}
