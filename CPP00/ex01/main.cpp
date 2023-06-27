/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:43:22 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/23 15:58:05 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string TrimString(std::string str)
{
    while (std::isspace(str.front()))
        str.erase(0, 1);
    while (std::isspace(str.back()))
        str.pop_back();
    return str;
}

int ConvertToInt(std::string str)
{
    str.erase(0, str.find_first_not_of('0'));
    if (str.empty())
        return (0);
    return (std::atoi(str.c_str()));
}

std::string GetLine(std::string prompt) {
    std::string str;

    std::cout << prompt;
    std::getline(std::cin, str);
    str = TrimString(str);
    while (str.empty())
    {
        std::cout << prompt;
        std::getline(std::cin, str);
        str = TrimString(str);
    }
    return (str);
}

int main(void)
{
    std::string command;
    PhoneBook book;

    command = GetLine("Enter a command: ");
    while (command.compare("EXIT"))
    {
        if (!command.compare("ADD"))
            book.Add();
        else if (!command.compare("SEARCH"))
            book.Search();
        command = GetLine("Enter a command: ");
    }
}