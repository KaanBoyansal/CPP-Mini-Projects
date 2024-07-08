#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal():type("Default")
{
	std::cout << "Animal default consturctor called." << std::endl;
}

WrongAnimal::WrongAnimal(std::string type):type(type)
{
	std::cout << "Animal consturctor called." << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &obj) { std::cout << "Animal copy consturctor called." << std::endl; *this = obj; }

WrongAnimal	&WrongAnimal::operator=(const WrongAnimal &obj) { std::cout << "Animal copy asignment operator called." << std::endl; this->type = obj.type; return (*this); }

WrongAnimal::~WrongAnimal()
{
	std::cout << "Animal destrcutor called." << std::endl;
}

std::string	WrongAnimal::getType(void) const { return (this->type); }

void	WrongAnimal::makeSound(void) const { std::cout << "An animal sound!" << std::endl; }
