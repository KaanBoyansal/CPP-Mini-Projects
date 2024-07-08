#ifndef FORM_HPP
# define FORM_HPP

# include <iostream>
# include <string>
# include <exception>
# include "Bureaucrat.hpp"

class Bureaucrat;

class Form
{
	private:
		const std::string	name;
		bool				isSigned;
		const int			signGrade;
		const int			execGrade;
	public:
		Form();
		Form(std::string name, int signGrade, int execGrade);
		Form(const Form &obj);
		Form &operator=(const Form &obj);
		~Form();
		std::string	getName() const;
		int			getSign() const;
		int			getExec() const;
		bool		is_signed() const;
		void		beSigned(const Bureaucrat &obj);

	class GradeTooHighException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
	class GradeTooLowException: public std::exception
	{
		public:
			virtual const char *what() const throw();
	};
};

std::ostream &operator<<(std::ostream &o, const Form &obj);

#endif