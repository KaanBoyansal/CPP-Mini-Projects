#include "AForm.hpp"

AForm::AForm(): name("Default"), signGrade(75), execGrade(75)
{
	this->isSigned = false;
	std::cout << "Default constructor called" << std::endl;
}

AForm::AForm(std::string name, int signGrade, int execGrade): name(name), signGrade(signGrade), execGrade(execGrade)
{
	this->isSigned = false;
	if (this->signGrade < 1 || this->execGrade < 1)
		throw GradeTooHighException();
	else if (this->signGrade > 150 || this->execGrade > 150)
		throw GradeTooLowException();
}

AForm	&AForm::operator=(const AForm &obj)
{
	if (this == &obj)
	{
		return (*this);
	}
	this->isSigned = obj.isSigned;
	return (*this);
}

AForm::AForm(const AForm &obj): name(obj.name), signGrade(obj.signGrade), execGrade(obj.execGrade)
{
	this->isSigned = obj.isSigned;
}

AForm::~AForm() {}

std::string AForm::getName() const
{
	return (this->name);
}
bool AForm::is_signed() const
{
	return (this->isSigned);
}
int	AForm::getSign() const
{
	return (this -> signGrade);
}
int	AForm::getExec() const
{
	return (this->execGrade);
}

std::ostream &operator<<(std::ostream &o, const AForm &f)
{
	o << "Name : " + f.getName() << std::endl;
	o << "Is signed : " << f.is_signed() << std::endl;
	o << "Form grade to sign " << f.getSign() << std::endl;
	o << "Form grade to execute " << f.getExec() << std::endl;
	return (o);
}

void	AForm::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->signGrade)
		this->isSigned = true;
	else
		throw (AForm::GradeTooLowException());
}

const char *AForm::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char *AForm::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}