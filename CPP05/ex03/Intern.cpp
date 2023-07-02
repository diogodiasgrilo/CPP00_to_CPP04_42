/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 00:31:44 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/02 01:02:20 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Intern.hpp"

Intern::Intern()
{
}

Intern::Intern(Intern &src)
{
    *this = src;
}

Intern &Intern::operator=(Intern const &src)
{
    if (this != &src)
        *this = src;
    return (*this);
}

Intern::~Intern()
{
}

AForm *Intern::makeForm(std::string const &formName, std::string const &target)
{
    try
    {
        AForm *form[3] = {
            new RobotomyRequestForm(target),
            new PresidentialPardonForm(target),
            new ShrubberyCreationForm(target)
        };
        for (int i = 0; i < 3; i++)
        {
            if (form[i]->getName() == formName) {std::cout << "Intern creates " << formName << std::endl; 
            for (int j = 0; j < 3; j++) {if (j != i) {delete form[j];}}
            return (form[i]);}
        }
        for (int j = 0; j < 3; j++) {delete form[j];}
        throw Intern::FormDoesNotExistException();
    }
    catch (std::exception &e) {std::cerr << e.what() << std::endl;}
    return (NULL);
}

const char *Intern::FormDoesNotExistException::what() const throw()
{
    return ("Form does not exist");
}
