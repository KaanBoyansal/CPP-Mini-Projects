#include "Bureaucrat.hpp"
#include "Form.hpp"

int main()
{
	//******** CASE 1 ********
{
	Form f1("case1", 5, 10);
	Bureaucrat b1("burr1", 4);
	b1.signForm(f1);
	std::cout << "--------------------" << std::endl;
}

	//******** CASE 2 ********

{
	Form f1("case2", 5, 10);
	Bureaucrat b1("burr2", 6);
	b1.signForm(f1);
	std::cout << "--------------------" << std::endl;
}

	//******** CASE 3 ********

{
	Form f1("case3", 5, 10);
	std::cout << f1 << std::endl;
	std::cout << "--------------------" << std::endl;
}
	//******** CASE 4 ********
{
	try
	{
		Form f1("case4", 0, 10);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
	std::cout << "--------------------" << std::endl;
}
	//******** CASE 5 ********
{
	try
	{
		Form f1("case5", 1, 151);
	}
	catch(std::exception &e)
	{
		std::cout << e.what() << std::endl;
	}
}
}
