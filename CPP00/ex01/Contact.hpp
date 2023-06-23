/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/23 14:37:42 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/23 18:15:35 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
#define CONTACT_H

#include <iostream>
#include <iomanip>
#include <string>

class Contact
{
    private:
        int index;
        int is_empty;
        std::string first_name;
        std::string last_name;
        std::string nickname;
        std::string phone_number;
        std::string darkest_secret;
    public:
        Contact();
        int     GetEmpty(void);
        void    DisplayContact();
        void    DisplayPhoneBook();
        void    SetIndex(int index);
        void    CreateContact (int id, std::string f_name, std::string l_name, std::string n_name, std::string num, std::string secrt);
};

#endif