#include "Dog.hpp"

Dog::Dog(): AAnimal("Dog") 
{ 
	std::cout << "Dog default constructor called" << std::endl;
	this->brain = new Brain();
}

Dog::Dog(const Dog &obj) 
{
	std::cout << "Dog copy constructor called" << std::endl; 
	this->type = obj.type;
	this->brain = new Brain(*(obj.brain));
}

Dog	&Dog::operator=(const Dog &obj) 
{ 
	std::cout << "Dog copy asignment operator called" << std::endl;
	this->type = obj.type;
	if (this->brain)
	{
		delete this->brain;
		this->brain = new Brain(*(obj.brain));
	}
	return (*this);
}

void	Dog::makeSound(void) const { std::cout << "WOOF WOOF!" << std::endl; }

std::string Dog::getType( void ) const
{
	return (this->type);
}

Dog::~Dog() 
{ 
	std::cout << "Dog destructor called." << std::endl;
	delete this->brain;
}