#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target): AForm("PresidentialPardonForm", 25, 5), target(target)
{
}

PresidentialPardonForm::~PresidentialPardonForm()
{
}

PresidentialPardonForm &PresidentialPardonForm::operator=(const PresidentialPardonForm &another)
{
	if (this != &another)
		this->target = another.getTarget();
	return (*this);
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &another): AForm(another.getName(), another.getSign(), another.getExec())
{
	*this = another;
}

std::string PresidentialPardonForm::getTarget() const
{
	return (this->target);
}

void	PresidentialPardonForm::execute(Bureaucrat const & executor) const
{
	if (!this->is_signed())
		throw (PresidentialPardonForm::FormIsNotSigned());
	else if (executor.getGrade() > this->getExec())
		throw (PresidentialPardonForm::GradeTooLowException());
	std::cout << this -> target + " has been pardoned by Zaphod Beeblebrox !" << std::endl;
}

const char *PresidentialPardonForm::FormIsNotSigned::what() const throw()
{
	return ("Form you are trying to execu-te is not signed!");
}