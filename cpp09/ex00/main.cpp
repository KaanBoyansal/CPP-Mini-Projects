#include "BitcoinExchange.hpp"

int main(int ac, char **av){
	std::map<std::tm, float, tmCompare> btcDB;
	std::ifstream inputFile;
	if (ac < 2){
		std::cerr << "Error: could not open file." << std::endl;
		return (EXIT_FAILURE);
	}
	if (initFileDatas(btcDB, inputFile, av[1]))
		return (EXIT_FAILURE);
	convertDatas(btcDB, inputFile);
	return (EXIT_SUCCESS);
}
