/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PresidentialPardonForm.cpp                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 21:30:58 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/02 00:53:53 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm() : AForm("default", "presidential pardon", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(std::string target) : AForm(target, "presidential pardon", 25, 5) {}

PresidentialPardonForm::PresidentialPardonForm(PresidentialPardonForm &src) : AForm(src)
{
    *this = src;
}

PresidentialPardonForm &PresidentialPardonForm::operator=(PresidentialPardonForm const &src)
{
    AForm::operator=(src);
    return (*this);
}

PresidentialPardonForm::~PresidentialPardonForm() {}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const
{
    if (checkRequirements(executor))
        std::cout << this->getTarget() << " has been pardoned by Zafod Beeblebrox." << std::endl;
}