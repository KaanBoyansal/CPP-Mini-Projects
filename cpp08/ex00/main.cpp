#include "easyfind.hpp"

int	main(void)
{
	std::vector<int> vec(5, 8);
	std::vector<char> vec2(5, '%');
	int	a = 8;
	int	b = -321;
	char	c = '%';

	try
	{
		easyfind(vec, a);
		easyfind(vec2, c);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
	try
	{
		easyfind(vec, b);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
}
