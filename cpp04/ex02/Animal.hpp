#ifndef ANIMAL_HPP
# define ANIMAL_HPP

# include <iostream>
# include <string>

class Animal
{
protected:
	std::string	type;
public:
	Animal();
	Animal(std::string type);
	Animal(const Animal &obj);
	Animal	&operator=(const Animal &obj);
	virtual	~Animal();
	std::string	getType(void) const;
	virtual void	makeSound(void) const;
};







#endif