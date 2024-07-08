#include "iter.hpp"

template<typename T>
void print(T &value){
	std::cout << value << " ";
}

template<typename T>
void func(T& value){
	value++;
}

int main(void)
{
	int a[5] = {1, 2, 3, 4, 5};
	std::cout << "a -> ";
	for (int i = 0; i < 5; i++)
		std::cout << a[i] << " ";
	std::cout<<std::endl;
	::iter(a, 5, &func);
	std::cout <<"new a -> ";
	::iter(a, 5, &print);
	std::cout << std::endl;

	char b[5] = {'y', 'u', 's', 'u', 'f'};
	std::cout << "b -> ";
	for (int i = 0; i < 5; i++)
		std::cout << b[i] << " ";
	std::cout<<std::endl;
	::iter(b, 5, &func);
	std::cout <<"new b -> ";
	::iter(b, 5, &print);
	std::cout << std::endl;

	float c[5] = {3.14, 4.11, 0.635, 20.23, 0.9999};
	std::cout << "c -> ";
	for (int i = 0; i < 5; i++)
		std::cout << c[i] << " ";
	std::cout<<std::endl;
	::iter(c, 5, &func);
	std::cout <<"new c -> ";
	::iter(c, 5, &print);
	std::cout << std::endl;

	return 0;
}
