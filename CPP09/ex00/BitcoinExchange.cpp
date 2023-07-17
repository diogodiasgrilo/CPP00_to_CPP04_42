/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   BitcoinExchange.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/10 21:22:52 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/17 15:35:01 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "BitcoinExchange.hpp"

static void	getData(std::map<std::string, long double> *data, const char *dataBase) 
{
	std::fstream						dataBaseFile;
	std::string							tmp;
	std::string							date;
	long double							value;

	dataBaseFile.open(dataBase, std::fstream::in);
	while (dataBaseFile) {
		dataBaseFile >> tmp;
		if (tmp.find("-") != std::string::npos) {
			date = tmp.substr(0, tmp.find(","));
			value = atof(tmp.c_str() + strlen(date.c_str()) + 1);
			(*data)[date] = value;
		}
	}
	dataBaseFile.close();
	return ;
}

static void	showData(std::map<std::string, long double> data, std::string str) 
{
	std::map<std::string, long double>::iterator		it;
	std::string											date;
	long double											val;

	date = str.substr(0, str.find(" "));
	val = atof(str.c_str() + str.find("|") + 2);
	it = data.find(date);
	if (it != data.end())
		std::cout << GRNCOLOR << date << " => " << val << " = " << val * data.at(date) << ENDCOLOR << std::endl;
	else {
		data[date] = val;
		it = data.find(date);
		it--;
		std::cout << GRNCOLOR << date << " => " << val << " = " << val * it->second << ENDCOLOR << std::endl;
		data.erase(date);
	}
	return ;
}

static void	checkData(std::map<std::string, long double> data, std::string str) 
{
	int		year;
	int		month;
	int		day;
	long	val;

	year = atoi(str.c_str());
	if (year < 2009) {
		std::cout << REDCOLOR << "Error: transaction was before bitcoin was founded => " << str << ENDCOLOR << std::endl;
		return ;
	}
	month = atoi(str.c_str() + 5);
	if (month < 1 || month > 12) {
		std::cout << REDCOLOR << "Error: bad input => " << str << ENDCOLOR << std::endl;
		return ;
	}
	day = atoi(str.c_str() + 8);
	if (day < 1 || day > 31) {
		std::cout << REDCOLOR << "Error: bad input => " << str << ENDCOLOR << std::endl;
		return ;
	}
	val = atol(str.c_str() + 13);
	if (val < 0 || val > 1000) {
		if (val < 0)
			std::cout << REDCOLOR << "Error: not a positive number." << ENDCOLOR << std::endl;
		else if (val > 1000)
			std::cout << REDCOLOR << "Error: too large a number." << ENDCOLOR << std::endl;
		return ;
	}
	if (year == 2009 && month == 1 && day < 12) {
		std::cout << REDCOLOR << "Error: day was before the first Bitcoin transaction => " << str << ENDCOLOR << std::endl;
		return ;
	}
	showData(data, str);
	return ;
}

static void	readInputFile(std::map<std::string, long double> data, const char *inputFile) 
{
	std::fstream	ifs;
	std::string		tmp;

	ifs.open(inputFile, std::fstream::in);
	while (std::getline(ifs, tmp)) 
	{
		if (tmp.find("date | value") == std::string::npos) {
			checkData(data, tmp);
		}
	}
	return ;
}

void	btc(const char *dataBase, const char *inputFile) 
{
	std::map<std::string, long double>	data;

	getData(&data, dataBase);
	readInputFile(data, inputFile);
	return ;
}

void	checkErrors(int ac, char **av) 
{
	std::fstream	ifs;
	struct stat		info;

	if (ac >= 3)
		throw std::invalid_argument("Error: too many argument.");
	ifs.open(av[1], std::fstream::in);
	if (!(ifs.is_open()))
		throw std::invalid_argument("Error: could not open file.");
	else
		ifs.close();
	lstat(av[1], &info);
	if (S_ISDIR(info.st_mode) || S_ISLNK(info.st_mode))
		throw std::invalid_argument("Error: argument is not a file.");
	return ;
}
