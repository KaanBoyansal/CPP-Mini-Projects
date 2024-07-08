#include "Form.hpp"

Form::Form(): name("Default"), signGrade(75), execGrade(75)
{
	this->isSigned = false;
	std::cout << "Default constructor called" << std::endl;
}

Form::Form(std::string name, int signGrade, int execGrade): name(name), signGrade(signGrade), execGrade(execGrade)
{
	this->isSigned = false;
	if (this->signGrade < 1 || this->execGrade < 1)
		throw Form::GradeTooHighException();
	else if (this->signGrade > 150 || this->execGrade > 150)
		throw Form::GradeTooLowException();
}

Form	&Form::operator=(const Form &obj)
{
	if (this == &obj)
	{
		return (*this);
	}
	this->isSigned = obj.isSigned;
	return (*this);
}

Form::Form(const Form &obj): name(obj.name), signGrade(obj.signGrade), execGrade(obj.execGrade)
{
	this->isSigned = obj.isSigned;
}

Form::~Form() {}

std::string Form::getName() const
{
	return (this->name);
}
bool Form::is_signed() const
{
	return (this->isSigned);
}
int	Form::getSign() const
{
	return (this -> signGrade);
}
int	Form::getExec() const
{
	return (this->execGrade);
}

std::ostream &operator<<(std::ostream &o, const Form &f)
{
	o << "Name : " + f.getName() << std::endl;
	o << "Is signed : " << f.is_signed() << std::endl;
	o << "Form grade to sign " << f.getSign() << std::endl;
	o << "Form grade to execute " << f.getExec() << std::endl;
	return (o);
}

void	Form::beSigned(const Bureaucrat &b)
{
	if (b.getGrade() <= this->signGrade)
		this->isSigned = true;
	else
		throw (Form::GradeTooLowException());
}

const char *Form::GradeTooHighException::what() const throw()
{
	return ("Grade is too high!");
}

const char *Form::GradeTooLowException::what() const throw()
{
	return ("Grade is too low!");
}
