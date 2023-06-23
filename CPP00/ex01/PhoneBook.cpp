/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:29:20 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/23 16:12:00 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include "PhoneBook.hpp"

int ConvertToInt(std::string str);
std::string GetLine(std::string prompt);

PhoneBook::PhoneBook() 
{
    for(int i = 0; i < 8; i++)
        this->List[i].SetIndex(i + 1);
}

int PhoneBook::find_last(void)
{
    for (int i = 0; i < 8; i++) {
        if (this->List[i].GetEmpty())
            return (i);
    }
    return (8);
}

void PhoneBook::rotate_contacts() 
{
    for (int i = 7; i > 0; i--) {
        this->List[i] = this->List[i - 1];
        this->List[i].SetIndex(i + 1);
    }
}

void PhoneBook::DisplayAllContacts() 
{
    for (int i = 0; i < 8; i++){
        this->List[i].DisplayPhoneBook();
    }
}

void PhoneBook::Search() 
{
    int index;

    this->DisplayAllContacts();
    if (this->find_last() == 0)
        return;
    index = ConvertToInt(GetLine("Index of the contact > "));
    while (index < 1 || index > 8)
        index = ConvertToInt(GetLine("Index of the contact > "));
    while (1)
    {
        for (int i = 0; i < 8; i++) 
        {
            if (i + 1 == index && !this->List[i].GetEmpty())
            {
                this->List[i].DisplayContact();
                return;
            }
        }
        index = ConvertToInt(GetLine("Empty index, please try again: "));
    }
}

void PhoneBook::Add(void) {
    Contact new_contact;
    std::string first_name;
    std::string last_name;
    std::string nickname;
    std::string number;
    std::string secret;

    first_name = GetLine("First Name: ");
    last_name = GetLine("Last Name: ");
    nickname = GetLine("Nickname: ");
    number = GetLine("Number: ");
    secret = GetLine("Darkest Secret: ");
    new_contact.CreateContact(1, first_name, last_name, nickname, number, secret);
    this->rotate_contacts();
    this->List[0] = new_contact;
}