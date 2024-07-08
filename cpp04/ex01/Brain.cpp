#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = "An idea that animals should have";
	}
}

Brain::Brain(Brain &obj)
{
	std::cout << "Brain copy constructor called" << std::endl;
	this->ideas = new std::string[100];
	for (int i = 0; i < 100; i++)
	{
		this->ideas[i] = obj.ideas[i];
	}
}

Brain	&Brain::operator=(Brain &obj)
{
	std::cout << "Brain copy asignment operator called" << std::endl;
	if (this->ideas)
	{
		delete [] ideas;
		this->ideas = new std::string[100];
		for (int i = 0; i < 100; i++)
		{
			this->ideas[i] = obj.ideas[i];
		}
	}
	return (obj);
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
	delete [] this->ideas;
}
