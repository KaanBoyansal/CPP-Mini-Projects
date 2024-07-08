#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongAnimal.hpp"
#include "WrongDog.hpp"
#include "WrongCat.hpp"

int	main(void)
{
	{	
		const Animal* meta = new Animal();
		const Animal* dog = new Dog();
		const Animal* cat = new Cat();

		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		meta->makeSound();
		cat->makeSound();
		dog->makeSound();

		delete meta;
		delete cat; 
		delete dog;

		std::cout << "---------------------------------------------" << std::endl;
	}

	{
		const WrongAnimal* meta = new WrongAnimal();
		const WrongAnimal* dog = new WrongDog();
		const WrongAnimal* cat = new WrongCat();

		std::cout << dog->getType() << " " << std::endl;
		std::cout << cat->getType() << " " << std::endl;
		meta->makeSound();
		cat->makeSound();
		dog->makeSound();

		delete meta;
		delete cat; 
		delete dog;
	}
}
