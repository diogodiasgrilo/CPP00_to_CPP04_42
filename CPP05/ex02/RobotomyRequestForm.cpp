/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   RobotomyRequestForm.cpp                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/01 21:31:01 by diogpere          #+#    #+#             */
/*   Updated: 2023/07/02 00:54:29 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm() : AForm("default", "robotomy request", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(std::string target) : AForm(target, "robotomy request", 72, 45) {}

RobotomyRequestForm::RobotomyRequestForm(RobotomyRequestForm &src) : AForm(src)
{
    *this = src;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(RobotomyRequestForm const &src)
{
    AForm::operator=(src);
    return (*this);
}

RobotomyRequestForm::~RobotomyRequestForm()
{
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const
{
    if (checkRequirements(executor))
    {
        std::cout << this->getTarget() << " drill drill drrrrriiiillllllll" << std::endl;
        int random = rand() % 2;
        if (random == 0)
            std::cout << this->getTarget() << " has been robotomized successfully." << std::endl;
        else
            std::cout << this->getTarget() << " robotomization failed." << std::endl;
    }
}