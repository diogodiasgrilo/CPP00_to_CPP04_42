/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/24 16:58:40 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/24 18:59:24 by diogpere         ###   ########.fr       */
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
}

void Harl::debug(void)
{
    std::cout << "[ DEBUG ]\n";
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger.\nI really do!\n\n";
    this->info();
}

void Harl::info(void)
{
    std::cout << "[ INFO ]\n";
    std::cout << "I cannot believe adding extra bacon costs more money.\nYou didn’t put enough bacon in my burger! If you did, I wouldn’t be asking for more!\n\n";
    this->warning();
}

void Harl::warning(void)
{
    std::cout << "[ WARNING ]\n";
    std::cout << "I think I deserve to have some extra bacon for free.\nI’ve been coming for years whereas you started working here since last month.\n\n";
    this->error();
}

void Harl::error(void)
{
    std::cout << "[ ERROR ]\n";
    std::cout << "This is unacceptable, I want to talk to the manager now.\n\n";
}

void Harl::complain(int level)
{
    
    switch (level)
    {
        case 0:
            this->debug();
            break;
        case 1:
            this->info();
            break;
        case 2:
            this->warning();
            break;
        case 3:
            this->error();
            break;
    }
}