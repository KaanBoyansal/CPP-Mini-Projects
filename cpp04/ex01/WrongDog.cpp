#include "WrongDog.hpp"

WrongDog::WrongDog(): WrongAnimal("Dog") { std::cout << "Dog default constructor called" << std::endl; }

WrongDog::WrongDog(const WrongDog &obj) { std::cout << "Dog copy constructor called" << std::endl; *this = obj; }

WrongDog	&WrongDog::operator=(const WrongDog &obj) { std::cout << "Dog copy asignment operator called" << std::endl; this->type = obj.type; return (*this); }

void	WrongDog::makeSound(void) const { std::cout << "HAV HAV HAV HAV!" << std::endl; }

WrongDog::~WrongDog() { std::cout << "Dog destructor called." << std::endl; }