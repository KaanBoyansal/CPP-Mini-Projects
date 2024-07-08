#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <iostream>
# include <vector>
# include <algorithm>

class CouldntFind: public std::exception
{
	public:
		virtual const char	*what() const throw();
};

const char	*CouldntFind::what() const throw() { return "Couldnt find the given number in the container!"; }

template <typename T>
void	easyfind(T &cnt, int a)
{
	if (cnt.end() == std::find(cnt.begin(), cnt.end(), a))
		throw CouldntFind();
	else
		std::cout << "Succesfuly found the given number in the container." << std::endl;
}


#endif