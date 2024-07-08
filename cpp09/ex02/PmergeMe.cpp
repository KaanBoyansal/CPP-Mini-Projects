#include "PmergeMe.hpp"

PmergeMe::PmergeMe(){
	vectorTime = 0;
	listTime = 0;
}

PmergeMe::~PmergeMe(){
}

PmergeMe::PmergeMe(const PmergeMe& copy){
	*this = copy;
}

PmergeMe& PmergeMe::operator=(const PmergeMe& value){
	(void) value;
	return *this;
}

void	PmergeMe::printTime(std::vector<int>& container){
	std::cout << "Time to process a range of " << container.size() << " elements with std::vector<int> : " << std::fixed << std::setprecision(6) << vectorTime << " us" << std::endl;
}

void	PmergeMe::printTime(std::list<int>& container){
	std::cout << "Time to process a range of " << container.size() << " elements with std::list<int> : " << std::fixed << std::setprecision(6) << listTime << " us" << std::endl;
}

template <typename Iterator>
void	PmergeMe::insertSort(Iterator begin, Iterator end){
	for (Iterator it = begin; it != end; ++it) {
		Iterator current = it;
		Iterator tmp = it;
		std::advance(tmp, -1);
		while (current != begin && *tmp > *current) {
			std::swap(*tmp, *current);
			--current;
			std::advance(tmp, -1);
		}
	}
}

void	PmergeMe::mergeInsertSort(std::vector<int>& container, size_t treshold){
	std::clock_t	clockBegin = clock();
	if (container.size() <= treshold){
		insertSort(container.begin(), container.end());
		return ;
	}
	std::vector<int>::iterator begin = container.begin();
	std::vector<int>::iterator mid = container.begin() + (container.end() - container.begin()) / 2;
	std::vector<int>::iterator end = container.end();
	std::vector<int> left_subcontainer(begin,mid);
	std::vector<int> right_subcontainer(mid,end);
	mergeInsertSort(left_subcontainer,treshold);
	mergeInsertSort(right_subcontainer,treshold);
	std::merge(left_subcontainer.begin(),left_subcontainer.end(),
				right_subcontainer.begin(),right_subcontainer.end(),container.begin());
	std::clock_t	clockEnd = clock();
	this->vectorTime = double(clockEnd - clockBegin) / CLOCKS_PER_SEC;
}

void	PmergeMe::mergeInsertSort(std::list<int>& container, size_t treshold){
	std::clock_t	clockBegin = clock();
	if (container.size() <= treshold){
		insertSort(container.begin(), container.end());
		return ;
	}
	std::list<int>::iterator begin = container.begin();
	std::list<int>::iterator mid = container.begin();
	std::advance(mid, container.size() / 2);
	std::list<int>::iterator end = container.end();
	std::list<int> left_subcontainer(begin,mid);
	std::list<int> right_subcontainer(mid,end);
	mergeInsertSort(left_subcontainer,treshold);
	mergeInsertSort(right_subcontainer,treshold);
	std::merge(left_subcontainer.begin(),left_subcontainer.end(),
				right_subcontainer.begin(),right_subcontainer.end(),container.begin());
	std::clock_t	clockEnd = clock();
	this->listTime = double(clockEnd - clockBegin) / CLOCKS_PER_SEC;
}

void	PmergeMe::printContainers(std::string preword, std::vector<int>& container){
	std::cout << preword << ":\t";
	std::vector<int>::iterator it = container.begin();
	for (; it != container.end();){
		std::cout << *it;
		if (++it != container.end())
			std::cout << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::printContainers(std::string preword, std::list<int>& container){
	std::cout << preword << ":\t";
	std::list<int>::iterator it = container.begin();
	for (; it != container.end();){
		std::cout << *it;
		if (++it != container.end())
			std::cout << " ";
	}
	std::cout << std::endl;
}

void	PmergeMe::fillContainers(std::vector<int>& list1, std::list<int>& list2, int ac, char **av){
	for (int i = 1; i < ac; i++){
		try{
			list1.push_back(std::stoi(av[i]));
			list2.push_back(std::stoi(av[i]));
		}catch (std::exception& ex){
			std::cerr << ex.what() << std::endl;
			exit(EXIT_FAILURE);
		}
	}
}

bool	PmergeMe::numCheck(int ac, char **av){
	for (int i = 1; i < ac; i++)
		for (size_t j = 0; j < std::string(av[i]).length(); j++)
			if (!std::isdigit(av[i][j]))
				return (true);
	return (false);
}
