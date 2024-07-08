#include "Bureaucrat.hpp"
#include "AForm.hpp"
#include "ShrubberyCreationForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"

int main()
{
	// ******** CASE 1 ********
{
	Bureaucrat	bilal("Bureaucrat", 1);
	AForm *a = new ShrubberyCreationForm("A");
	AForm *b = new RobotomyRequestForm("B");
	AForm *c = new PresidentialPardonForm("C");

	a->beSigned(bilal);
	a->execute(bilal);
	b->beSigned(bilal);
	b->execute(bilal);
	c->beSigned(bilal);
	c->execute(bilal);

	bilal.executeForm(*a);
	bilal.executeForm(*b);
	bilal.executeForm(*c);
	delete a;
	delete b;
	delete c;
	std::cout << "-------------------------------------" << std::endl;
}
	// ******** CASE 2 ********
{
	Bureaucrat	bilal("bilal", 130);
	AForm *a = new ShrubberyCreationForm("ayhan1");
	AForm *b = new RobotomyRequestForm("ayhan2");
	AForm *c = new PresidentialPardonForm("ayhan3");
	try
	{
		a->beSigned(bilal);
		a->execute(bilal);
		b->beSigned(bilal);
		b->execute(bilal);
		c->beSigned(bilal);
		c->execute(bilal);

		bilal.executeForm(*a);
		bilal.executeForm(*b);
		bilal.executeForm(*c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	delete a;
	delete b;
	delete c;
}
	return (0);
}