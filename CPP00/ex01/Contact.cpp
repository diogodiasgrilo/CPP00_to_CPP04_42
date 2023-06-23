/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:37:40 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/23 16:05:58 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Contact.hpp"

Contact::Contact()
{
    this->is_empty = 1;
    this->index = 0;
}

int     Contact::GetEmpty(void)
{
    return (this->is_empty);
}

void    Contact::SetIndex(int index)
{
    this->index = index;
}

void Contact::DisplayContact() 
{
    std::cout << this->first_name << std::endl;
    std::cout << this->last_name << std::endl;
    std::cout << this->nickname << std::endl;
    std::cout << this->phone_number << std::endl;
    std::cout << this->darkest_secret << std::endl;
}

void Contact::CreateContact (int id, std::string f_name, std::string l_name, std::string n_name, std::string num, std::string secrt) 
{
    this->index = id;
    this->first_name = f_name;
    this->last_name = l_name;
    this->nickname = n_name;
    this->phone_number = num;
    this->darkest_secret = secrt;
    this->is_empty = 0;
}

void Contact::DisplayPhoneBook() 
{
    std::cout << std::setw(10) << this->index << "|";
    if (this->first_name.size() > 9)
        std::cout << this->first_name.substr(0,9) << "."<< "|";
    else
        std::cout << std::setw(10) << this->first_name << "|";
    if (this->last_name.size() > 9)
        std::cout << this->last_name.substr(0,9) << "."<< "|";
    else
        std::cout << std::setw(10) << this->last_name << "|";
    if (this->nickname.size() > 9)
        std::cout << this->nickname.substr(0,9) << "."<< std::endl;
    else
        std::cout << std::setw(10) << this->nickname << std::endl;
}