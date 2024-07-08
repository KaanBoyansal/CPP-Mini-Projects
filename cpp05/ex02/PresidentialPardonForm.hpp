#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP

#include "AForm.hpp"

class PresidentialPardonForm : public AForm
{
	private :
		std::string target;
	public :
		PresidentialPardonForm(std::string target);
		~PresidentialPardonForm();
		PresidentialPardonForm &operator=(const PresidentialPardonForm &another);
		PresidentialPardonForm(const PresidentialPardonForm &another);
		std::string getTarget() const;
		void	execute(Bureaucrat const & executor) const;
		class FormIsNotSigned : public std::exception
		{
			public :
				const char *what() const throw();
		};
};

#endif