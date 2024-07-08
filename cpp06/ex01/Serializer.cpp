#include "Serializer.hpp"

Serializer::Serializer(){
	std::cout<<"Serializer - Constructor\n";
}

Serializer::~Serializer(){
	std::cout<<"Serializer - Destructor\n";
}

Serializer &Serializer::operator=(const Serializer &obj){
	std::cout<<"Serializer - operator\n";
	(void)obj;
	return *this;
}

Serializer::Serializer(const Serializer &obj){

	(void)obj;
	std::cout<<"Serializer - Copy Constructor\n";
}

uintptr_t Serializer::serialize(Data* ptr){
	return (reinterpret_cast<uintptr_t>(ptr));
}

Data* Serializer::deserialize(uintptr_t raw){
	return (reinterpret_cast<Data*>(raw));
}