/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:43:22 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/26 11:37:07 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

std::string TrimString(std::string str)
{
    while (std::isspace(*str.begin()))
        str.erase(0, 1);
    while (std::isspace(*str.end()))
        str.erase(str.size() - 1, 1);
    return str;
}

int ConvertToInt(std::string str) {
    int final = 0;
    int i = 0;

    while (std::isdigit(*(str.begin() + i)) && str[i]) {
        final += final * 10 + str[i] - '0';
        i++;
    }
    return final;
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