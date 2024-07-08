#ifndef ROBOTOMYREQUESTFORM_HPP
# define ROBOTOMYREQUESTFORM_HPP

#include "AForm.hpp"

class AForm;

class RobotomyRequestForm : public AForm
{
	private:
		std::string target;
	public:
		RobotomyRequestForm(std::string target);
		~RobotomyRequestForm();
		RobotomyRequestForm &operator=(const RobotomyRequestForm &another);
		RobotomyRequestForm(const RobotomyRequestForm &another);
		std::string getTarget() const;
		void	execute(Bureaucrat const & executor) const;
		class FormIsNotSigned : public std::exception
		{
			public :
				const char *what() const throw();
		};
};



#endif