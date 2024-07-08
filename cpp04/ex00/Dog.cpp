#include "Dog.hpp"

Dog::Dog(): Animal("Dog") { std::cout << "Dog default constructor called" << std::endl; }

Dog::Dog(const Dog &obj) { std::cout << "Dog copy constructor called" << std::endl; *this = obj; }

Dog	&Dog::operator=(const Dog &obj) { std::cout << "Dog copy asignment operator called" << std::endl; this->type = obj.type; return (*this); }

void	Dog::makeSound(void) const { std::cout << "WOOF WOOF!" << std::endl; }

Dog::~Dog() { std::cout << "Dog destructor called." << std::endl; }