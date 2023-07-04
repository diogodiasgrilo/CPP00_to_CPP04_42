/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.cpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:54:54 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/04 17:40:43 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() 
{
    _int = 0;
	_double = 0;
	_float = 0;
	_isWrong = false;
	_char = 0;
	_type = INVALID;
	_input = "";
}

ScalarConverter::ScalarConverter(ScalarConverter &src)
{
    _int = src._int;
	_double = src._double;
	_float = src._float;
	_char = src._char;
	_isWrong = src._isWrong;
	_type = src._type;
	_input = src._input;
}

ScalarConverter &ScalarConverter::operator=(ScalarConverter const &src)
{
    if (this == &src)
		return *this;
	this->_int = src._int;
    this->_float = src._float;
	this->_double = src._double;
	this->_char = src._char;
	this->_isWrong = src._isWrong;
	this->_type = src._type;
	this->_input = src._input;
	return *this;
}

ScalarConverter::~ScalarConverter() {}

void    ScalarConverter::detect_type(std::string str)
{
    int i = 0;
	int has_dot = 0;
	int has_f = 0;
	int has_letter = 0;
	int has_num = 0;
    this->setInput(str);

    if (isLiteral(this->_input) == true)
	{
		this->setType(PSEUDOLIT);
		return;
	}
    while (str[i])
    {
        if (std::isdigit(str[i]))
            has_num = 1;
        else if (str[i] == '.')
            has_dot = 1;
        else if (str[i] == 'f' && str[i + 1] == '\0')
            has_f = 1;
        else if (std::isalpha(str[i]))
            has_letter = 1;
        i++;
    }
    if (has_num == 1 && has_dot == 1 && has_f == 1 && has_letter == 0) 
    {
        this->setType(FLOAT);
        this->_float = atof(this->_input.c_str());
    }
    else if (has_num == 1 && has_dot == 1 && has_f == 0 && has_letter == 0)
    {
        this->setType(DOUBLE);
        this->_double = atof(this->_input.c_str());
    }
    else if (has_num == 1 && has_dot == 0 && has_f == 0 && has_letter == 0)
    {
        this->setType(INT);
        if (std::atol(this->_input.c_str()) >= INT_MIN && std::atol(this->_input.c_str()) <= INT_MAX) {
			this->_int = std::atoi(this->_input.c_str());
			this->_char = this->_int;
		}
		else
			this->_isWrong = true;
    }
	else if (i == 1)
    {
        this->setType(CHAR);
        this->_char = static_cast<char>(*(this->_input.c_str()));
    }
    else 
        this->setType(INVALID);
}

void ScalarConverter::convert(const std::string &str)
{
    this->detect_type(str);
    switch(this->getType())
	{
		case FLOAT:
			this->_char = static_cast<char>(this->_float);
			this->_double = static_cast<double>(this->_float);
			this->_int = static_cast<int>(this->_float);
			break;
		case INT:
			this->_float = static_cast<float>(this->_int);
			this->_char = static_cast<char>(this->_int);
			this->_double = static_cast<double>(this->_int);
			break;
		case DOUBLE:
			this->_char = static_cast<char>(this->_double);
			this->_float = static_cast<float>(this->_double);
			this->_input = static_cast<int>(this->_double);
			break;
		case CHAR:
			this->_int = static_cast<int>(this->_char);
			this->_double = static_cast<double>(this->_char);
			this->_float = static_cast<float>(this->_char);
			break;
		default:
			break;
	}
    this->print_data(str);
}

void ScalarConverter::getIArg() const 
{
	std::cout << "int: ";
	if (this->_type == PSEUDOLIT || this->_type == INVALID)
		std::cout << "impossible" << std::endl;
	else if (this->_isWrong == true)
		std::cout << "overflow" << std::endl;
	else if (std::atol(this->_input.c_str()) < INT_MIN || std::atol(this->_input.c_str()) > INT_MAX)
		std::cout << "overflow" << std::endl;
	else
		std::cout << this->_int << std::endl;
}

void ScalarConverter::getFArg() const 
{
	std::cout << "float: ";
	if (this->_type == PSEUDOLIT) {
		if (this->_input == "-inf" || this->_input == "+inf" || this->_input == "nan")
			std::cout << this->_input << "f" << std::endl;
		else
			std::cout << this->_input << std::endl;
	}
	else if (this->_type == INVALID)
		std::cout << "impossible" << std::endl;
	else if (std::atol(this->_input.c_str()) >= INT_MIN && std::atol(this->_input.c_str()) <= INT_MAX)
	{
		std::cout << std::fixed << std::setprecision(1) << this->_float << "f" << std::endl;
	}
	else
		std::cout << this->_input << "f" << std::endl;
}


void ScalarConverter::getCArg() const 
{
	std::cout << "char: ";
	if (_type == PSEUDOLIT || _type == INVALID)
		std::cout << "impossible" << std::endl;
	else if (_char >= 32 && _char <= 126)
		std::cout << "'" << _char << "'" << std::endl;
	else
		std::cout << "Non displayable" << std::endl;
}

void ScalarConverter::getDArg() const 
{
	std::cout << "double: ";
	if (this->_type == PSEUDOLIT) {
		std::cout << convertLiteralToDouble(this->_input) << std::endl;
	}
	else if (this->_type == INVALID)
		std::cout << "impossible" << std::endl;
	else if (std::atol(this->_input.c_str()) >= INT_MIN && std::atol(this->_input.c_str()) <= INT_MAX)
	{
		std::cout << std::fixed << std::setprecision(1) << this->_double << std::endl;
	}
	else
		std::cout << this->_input << std::endl;
}

int	f_period_float(std::string str)
{
	int l = str.length();
	
	if (l >= 2 && str[l - 1] == 'f' && str[l - 2] == '.')
		return (1);
	return (0);
}

void ScalarConverter::print_data(std::string str) 
{
	if (str[0] != '.' && str[str.length() - 1] != '.' && !f_period_float(str))
	{
 		getCArg();
		getIArg();
		getFArg();
		getDArg();
	}
	else
	{
		std::cout << "char: impossible" << std::endl;
		std::cout << "int: impossible" << std::endl;
		std::cout << "float: impossible" << std::endl;
		std::cout << "double: impossible" << std::endl;
	}	
}

int     ScalarConverter::getType(void)
{
    return (this->_type);
}

void    ScalarConverter::setInput(std::string str)
{
    _input = str;
}

void    ScalarConverter::setType(int type)
{
    this->_type = type;
}

bool isLiteral(std::string str)
{
	if (str == "nan"|| str == "nanf" || str == "+inff" || str == "-inff" || str == "-inf" || str == "+inf")
		return true;
	return false;
}

std::string convertLiteralToDouble(std::string str)
{
	if (str == "nanf")
		return "nan";
	if (str == "+inff")
		return "+inf";
	if (str == "-inff")
		return "-inf";
	return str;
}
