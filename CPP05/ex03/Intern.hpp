/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Intern.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/02 00:31:37 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/02 00:35:59 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef INTERN_HPP
# define INTERN_HPP

#include <iostream>
#include <string>
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class AForm;

class Intern
{
    public:
        Intern();
        Intern(Intern &src);
        Intern &operator=(Intern const &src);
        ~Intern();
        AForm *makeForm(std::string const &formName, std::string const &target);

        class FormDoesNotExistException : public std::exception
        {
            public:
                virtual const char *what() const throw();
        };
};

#endif


