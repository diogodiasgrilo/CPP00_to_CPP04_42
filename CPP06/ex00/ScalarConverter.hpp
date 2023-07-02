/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScalarConverter.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 11:54:52 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/02 16:12:58 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCALARCONVERTER_HPP
# define SCALARCONVERTER_HPP

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath>

#define CHAR 1
#define FLOAT 2
#define DOUBLE 3
#define INT 4
#define INVALID 5
#define PSEUDOLIT 6

class ScalarConverter
{
    private:
        std::string _input;
        int  _type;
        char _char;
        int _int;
        float _float;
        double _double;
        bool _isWrong;
    public:
        ScalarConverter();
        ScalarConverter(ScalarConverter &src);
        ScalarConverter &operator=(ScalarConverter const &src);
        ~ScalarConverter();
        void    convert(const std::string &std);
        void    detect_type(std::string str);
        void    setInput(std::string str);
        void    getIArg() const;
        void    getFArg() const;
        void    getCArg() const;
        void    getDArg() const;
        void    print_data();
        void    setType(int type);
        int     getType(void); 
};

bool        isLiteral(std::string str);
std::string convertLiteralToDouble(std::string str);

#endif