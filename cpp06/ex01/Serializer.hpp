#ifndef SERIALIZER_HPP
# define SERIALIZER_HPP

# include <iostream>
# include <string>

struct Data
{
	std::string str;
	int			i;
};


class Serializer
{
	public:
		Serializer();
		~Serializer();
		Serializer(const Serializer &obj);
		Serializer &operator=(const Serializer &obj);
		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};


#endif