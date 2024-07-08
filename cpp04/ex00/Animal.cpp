#include "Animal.hpp"

Animal::Animal():type("Default")
{
	std::cout << "Animal default consturctor called." << std::endl;
}

Animal::Animal(std::string type):type(type)
{
	std::cout << "Animal consturctor called." << std::endl;
}

Animal::Animal(const Animal &obj) { std::cout << "Animal copy consturctor called." << std::endl; *this = obj; }

Animal	&Animal::operator=(const Animal &obj) { std::cout << "Animal copy asignment operator called." << std::endl; this->type = obj.type; return (*this); }

Animal::~Animal()
{
	std::cout << "Animal destrcutor called." << std::endl;
}

std::string	Animal::getType(void) const { return (this->type); }

void	Animal::makeSound(void) const { std::cout << "An animal sound!" << std::endl; }
