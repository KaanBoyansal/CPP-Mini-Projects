#ifndef SHRUBBERYCREATIONFORM_HPP
# define SHRUBBERYCREATIONFORM_HPP


# include "AForm.hpp"
# include <fstream>

class AForm;

class ShrubberyCreationForm: public AForm
{
private:
	std::string target;
public:
	ShrubberyCreationForm(void);
	ShrubberyCreationForm(std::string trg);
	ShrubberyCreationForm(const ShrubberyCreationForm &obj);
	ShrubberyCreationForm	&operator=(const ShrubberyCreationForm &obj);
	~ShrubberyCreationForm();
	std::string	getTarget(void) const;
	void	execute(Bureaucrat const & executor) const;
	class FormIsNotSigned : public std::exception
	{
		public :
			const char *what() const throw();
	};
};


#endif