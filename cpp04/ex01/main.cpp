#include "Animal.hpp"
#include "Dog.hpp"
#include "Cat.hpp"

int	main(void)
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	j->makeSound();
	i->makeSound();
	delete j;
	delete i;
	std::cout << "-----------------------------------Deep Copy" << std::endl;

	Dog basic;
	{
		Dog tmp = basic;
		tmp.makeSound();
	}

	std::cout << "-----------------------------------End of test" << std::endl;

	std::cout << std::endl;

	std::cout << "-----------------------------------Animal array" << std::endl;
	const Animal* arr[4];

	for (int i = 0; i < 4; i++)
	{
		if (i < 2)
			arr[i] = new Dog();
		else
			arr[i] = new Cat();
	}
	std::cout << "-----------------------------------Deletion of array" << std::endl;
	for (int i = 0; i < 4; i++)
	{
		delete arr[i];
	}
	std::cout << "------------------------------------Array deleted!" << std::endl;

	return (0);
}
