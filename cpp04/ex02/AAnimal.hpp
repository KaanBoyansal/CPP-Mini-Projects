#ifndef AANIMAL_HPP
# define AANIMAL_HPP

#include <iostream>

class AAnimal
{
protected:
	std::string	type;
public:
	AAnimal();
	AAnimal(std::string type);
	AAnimal(const AAnimal &obj);
	AAnimal	&operator=(const AAnimal &obj);
	virtual	~AAnimal() = 0;
	virtual std::string	getType(void) const;
	virtual void	makeSound(void) const = 0;
};


#endif