#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target): AForm("RobotomyRequestForm", 72, 45), target(target)
{
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &another)
{
	if (this != &another)
		this->target = another.getTarget();
	return (*this);
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &another): AForm(another.getName(), another.getSign(), another.getExec())
{
	*this = another;
}

std::string RobotomyRequestForm::getTarget() const
{
	return (this->target);
}

void	RobotomyRequestForm::execute(Bureaucrat const & executor) const
{
	if (!this->is_signed())
		throw (RobotomyRequestForm::FormIsNotSigned());
	else if (executor.getGrade() > this->getExec())
		throw (RobotomyRequestForm::GradeTooLowException());
	srand(time(0));
	if (rand() % 2)
		std::cout << this -> target + " has been robotomized successfully !" << std::endl;
	else
		std::cout << "Robotization of " + this -> target  + " failed !" << std::endl;
}

const char *RobotomyRequestForm::FormIsNotSigned::what() const throw()
{
	return ("Form you are trying to execu-te is not signed!");
}
