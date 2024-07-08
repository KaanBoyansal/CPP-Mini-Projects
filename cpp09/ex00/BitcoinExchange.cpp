#include "BitcoinExchange.hpp"

int	createDate(std::map<std::tm, float, tmCompare>& btcDB, std::tm& date, std::string& _date, std::string& line){
	tmCompare comparer;
	std::map<std::tm, float, tmCompare>::iterator it = btcDB.begin();
	try{
		if (strptime(_date.c_str(), "%Y-%m-%d", &date) == nullptr || comparer(date, (*it).first))
			throw WrongDate();
		std::istringstream iss(_date);
		int year;
		char deli;
		int month;
		int day;
		if (iss >> year >> deli >> month >> deli >> day && year > 2008 && month < 13 && month > 0 && day > 0 && day < 32)
			return (0);
		else
			throw WrongDate();
	}catch (std::exception& ex){
		std::cerr << ex.what() << line << std::endl;
		return (1);
	}
}

void	convertBtcToUsd(std::map<std::tm, float, tmCompare>& btcDB, std::string& _date, float value, std::string& line){
	std::tm date = {};
	if (createDate(btcDB, date, _date, line))
		return ;
	if (value <= 0){
		std::cerr << "Error: not a positive number." << std::endl;
		return ;
	}
	if (value >= 1000.0){
		std::cerr << "Error: too large number." << std::endl;
		return ;
	}
	std::map<std::tm, float, tmCompare>::iterator it = btcDB.begin();
	tmCompare cmp;
	while (it != btcDB.end() && cmp((*it).first, date))
		it++;
	if (it != btcDB.begin() && !(it != btcDB.end() && (*it).first.tm_mday == date.tm_mday))
		it--;
	float usd = value * (*it).second;
	std::cout << _date << " => " << value << " = " << usd << std::endl;
}

void	convertDatas(std::map<std::tm, float, tmCompare>& btcDB, std::ifstream& inputFile){
	std::string	line;
	std::getline(inputFile, line);
	while (std::getline(inputFile, line)){
		std::istringstream iss(line);
		std::string date;
		char delim;
		float	value;
		if (iss >> date >> delim >> value && delim == '|')
			convertBtcToUsd(btcDB, date, value, line);
		else
			std::cerr << "Error: bad input => " << line << std::endl;
	}
}

int	openInputFile(std::ifstream& inputFile, std::string fileName){
	inputFile.open(fileName);
	if (!inputFile.is_open()){
		std::cerr << "Error: could not open file." << std::endl;
		return (1);
	}
	return (0);
}

int	initFileDatas(std::map<std::tm, float, tmCompare>& btcDB, std::ifstream& inputFile, std::string fileName){
	if (fill_csv_data(btcDB) || openInputFile(inputFile, fileName))
		return (1);
	return (0);
}

int	fill_csv_data(std::map<std::tm, float, tmCompare>& btcDB){
	std::ifstream		file(btcDbFile, std::ifstream::in);
	std::string			line;
	if (!file.is_open()){
		std::cerr << "Error: could not open file." << std::endl;
		return (1);
	}
	std::getline(file, line);
	while (std::getline(file, line)){
		try {
			std::istringstream iss(line);
			std::string	date;
			std::string	value;
			std::getline(iss, date, ',');
			std::getline(iss, value);
			std::tm _date = {};
			if (strptime(date.c_str(), "%Y-%m-%d", &_date) == nullptr)
				throw DateConversionFailed();
			btcDB[_date] = std::stod(value);
		}
		catch (std::exception& ex){
			std::cerr << ex.what() << line << std::endl;
			return (1);
		}
	}
	return (0);
}
