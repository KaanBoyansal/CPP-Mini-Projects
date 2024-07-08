#include "PmergeMe.hpp"

int main(int ac, char **av){
	PmergeMe	pm;
	if (ac < 2 || pm.numCheck(ac, av)){
		std::cerr << "Error" << std::endl;
		return (EXIT_FAILURE);
	}
	std::vector<int> vec;
	std::list<int> lis;
	pm.fillContainers(vec, lis, ac, av);
	pm.printContainers("Before", vec);
	pm.mergeInsertSort(vec, 5);
	pm.mergeInsertSort(lis, 5);
	pm.printContainers("After", lis);
	pm.printTime(vec);
	pm.printTime(lis);
}
