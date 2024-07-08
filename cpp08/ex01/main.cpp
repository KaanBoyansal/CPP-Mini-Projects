#include "Span.hpp"

int main(void)
{
		Span span(5);
		std::vector<int> vc(1, -5);
		std::srand(time(0));
		std::cout << "Values: ";
		for (size_t i = 0; i < 5; i++){
			int tmp = rand() % 20;
			std::cout << tmp << " ";
			vc.push_back(tmp);
		}
		std::cout << std::endl;
		try{
			span.fillSpan(vc.begin(), vc.end());
		}catch(std::exception& e){
			std::cout << e.what() << std::endl;
		}
		std::cout << "Shortest Span: " << span.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << span.longestSpan() << std::endl;
		Span sp = Span(6);
		try
		{
			sp.addNumber(6);
			sp.addNumber(3);
			sp.addNumber(17);
			sp.addNumber(9);
			sp.addNumber(11);
			sp.addNumber(15);
		}
		catch(std::exception& e){
			std::cout << e.what() << std::endl;
		}
		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;
		return (0);
}
