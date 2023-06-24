/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:58:40 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/24 17:58:04 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

Harl::Harl()
{
    level[0] = "DEBUG";
    level[1] = "INFO";
    level[2] = "WARNING";
    level[3] = "ERROR";
    f[0] = &Harl::debug;
    f[1] = &Harl::info;
    f[2] = &Harl::warning;
    f[3] = &Harl::error;
}

Harl::~Harl(void)
{
    std::cout << "Harl talked to the manager and she reported him to the police." << std::endl;
}

void Harl::debug(void)
{
   std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do!" << std::endl;
}

void Harl::info(void)
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!" << std::endl;
}

void Harl::warning(void)
{
    std::cout << "I think I deserve to have some extra bacon for free. I’ve been coming for years whereas you started working here since last month." << std::endl;
}

void Harl::error(void)
{
    std::cout << "This is unacceptable, I want to talk to the manager now." << std::endl;
}

void Harl::complain(std::string level)
{
    for (int i = 0; i < 4; i++)
    {
        if (level == this->level[i])
            (this->*f[i])();
    }
}