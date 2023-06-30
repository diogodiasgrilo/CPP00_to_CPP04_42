/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Bureaucrat.cpp                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: diogpere <diogpere@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 21:41:48 by diogpere          #+#    #+#             */
/*   Updated: 2023/06/29 23:12:55 by diogpere         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : _name(name)
{
    if (grade < MAX_GRADE)
        throw Bureaucrat::GradeTooHighException();
    else if (grade > MIN_GRADE)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade = grade;
}

Bureaucrat::Bureaucrat(const Bureaucrat& bureaucrat) : _name(bureaucrat._name)
{
    *this = bureaucrat;
}

Bureaucrat::~Bureaucrat()
{
}

Bureaucrat&	Bureaucrat::operator=(const Bureaucrat& bureaucrat)
{
    this->_grade = bureaucrat._grade;
    return (*this);
}

std::string	Bureaucrat::getName(void) const
{
    return (this->_name);
}

int			Bureaucrat::getGrade(void) const
{
    return (this->_grade);
}

void		Bureaucrat::incrementGrade(void)
{
    if (this->_grade - 1 < MAX_GRADE)
        throw Bureaucrat::GradeTooHighException();
    else
        this->_grade--;
}

void		Bureaucrat::decrementGrade(void)
{
    if (this->_grade + 1 > MIN_GRADE)
        throw Bureaucrat::GradeTooLowException();
    else
        this->_grade++;
}

const char*	Bureaucrat::GradeTooHighException::what() const throw()
{
    return ("Grade too high");
}

const char*	Bureaucrat::GradeTooLowException::what() const throw()
{
    return ("Grade too low");
}

std::ostream&	operator<<(std::ostream& os, const Bureaucrat& bureaucrat)
{
    os << bureaucrat.getName() << ", bureaucrat grade " << bureaucrat.getGrade() << std::endl;
    return (os);
}