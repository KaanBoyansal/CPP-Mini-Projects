#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "Intern.hpp"

int main()
{
	Intern	someRandomIntern;
	Bureaucrat b("brc", 1);
	AForm*	rrf;

try
{
	rrf = someRandomIntern.makeForm("robotomy srequest", "Bender");
	b.signForm(*rrf);
	b.executeForm(*rrf);
}
catch(const Intern::CouldntCreate &e)
{
	std::cerr << e.what() << '\n';
}
	delete rrf;
	return (0);
}
