#pragma once
#include <iostream>
#include <vector>
#include <list>
#include <ctime>
#include <iomanip>

class PmergeMe{
	private:
		double	vectorTime;
		double	listTime;
	public:
		PmergeMe();
		~PmergeMe();
		PmergeMe(const PmergeMe& copy);
		PmergeMe& operator=(const PmergeMe& value);
		void	mergeInsertSort(std::vector<int>& container, size_t treshold);
		void	mergeInsertSort(std::list<int>& container, size_t treshold);
		void	printContainers(std::string preword, std::vector<int>& container);
		void	printContainers(std::string preword, std::list<int>& container);
		bool	numCheck(int ac, char **av);
		void	fillContainers(std::vector<int>& list1, std::list<int>& list2, int ac, char **av);
		void	printTime(std::vector<int>& container);
		void	printTime(std::list<int>& container);
	private:
		template <typename Iterator>
		void	insertSort(Iterator begin, Iterator end);
};
