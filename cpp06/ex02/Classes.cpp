#include "Classes.hpp"

Base::~Base() {}


Base* generate(void)
{
	std::srand(time(0));
	switch (std::rand() % 3){
		case 0:
			return new A;
		case 1:
			return new B;
		case 2:
			return new C;
		default:
			return NULL;
	}
}


void identify(Base* p)
{
	std::string type;
	if(dynamic_cast<A*>(p))
		type = "A";
	else if(dynamic_cast<B*>(p))
		type = "B";
	else if(dynamic_cast<C*>(p))
		type = "C";
	else
		type = "nothing";
	std::cout << "Class: "<< type << std::endl;
}


void identify(Base& p)
{
		std::string type;
	try{
		A& a = dynamic_cast<A&>(p);
		(void)a;
		type = "A";
	}catch (std::bad_cast& ex){
		try{
			B& b = dynamic_cast<B&>(p);
			(void)b;
			type = "B";
		}catch (std::bad_cast& ex){
			try{
				C& c = dynamic_cast<C&>(p);
				(void)c;
				type = "C";
			}catch (std::bad_cast& ex){
				type = "undefined";
			}
		}
	}
	std::cout<< "Referance : "<< type << std::endl;
}
