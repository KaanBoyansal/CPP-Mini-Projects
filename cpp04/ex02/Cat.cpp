#include "Cat.hpp"

Cat::Cat(): AAnimal("Cat") 
{
	std::cout << "Cat default constructor called" << std::endl; 
	this->brain = new Brain(); 
}

Cat::Cat(const Cat &obj) 
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->brain = new Brain(*(obj.brain));
	this->type = obj.type;
}

Cat	&Cat::operator=(const Cat &obj) 
{ 
	std::cout << "Cat copy asignment operator called" << std::endl;
	this->type = obj.type;
	if (this->brain)
	{
		delete this->brain;
		this->brain = new Brain(*(obj.brain));
	}
	return (*this);
}

void	Cat::makeSound(void) const { std::cout << "MEOW MEOW MEOW MEOW!" << std::endl; }

std::string Cat::getType( void ) const
{
	return (this->type);
}

Cat::~Cat() 
{ 
	std::cout << "Cat destructor called." << std::endl;
	delete this->brain;
}